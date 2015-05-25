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
// Author: José Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  namespace AssetStatus
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {

      IMC::AssetStatus m_status;
      double m_period;
      bool m_ready;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param(DTR_RT("Publication Period"), m_period)
              .units(Units::Second)
              .defaultValue("600")
              .description(DTR("Period between status updates"));

        m_status.fuel = m_status.progress = -1;
        m_ready = false;
        bind<IMC::EstimatedState>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::FuelLevel>(this);
      }

      void
      consume(const IMC::EstimatedState * msg)
      {
        m_status.alt = msg->alt;
        m_status.depth = msg->depth;
        m_status.heading = msg->psi;
        m_status.lat = msg->lat;
        m_status.lon = msg->lon;
        double tmp = 0;
        WGS84::displace(msg->x, msg->y, 0, &m_status.lat, &m_status.lon, &tmp);
        m_ready = true;
      }

      void
      consume(const IMC::PlanControlState * msg)
      {
        if (msg->state == PlanControlState::PCS_EXECUTING || msg->state == PlanControlState::PCS_INITIALIZING)
        {
          m_status.plan = msg->plan_id;
          m_status.progress = (int) msg->plan_progress;
        }
        else if (msg->last_outcome == PlanControlState::LPO_FAILURE)
          m_status.plan = "[ERROR]";
        else
          m_status.plan = "[READY]";
      }

      void
      consume(const IMC::FuelLevel * msg)
      {
        m_status.fuel = msg->value;
      }

      void
      onMain(void)
      {
        double last_sent = 0;
        while(!stopping())
        {
          waitForMessages(1.0);
          double time_ellapsed = Time::Clock::get() - last_sent;
          if (m_ready && time_ellapsed > m_period)
          {
            dispatch(m_status);
            last_sent = Time::Clock::get();

            m_status.toText(std::cout);
          }
        }
      }
    };
  }
}

DUNE_TASK
