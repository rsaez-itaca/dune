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
// Author: Ricardo Bencatel                                                 *
// Author: Joel Cardoso                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace PTU
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Target ID label
      std::string trg_name;
      //! Control mode flags
      bool ptu_ctrl_mode;
      bool ptu_fixed;
      //! Control gains
      double pan_rate_gain;
      double tilt_rate_gain;
      double ptu_lat;
      double ptu_lon;
      double ptu_height;
      double ptu_lat_offset;
      double ptu_lon_offset;
      double ptu_height_offset;
      double ptu_yaw_offset;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! PTU base states and validity flag.
      IMC::EstimatedState m_ptu_state;
      bool m_ptu_state_valid;
      Matrix m_ptu_pos;
      Matrix m_ptu_rot;
      //! PTU tray (sensor/antenna) states and validity flag.
      bool m_ptu_tray_state_valid;
      Matrix m_ptu_tray_state;
      //! Target states and validity flag.
      IMC::EstimatedState m_trg_state;
      bool m_trg_state_valid;
      Matrix m_trg_pos;
      Matrix m_trg_vel;

      // System IDs
      unsigned m_trg_id;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_ptu_state_valid(false),
        m_trg_state_valid(false),
        m_ptu_tray_state_valid(false),
        m_ptu_pos(3,1),
        m_ptu_rot(3,3),
        m_ptu_tray_state(3,1),
        m_trg_pos(3,1),
        m_trg_vel(3,1)
      {
        param("Target Vehicle", m_args.trg_name)
        .description("Vehicle to be tracked")
        .defaultValue("");

        param("Control Mode", m_args.ptu_ctrl_mode)
        .description("PTU control mode (angular/angular rate)")
        .defaultValue("0");

        param("Pan Gain", m_args.pan_rate_gain)
        .description("Pan gain for PTU angular rate control mode")
        .defaultValue("0.5");

        param("Tilt Gain", m_args.tilt_rate_gain)
        .description("Tilt gain for PTU angular rate control mode")
        .defaultValue("0.5");

        param("Fixed PTU", m_args.ptu_fixed)
        .description("Flag for fixed ground PTU position")
        .defaultValue("true");

        param("Latitude", m_args.ptu_lat)
        .description("Fixed ground PTU position latitude")
        .defaultValue("39.087752");

        param("Longitude", m_args.ptu_lon)
        .description("Fixed ground PTU position longitude")
        .defaultValue("-8.9620989");

        param("Height", m_args.ptu_height)
        .description("Fixed ground PTU position height")
        .defaultValue("85");

        param("Latitude Offset", m_args.ptu_lat_offset)
        .description("Latitude offset between the PTU estimated and true position")
        .defaultValue("0");

        param("Longitude Offset", m_args.ptu_lon_offset)
        .description("Longitude offset between the PTU estimated and true position")
        .defaultValue("0");

        param("Height Offset", m_args.ptu_height_offset)
        .description("Height offset between the PTU estimated and true position")
        .defaultValue("0");

        param("Yaw Offset", m_args.ptu_yaw_offset)
        .description("Angle between the PTU estimated and true heading")
        .defaultValue("0");

        // Register consumers.
        bind<IMC::EstimatedState>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::Target>(this);
      }

      void
      onUpdateParameters(void)
      {
        // Update target ID
        if ( paramChanged( m_args.trg_name ) )
        {
          m_trg_id = resolveSystemName(m_args.trg_name);
          inf(DTR("Target name is %s, with ID %d"), m_args.trg_name.c_str(), m_trg_id);
        }

        // PTU control flags
        if ( paramChanged( m_args.ptu_fixed ) && m_args.ptu_fixed )
          m_ptu_state_valid = true;

        // PTU location
        if ( m_args.ptu_fixed )
        {
          if ( paramChanged( m_args.ptu_lat ) )
            m_ptu_state.lat = Math::Angles::radians( m_args.ptu_lat );
          if ( paramChanged( m_args.ptu_lon ) )
            m_ptu_state.lon = Math::Angles::radians( m_args.ptu_lon );
        }
     }

      void
      consume(const IMC::EstimatedState* msg)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        spew("Estimated State arrived from %d", msg->getSource());

        // PTU estimated state for relative position computation
        if ( ~m_args.ptu_fixed && msg->getSource() == getSystemId() )
        {
          m_ptu_state = *msg;
          m_ptu_state_valid = true;

          updatePTUOrientation();
        }

        // Target estimated state source selection
        if ( m_trg_id == msg->getSource() )
        {
          m_trg_state = *msg;
          m_trg_state_valid = true;

          m_trg_pos(0,0) = msg->x;
          m_trg_pos(1,0) = msg->y;
          m_trg_pos(2,0) = msg->z;

          m_trg_vel(0,0) = msg->vx;
          m_trg_vel(1,0) = msg->vy;
          m_trg_vel(2,0) = msg->vz;

          updatePTUOrientation();
        }
      }

      void
      consume(const IMC::Target* msg)
      {
        if ( m_trg_id == msg->getSource() )
        {
          m_trg_state.lat = msg->lat;
          m_trg_state.lon = msg->lon;
          m_trg_state.z = msg->z;
          m_trg_state_valid = true;

          // ToDo - Review and check necessity
          WGS84::displacement(m_ptu_state.lat, m_ptu_state.lon, -m_ptu_state.height, msg->lat, msg->lon, -msg->z, &m_trg_pos(0,0), &m_trg_pos(1,0));
          m_trg_pos(2,0) = msg->z + m_ptu_state.height;

          updatePTUOrientation();
        }
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        debug( DTR( "Received PTU tray Euler angles" ) );
        // Pan & tilt angles: PTU tray (sensor/antenna) orientation relative to the PTU base
        // Used in case of angular velocity control
        m_ptu_tray_state_valid = true;
        m_ptu_tray_state(0,0) = msg->phi;
        m_ptu_tray_state(1,0) = msg->theta;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }

      void
      updatePTUOrientation( void )
      {
        // Variables declaration and initialization
        Matrix rel_pos_ned = Matrix(3,1);
        Matrix rel_vel_ned = Matrix(3,1);
        Matrix ptu_rot;
        Matrix rel_pos_body = Matrix(3,1);
        Matrix rel_vel_body = Matrix(3,1);
        Matrix ptu_euler = Matrix(3,1);
        float cmd_pan;
        float des_pan_rate;
        float cmd_pan_rate;
        float cmd_tilt;
        float des_tilt_rate;
        float cmd_tilt_rate;
        float hor_dist_sq;
        float hor_dist;

        // Orientation computation.
        if ( m_trg_state_valid )
        {
          // Check if it is expecting a fixed predefined position or an estimated state
          if ( m_args.ptu_fixed )
          {
            WGS84::displacement(m_trg_state.lat, m_trg_state.lon, -m_trg_state.height, m_ptu_state.lat, m_ptu_state.lon, m_args.ptu_height, &m_ptu_pos(0,0), &m_ptu_pos(1,0));

            // Relative position.
            rel_pos_ned( 0, 0 ) = ( m_trg_pos( 0, 0 ) - m_ptu_pos( 0, 0 ) );
            rel_pos_ned( 1, 0 ) = ( m_trg_pos( 1, 0 ) - m_ptu_pos( 1, 0 ) );
            rel_pos_ned( 2, 0 ) = ( m_trg_pos( 2, 0 ) - m_args.ptu_height - m_ptu_state.height );

            // Relative velocity.
            rel_vel_ned( 0, 0 ) = m_trg_vel( 0, 0 );
            rel_vel_ned( 1, 0 ) = m_trg_vel( 1, 0 );
            rel_vel_ned( 2, 0 ) = m_trg_vel( 2, 0 );

            // PTU base attitude
            ptu_euler( 0, 0 ) = 0;
            ptu_euler( 1, 0 ) = 0;
            ptu_euler( 2, 0 ) = 0;
          }
          else
          {
            // Relative position.
            rel_pos_ned(0,0) = ( m_trg_pos( 0, 0 ) - m_ptu_state.x );
            rel_pos_ned(1,0) = ( m_trg_pos( 1, 0 ) - m_ptu_state.y );
            rel_pos_ned(2,0) = ( m_trg_pos( 2, 0 ) - m_ptu_state.z );

            // Relative velocity.
            rel_vel_ned(0,0) = ( m_trg_vel( 0, 0 ) - m_ptu_state.vx );
            rel_vel_ned(1,0) = ( m_trg_vel( 1, 0 ) - m_ptu_state.vy );
            rel_vel_ned(2,0) = ( m_trg_vel( 2, 0 ) - m_ptu_state.vz );

            // PTU base attitude
            ptu_euler(0,0) = m_ptu_state.phi;
            ptu_euler(1,0) = m_ptu_state.theta;
            ptu_euler(2,0) = m_ptu_state.psi;
          }

          // Relative position reference transformation.
          ptu_rot = Matrix( ptu_euler.toDCM() );
          m_ptu_rot = transpose( ptu_rot );
          rel_pos_body = m_ptu_rot * rel_pos_ned;

          // Pan and tilt computation.
          hor_dist_sq = (rel_pos_body(0,0) * rel_pos_body(0,0)) + (rel_pos_body(1,0) * rel_pos_body(1,0));
          cmd_pan = std::atan2(rel_pos_body(1,0), rel_pos_body(0,0));
          cmd_tilt = std::atan( - rel_pos_body( 2, 0 ) / std::sqrt( hor_dist_sq ) );
          // Generating PTU commands.
          std::stringstream ss;
          IMC:RemoteActions ra;
          if (m_args.ptu_ctrl_mode == 0)
          {
            ss << "Pan=" << cmd_pan << ";Tilt=" << cmd_tilt << ";";
            ra.actions = ss.str();
            dispatch(ra);

            debug("PTU in angular control mode");
            debug("Created tuplelist %s ", ra.actions.c_str());
          }
          else
          {
            // Relative velocity and horizontal distance.
            rel_vel_body = (m_ptu_rot * rel_vel_ned);
            hor_dist = std::sqrt(hor_dist_sq);
            // Target apparent pan and tilt rates computation.
            des_pan_rate = (rel_pos_body(0,0)*rel_vel_body(1,0) - rel_pos_body(1,0)*rel_vel_body(0,0))/hor_dist_sq;
            des_tilt_rate = (rel_pos_body(3,0)*(rel_pos_body(0,0)*rel_vel_body(0,0)+ rel_pos_body(1,0)*rel_vel_body(1,0))/hor_dist -
                             hor_dist*rel_vel_body(2,0))/std::sqrt(hor_dist_sq + rel_pos_body(2,0)*rel_pos_body(2,0));

            // Pan and tilt rate commands computation.
            cmd_pan_rate = des_pan_rate + m_args.pan_rate_gain*(cmd_pan - m_ptu_tray_state(0,0));
            cmd_tilt_rate = des_tilt_rate + m_args.tilt_rate_gain*(cmd_tilt - m_ptu_tray_state(1,0));

            ss << "PanRate=" << cmd_pan_rate << ";TiltRate=" << cmd_tilt_rate << ";";
            ra.actions = ss.str();
            dispatch(m_ra);

            debug("PTU in angular rate control mode");
            debug("Created tuplelist %s ", ra.actions.c_str());
           }
        }
      }
    };
  }
}

DUNE_TASK
