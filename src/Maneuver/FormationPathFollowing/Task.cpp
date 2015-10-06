//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Dennis Belleter                                                  *
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FormationPathFollowing
  {
    using DUNE_NAMESPACES;

    //! Circular Buffer fixed size.
    static const int c_queue_size = 20;

    //! %Task arguments.
    struct Arguments
    {
      Matrix vehicles;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Struct for waypoint.
      struct Waypoint
      {
        double lat;
        double lon;
        double z;
        uint8_t z_units;
      };

      //! Struct for vehicles in the formation.
      struct Vehicle
      {
        int vid;        // Vehicle IMC identification number
        float x;        // Desired along-path offset
        float y;        // Desired cross-track offset from main path
        float cy;       // Desired offset in corner
        int cid;        // Communication vehicle Id
      };

      //! Distance at comparison time stamp.
      float m_comp_dist;
      //! Buffer to store calculated along-path distances.
      Utils::CircularBuffer<IMC::AlongPathDistance> m_queue;
      //! Map from IMC address to vehicle list position.
      std::map<int, int> m_listindex;
      //! Vector of Vehicles and desired offsets.
      std::vector<Vehicle> m_vehicles;
      //! Along path distance message.
      IMC::AlongPathDistance m_dist;
      //! Desired speed message.
      IMC::DesiredSpeed m_speed;
      //! Estimated state message.
      IMC::EstimatedState m_estate;
      //! Desired path message.
      IMC::DesiredPath m_path;
      //! Vector of waypoints.
      std::vector<Waypoint> m_wpts;
      //! Vector of waypoint distances.
      std::vector<float> m_wpdist;
      //! Current waypoint.
      unsigned int m_curr;
      //! Path section distance.
      float m_section_distance;
      //! Total distance of path.
      float m_total_distance;
      //! Along path distance from current position to end.
      float m_along_path_distance;
      //! Distance to travel around the corner and distance to normalise tracking distance with.
      float m_corner_distance, m_track_norm;
      //! Lenght of corner section one, two and three respectively.
      float m_section_one, m_section_two, m_section_three;
      //! Next waypoint that ends a straight-line section.
      unsigned int m_straight_no;
      //! Gain for the corner normalisation.
      float m_norm_gain;
      //! Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_queue(c_queue_size)
      {
        param("Formation Vehicles", m_args.vehicles)
        .defaultValue("")
        .description("Formation vehicles with desired off-sets");

        bind<IMC::AlongPathDistance>(this);
        bind<IMC::EstimatedState>(this);
        bindToManeuver<Task, IMC::FormationPathFollowing>();
      }

      //! Reset function
      void
      reset(void)
      {
        m_wpts.clear();
        m_curr = 0;
        m_straight_no = 1;
        m_total_distance = 0;
        m_vehicles.clear();
        m_norm_gain = 100;
      }

      void
      consume(const IMC::AlongPathDistance* msg)
      {
        if (msg->getSource() == m_args.vehicles(m_listindex.find(getSystemId())->second, 4))
          onPathDistUpdate(m_listindex.find(msg->getSource())->second, *msg);
      }

      void
      onPathDistUpdate(unsigned int id_index, const IMC::AlongPathDistance dist)
      {
        debug("Received distance is %.2f meters.", dist.value);

        double disttimestamp = dist.getTimeStamp();
        //double now = Clock::getSinceEpoch();

        int index = m_queue.getSize() - 1;
        double mingap = m_queue(m_queue.getSize() - 1).getTimeStamp() - disttimestamp;

        if (mingap < 0) // then it's between now and latest tstamp in queue
        {
          index = -1;
        }
        else
        {
          // cycle through the saved estimated states to find the minimum gap in time to
          // interpolate later
          for (int i = m_queue.getSize() - 2; i >= 0; i--)
          {
            // if we're comparing with values older than disttimestamp, stop cycling
            if (m_queue(i).getTimeStamp() - disttimestamp < 0)
              break;
            // if shorter than the value we saved in previous loop, then update mingap
            if (m_queue(i).getTimeStamp() - disttimestamp < mingap)
            {
              mingap = m_queue(i).getTimeStamp() - disttimestamp;
              index = i;
            }
          }
        }

        //debug("Index is %i", index);

        if (!index)
        {
          m_comp_dist = m_queue(index).value;
        }
        else if (index == -1) // When the time stamp is newer than the times in the queue, project ahead based on the velocity at the current time.
        {
          //m_comp_dist = m_queue(m_queue.getSize() -1).value;
          m_comp_dist = m_dist.value + m_speed.value * (mingap);
        }
        else // linearly interpolate from the closest time stamp in the queue to the time of the incoming message
        {
          m_comp_dist = linearInterpolation(LinIntParam<double>(m_queue(index - 1).value, m_queue(index).value,
                                                                m_queue(index - 1).getTimeStamp(),
                                                                m_queue(index).getTimeStamp(), disttimestamp));
        }

        errorToSpeed(m_comp_dist - dist.value - m_args.vehicles(id_index, 1));
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }

      void
      consume(const IMC::FormationPathFollowing* maneuver)
      {
        reset();

        // Iterate vehicle list and store desired offsets.
        for (int idx =0; idx != m_args.vehicles.rows(); idx++)
        {
          Vehicle v;
          v.vid = m_args.vehicles(idx, 0);
          v.x = m_args.vehicles(idx, 1);
          v.y = m_args.vehicles(idx, 2);
          v.cy = m_args.vehicles(idx, 3);
          v.cid = m_args.vehicles(idx, 4);

          m_vehicles.push_back(v);

          m_listindex[v.vid] = idx;
          debug("Vehicle %i offset is %.2f meter", v.vid, v.x);
        }

        IMC::MessageList<IMC::PathPoint>::const_iterator itr = maneuver->points.begin();

        unsigned int v_index = m_listindex.find(getSystemId())->second;
        int i = 0;

        // Iterate point list
        for (; itr != maneuver->points.end(); itr++)
        {
          if ((*itr) == NULL)
            continue;

          // First the array of offsets is used to place the waypoints at the desired position in WGS84-coordinates
          Waypoint w;
          w.lat = maneuver->lat;
          w.lon = maneuver->lon;
          if (i == 0 || i == 1)
            WGS84::displace((*itr)->x - m_vehicles[v_index].y, (*itr)->y, &w.lat, &w.lon);
          if (i == 2)
            WGS84::displace((*itr)->x - m_vehicles[v_index].y, (*itr)->y - m_vehicles[v_index].cy, &w.lat, &w.lon);
          if (i == 3)
            WGS84::displace((*itr)->x + m_vehicles[v_index].y, (*itr)->y - m_vehicles[v_index].cy, &w.lat, &w.lon);
          if (i == 4 || i == 5)
            WGS84::displace((*itr)->x + m_vehicles[v_index].y, (*itr)->y, &w.lat, &w.lon);
          if (i == 6) // Lawnmower pattern: (*itr)->y - m_vehicles[v_index].cy & Square pattern: (*itr)->y + m_vehicles[v_index].cy
            WGS84::displace((*itr)->x + m_vehicles[v_index].y, (*itr)->y + m_vehicles[v_index].cy, &w.lat, &w.lon);
          if (i == 7) // Lawnmower pattern: (*itr)->y - m_vehicles[v_index].cy & Square pattern: (*itr)->y + m_vehicles[v_index].cy
            WGS84::displace((*itr)->x - m_vehicles[v_index].y, (*itr)->y + m_vehicles[v_index].cy, &w.lat, &w.lon);

          w.z = maneuver->z + (*itr)->z;
          w.z_units = maneuver->z_units;

          // Calculate the distance of this path section, add it to the total length,
          // and store the current length. For path sections belong to a corner the distance is normalised w.r.t the total
          // corner length to get the vehicles as closely together as possible for the next straight-line section.
          // The index i = 0,...,7 represents a path section of 2 straight-line sections and 2 corners.
          if (m_wpts.empty() == 0)
          {
            if (i == 0 || i == 2 || i == 3 || i == 4 || i == 6 || i == 7)
            {
              m_corner_distance += WGS84::distance(w.lat,w.lon,w.z,m_wpts.back().lat,m_wpts.back().lon,m_wpts.back().z);
              if (i == 2 || i == 6)
              {
                m_section_one = WGS84::distance(w.lat,w.lon,w.z,m_wpts.back().lat,m_wpts.back().lon,m_wpts.back().z);
              }
              if (i == 3 || i == 7)
              {
                m_section_two = WGS84::distance(w.lat,w.lon,w.z,m_wpts.back().lat,m_wpts.back().lon,m_wpts.back().z);
              }
              if (i == 0 || i == 4)
              {
                m_section_three = WGS84::distance(w.lat,w.lon,w.z,m_wpts.back().lat,m_wpts.back().lon,m_wpts.back().z);
                m_total_distance += m_section_one / m_corner_distance * m_norm_gain;
                m_wpdist.push_back(m_total_distance);
                m_total_distance += m_section_two / m_corner_distance * m_norm_gain;
                m_wpdist.push_back(m_total_distance);
                m_total_distance += m_section_three / m_corner_distance * m_norm_gain;
                m_wpdist.push_back(m_total_distance);
                m_track_norm = m_corner_distance;
                m_corner_distance = 0;
              }
            }
            else
            {
              m_section_distance = WGS84::distance(w.lat,w.lon,w.z,m_wpts.back().lat,m_wpts.back().lon,m_wpts.back().z);
              m_total_distance += m_section_distance;
              m_wpdist.push_back(m_total_distance);
            }
            debug("Distance to waypoint is %.2f meters and i is %d.", m_total_distance,i);
          }
          if (i == 7)
            i = 0;
          else
            ++i;
          m_wpts.push_back(w);
        }

        if (!m_wpts.size())
        {
          signalCompletion();
          return;
        }

        debug("starting path with %lu waypoints", (long unsigned int)m_wpts.size());

        debug("Total path length is %.2f meters.", m_total_distance);

        setControl(IMC::CL_PATH);

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        gotoNextPoint();
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_curr;

        signalProgress(pcs->eta, ss.str());

        // Calculate the path distance to end from current position
        // This is the value necessary for the consensus protocol
        // For corner sections also the tracking state has to be normalised
        if (m_curr == 0 || m_curr == m_straight_no)
          m_along_path_distance = pcs->x + waypointToEnd();
        else
          m_along_path_distance = pcs->x / m_track_norm * m_norm_gain + waypointToEnd();

        //debug("Along path distance is %.4f  meters.", m_along_path_distance);

        m_dist.value = m_along_path_distance;
        m_dist.setSource(getSystemId());
        dispatch(m_dist);
        m_queue.add(m_dist);

        debug("Send distance is %.2f meters.", m_dist.value);

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        if (m_curr + 1 == m_wpts.size())
        {
          signalCompletion();
          return;
        }

        if (m_curr == m_straight_no)
          m_straight_no += 4;

        ++m_curr;

        gotoNextPoint();
        debug("Distance after next waypoint is %.2f meters", waypointToEnd());
      }

      //! Routine to throw next waypoint
      void
      gotoNextPoint(void)
      {
        Waypoint& w = m_wpts[m_curr];
        m_path.end_lat = w.lat;
        m_path.end_lon = w.lon;
        m_path.flags = 0;
        m_path.end_z = w.z;
        m_path.end_z_units = w.z_units;
        dispatch(m_path);
      }

      //! Routine to calculate the distance from the current waypoint to the end.
      float
      waypointToEnd(void)
      {
        if (m_curr == 0)
          return m_total_distance;
        else
          return m_total_distance - m_wpdist[m_curr-1];
      }

      //! Routine to calculate and dispatch desired speed based on error.
      void
      errorToSpeed(double m_error)
      {
        // Variable speed amplitude.
        static const float m_var_speed = 0.25;
        debug("Error Along Path is %.4f meters", m_error);
        m_speed.value = m_path.speed + 2.0 * m_var_speed / Math::c_pi * std::atan( m_error );
        m_speed.speed_units = m_path.speed_units;
        dispatch(m_speed);
        debug("Desired speed is %.4f meters per second.", m_speed.value);
      }
    };
  }
}

DUNE_TASK
