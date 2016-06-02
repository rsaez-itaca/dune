//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "ParserPD0.hpp"

namespace Sensors
{
  //! Device driver for the Teledyne RDI ExplorerDVL.
  namespace ExplorerDVL
  {
    using DUNE_NAMESPACES;

    //! Number of beams.
    static const unsigned c_beam_count = 4;
    //! Data input timeout.
    static const double c_data_timeout = 5.0;
    //! Bottom lock timeout.
    static const double c_bottom_lock_timeout = 10.0;

    //! States of the activation state machine.
    enum ActivationState
    {
      //! Starting activation procedure.
      ST_ACT_BEGIN,
      //! Turning on power channel.
      ST_ACT_TURN_ON,
      //! Waiting for power channel to turn on.
      ST_ACT_TURN_ON_WAIT,
      //! Configuring device.
      ST_ACT_SETUP,
      //! Activation procedure completed.
      ST_ACT_DONE
    };

    //! States of the deactivation state machine.
    enum DeactivationState
    {
      //! Starting deactivation procedure.
      ST_DEACT_BEGIN,
      //! Turning ofg power channel.
      ST_DEACT_TURN_OFF,
      //! Waiting for power channel to turn off.
      ST_DEACT_TURN_OFF_WAIT,
      //! Deactivation procedure completed.
      ST_DEACT_DONE
    };

    //! %Task Arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Default Sound speed on water.
      double sound_speed_def;
      //! Entity label of sound speed provider.
      std::string sound_speed_elabel;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
      //! Power channel name.
      std::string power_channel;
      //! Heading alignment.
      double heading_alignment;
      //! True to use DVL at surface.
      bool surface;
      //! True to enable automatic activation/deactivation based on medium.
      bool auto_activation;
      //! Beam angle.
      double beam_angle;
      //! Beam width.
      double beam_width;
      //! Transducer offset.
      double xdcr_offset;
      //! Enable input trigger.
      bool input_trigger;
    };

    //! %Task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Driver.
      Driver* m_driver;
      //! Beam Filter.
      Navigation::BeamFilter* m_filter;
      //! Ground velocity message.
      IMC::GroundVelocity m_gvel;
      //! Water velocity message.
      IMC::WaterVelocity m_wvel;
      //! Filtered Altitude.
      IMC::Distance m_altitude_filtered;
      //! Last sound speed value.
      double m_sound_speed;
      //! Sound speed entity id.
      int m_sound_speed_eid;
      //! Medium monitor.
      Monitors::MediumHandler m_medium;
      //! PD0 format parser.
      ParserPD0 m_parser;
      //! True if device is powered.
      bool m_powered;
      //! Activation state machine state.
      ActivationState m_act_state;
      //! Deactivation state machine state.
      DeactivationState m_deact_state;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Bottom Lock Watchdog.
      Counter<double> m_bottom_lock_timer;
      //! True if pings are externally triggered.
      bool m_triggered;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_driver(NULL),
        m_filter(NULL),
        m_powered(false),
        m_triggered(false)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param(DTR_RT("Use Device at Surface"), m_args.surface)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Enable to activate device when at surface");

        param(DTR_RT("Automatic Activation"), m_args.auto_activation)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Operator is able to control device");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port used to connect to the Workhorse Navigator.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Sound Speed - Default Value", m_args.sound_speed_def)
        .defaultValue("1500")
        .minimumValue("1400")
        .maximumValue("1600")
        .units(Units::MeterPerSecond)
        .description("Default value for sound speed in the water");

        param("Sound Speed - Entity Label", m_args.sound_speed_elabel)
        .description("Entity label of sound speed provider");

        param("Device Position", m_args.position)
        .defaultValue("0, -90, 0")
        .units(Units::Meter)
        .size(3)
        .description("Device position relative to navigation estimation (relative to GPS sensor)");

        param("Device Orientation", m_args.orientation)
        .defaultValue("0, 0, 0")
        .units(Units::Degree)
        .size(3)
        .description("Device orientation");

        param("Heading Alignment", m_args.heading_alignment)
        .defaultValue("0")
        .units(Units::Degree)
        .description("Heading alignment");

        param("Beam Angle", m_args.beam_angle)
        .defaultValue("30.0")
        .units(Units::Degree)
        .description("The angle between a transducer beam's main axis and the vertical axis of the device");

        param("Beam Width", m_args.beam_width)
        .defaultValue("2.4")
        .units(Units::Degree)
        .description("The nominal transducer beam width");

        param("Transducer Offset", m_args.xdcr_offset)
        .defaultValue("0.0381")
        .units(Units::Meter)
        .description("The distance between the center of transducers and the device center");

        param("Power Channel", m_args.power_channel)
        .defaultValue("")
        .description("Power channel that controls the power of the device");

        param("Enable Input Trigger", m_args.input_trigger)
        .defaultValue("true")
        .description("Enable input trigger");

        bind<IMC::VehicleMedium>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::PowerChannelState>(this);
        bind<IMC::PulseDetectionControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.power_channel.empty())
          m_powered = true;

        if (paramChanged(m_args.sound_speed_def))
        {
          m_args.sound_speed_def = Math::round(m_args.sound_speed_def);
          m_sound_speed = m_args.sound_speed_def;
        }

        if (!(paramChanged(m_args.beam_width)
              || paramChanged(m_args.orientation)
              || paramChanged(m_args.position)))
          return;

        // Filtered altitude.
        IMC::BeamConfig bc;
        bc.beam_width = Angles::radians(m_args.beam_width);
        bc.beam_height = bc.beam_width;

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = Angles::radians(m_args.orientation[0]);
        ds.theta = Angles::radians(m_args.orientation[1]);
        ds.psi = Angles::radians(m_args.orientation[2]);

        m_altitude_filtered.location.clear();
        m_altitude_filtered.location.push_back(ds);
        m_altitude_filtered.beam_config.clear();
        m_altitude_filtered.beam_config.push_back(bc);
      }

      void
      onResourceAcquisition(void)
      {
        m_args.position[2] -= m_args.heading_alignment;
        m_filter = new BeamFilter(this, c_beam_count, m_args.beam_width, m_args.xdcr_offset,
                                  m_args.beam_angle, m_args.position, m_args.orientation,
                                  BeamFilter::CROSSED);

        m_filter->setSourceEntities(m_entities);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);
        Memory::clear(m_filter);
      }

      void
      onRequestActivation(void)
      {
        m_act_state = ST_ACT_BEGIN;
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.setTop(c_data_timeout);
        m_bottom_lock_timer.setTop(c_bottom_lock_timeout);
      }

      void
      onRequestDeactivation(void)
      {
        m_deact_state = ST_DEACT_BEGIN;
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < c_beam_count; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_altitude_filtered.setSourceEntity(reserveEntity("DVL Filtered"));
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_sound_speed_eid = resolveEntity(m_args.sound_speed_elabel);
        }
        catch (...)
        {
          m_sound_speed = m_args.sound_speed_def;
        }
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::PulseDetectionControl* msg)
      {
        if (!m_args.input_trigger)
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->op == IMC::PulseDetectionControl::POP_ON)
          m_triggered = true;
        else if (msg->op == IMC::PulseDetectionControl::POP_OFF)
          m_triggered = false;

        if (m_driver == NULL)
          return;

        if (!isActive())
          return;

        if (msg->op == IMC::PulseDetectionControl::POP_ON)
          configureInputTrigger(true);
        else if (msg->op == IMC::PulseDetectionControl::POP_OFF)
          configureInputTrigger(false);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (!m_args.auto_activation)
          return;

        m_medium.update(msg);

        if ((m_medium.isWaterSurface() && m_args.surface) || m_medium.isUnderwater())
        {
          if (canRequestActivation())
            requestActivation();
        }

        if (m_medium.outWater() || (m_medium.isWaterSurface() && !m_args.surface))
        {
          if (isActive())
            requestDeactivation();
        }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if ((int)msg->getSourceEntity() != m_sound_speed_eid)
          return;

        if (msg->value > 0)
          m_sound_speed = msg->value;
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        bool old_state = m_powered;
        m_powered = (msg->state == IMC::PowerChannelState::PCS_ON);
        if (!old_state && m_powered)
          debug("device is powered");
        else if (old_state && !m_powered)
          debug("device is no longer powered");
      }

      bool
      setInputTrigger(bool enabled)
      {
        Driver::InputTriggerBehaviour behaviour = Driver::ITB_OFF;
        uint16_t delay = 0;
        uint16_t timeout = 65535;

        if (enabled)
        {
          behaviour = Driver::ITB_RISING_EDGE;
          timeout = 500;
        }

        bool rv = m_driver->setInputTriggerEnable(behaviour, delay, timeout);
        if (rv)
          trace("input trigger: %s", enabled ? "enabled" : "disabled");

        return rv;
      }

      void
      configureInputTrigger(bool value)
      {
        Counter<double> timer(5.0);
        while (!timer.overflow())
        {
          trace("stop pinging");
          consumeMessages();
          if (!m_driver->stopPinging())
            continue;

          consumeMessages();
          setInputTrigger(value);

          trace("start pinging");
          consumeMessages();
          if (!m_driver->startPinging())
            continue;

          m_bottom_lock_timer.reset();
          break;
        }
      }

      //! Test if the task can request activation.
      //! @return true if we can request activation, false otherwise.
      bool
      canRequestActivation(void)
      {
        return !(isActive() || isActivating());
      }

      void
      controlPower(IMC::PowerChannelControl::OperationEnum op)
      {
        if (m_args.power_channel.empty())
          return;

        IMC::PowerChannelControl pcc;
        pcc.op = op;
        pcc.name = m_args.power_channel;
        dispatch(pcc);
      }

      void
      turnPowerOn(void)
      {
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
      }

      void
      turnPowerOff(void)
      {
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
      }

      void
      processAltitude(void)
      {
        for (size_t i = 0; i < c_beam_count; ++i)
          m_parser.fillAltitude(m_filter->getAltitude(i), i, m_sound_speed);

        m_filter->dispatch();

        m_altitude_filtered.setTimeStamp(m_filter->getAltitude(0).getTimeStamp());
        m_altitude_filtered.value = m_filter->get();
        if (m_altitude_filtered.value > 0.0)
          m_altitude_filtered.validity = IMC::Distance::DV_VALID;
        else
          m_altitude_filtered.validity = IMC::Distance::DV_INVALID;

        dispatch(m_altitude_filtered, DF_KEEP_TIME);

        if (m_altitude_filtered.validity == IMC::Distance::DV_VALID)
          m_bottom_lock_timer.reset();
      }

      void
      processGroundVelocity(void)
      {
        m_parser.fillGroundVelocity(m_gvel, m_sound_speed);
        dispatch(m_gvel, DF_KEEP_TIME);
      }

      // void
      // processWaterVelocity(const PD4::Data* data, double tstamp)
      // {
      //   m_wvel.setTimeStamp(tstamp);
      //   m_wvel.validity = 0;

      //   // Y is forward, X is right, Z is up.
      //   m_wvel.validity |= (data->vel_wtr_validity & PD4::COMP_Y) ? IMC::WaterVelocity::VAL_VEL_X : 0;
      //   m_wvel.x = correctSoundSpeed(data->y_vel_wtr);
      //   m_wvel.validity |= (data->vel_wtr_validity & PD4::COMP_X) ? IMC::WaterVelocity::VAL_VEL_Y : 0;
      //   m_wvel.y = correctSoundSpeed(data->x_vel_wtr);
      //   m_wvel.validity |= (data->vel_wtr_validity & PD4::COMP_Z) ? IMC::WaterVelocity::VAL_VEL_Z : 0;
      //   m_wvel.z = correctSoundSpeed(-data->z_vel_wtr);
      //   dispatch(m_wvel, DF_KEEP_TIME);
      // }

      bool
      readSample(uint8_t* bfr, size_t bfr_size)
      {
        bool read_sample = false;

        size_t rv = m_driver->readData(bfr, bfr_size);
        if (rv > 0)
        {
          IMC::DevDataBinary debug_data;
          debug_data.value.assign((char*)bfr, (char*)bfr + rv);
          dispatch(debug_data);
        }

        for (size_t i = 0; i < rv; ++i)
        {
          if (!m_parser.parse(bfr[i]))
            continue;

          processAltitude();
          processGroundVelocity();

          read_sample = true;
        }

        return read_sample;
      }

      bool
      setup(void)
      {
        m_driver = new Driver(this, m_args.uart_dev, m_args.uart_baud);
        m_driver->setTimeout(2.0);

        trace("stop pinging");
        consumeMessages();
        if (!m_driver->stopPinging())
          goto fail;

        trace("set turn key off");
        consumeMessages();
        if (!m_driver->setTurnKey(false))
          goto fail;

        trace("set earth coordinates");
        consumeMessages();
        if (!m_driver->setEarthCoordinates())
          goto fail;

        trace("set manual sensor source");
        consumeMessages();
        if (!m_driver->setManualSensorSource())
          goto fail;

        trace("set sound speed to %0.2f", m_args.sound_speed_def);
        consumeMessages();
        if (!m_driver->setSoundSpeed(m_args.sound_speed_def))
          goto fail;

        trace("set heading alignment to %0.2f", m_args.heading_alignment);
        consumeMessages();
        if (!m_driver->setHeadingAlignment(m_args.heading_alignment))
          goto fail;

        trace("set maximum tracking depth");
        consumeMessages();
        if (!m_driver->setMaximumTrackingDepth(1000))
          goto fail;

        trace("set bottom track pings per ensemble");
        consumeMessages();
        if (!m_driver->setBottomTrackPingsPerEnsemble(1))
          goto fail;

        trace("set data format");
        consumeMessages();
        if (!m_driver->setDataFormat(0))
          goto fail;

        trace("configuring input trigger");
        consumeMessages();
        if (!setInputTrigger(m_triggered))
          goto fail;

        trace("start pinging");
        consumeMessages();
        if (!m_driver->startPinging())
          goto fail;

        debug("device is configured");
        m_parser.reset();
        return true;

      fail:
        dispatchStats();
        return false;
      }

      void
      dispatchStats(void)
      {
        if (m_driver == NULL)
          return;

        IMC::DevDataText msg;
        msg.value = String::str("timeout: %u", m_driver->getTimeoutCount());
      }

      bool
      runActivationStateMachine(void)
      {
        switch (m_act_state)
        {
          case ST_ACT_BEGIN:
            trace("activation begin");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
            m_act_state = ST_ACT_TURN_ON;
            break;

          case ST_ACT_TURN_ON:
            trace("turning on");
            turnPowerOn();
            m_act_state = ST_ACT_TURN_ON_WAIT;
            break;

          case ST_ACT_TURN_ON_WAIT:
            trace("waiting turn on");
            waitForMessages(1.0);
            if (m_powered)
              m_act_state = ST_ACT_SETUP;
            break;

          case ST_ACT_SETUP:
            trace("setup");
            if (setup())
            {
              m_act_state = ST_ACT_DONE;
              return true;
            }
            break;

          case ST_ACT_DONE:
            trace("activation done");
            break;
        }

        return false;
      }

      bool
      runDeactivationStateMachine(void)
      {
        switch (m_deact_state)
        {
          case ST_DEACT_BEGIN:
            trace("activation begin");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
            m_deact_state = ST_DEACT_TURN_OFF;
            break;

          case ST_DEACT_TURN_OFF:
            trace("turning power off");
            turnPowerOff();
            m_deact_state = ST_DEACT_TURN_OFF_WAIT;
            break;

          case ST_DEACT_TURN_OFF_WAIT:
            trace("waiting power off");
            waitForMessages(1.0);
            if (!m_powered)
            {
              m_deact_state = ST_DEACT_DONE;
              return true;
            }
            break;

          case ST_DEACT_DONE:
            trace("deactivation done");
            break;
        }

        return false;
      }

      void
      onMain(void)
      {
        uint8_t bfr[128];

        while (!stopping())
        {
          consumeMessages();

          if (isActive())
          {
            if (readSample(bfr, sizeof(bfr)))
            {
              m_wdog.reset();

              if (m_bottom_lock_timer.overflow())
              {
                trace("no bottom lock for %0.2f s", m_bottom_lock_timer.getElapsed());
                double clock_start = Clock::get();
                if (m_driver->restartPinging())
                {
                  trace("pinging restarted in %0.2f s", Clock::get() - clock_start);
                  m_bottom_lock_timer.reset();
                }
              }

              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            else if (m_wdog.overflow())
            {
              requestDeactivation();
              requestActivation();
            }
          }
          else if (isActivating())
          {
            try
            {
              if (runActivationStateMachine())
                activate();
            }
            catch (std::runtime_error& e)
            {
              activationFailed(e.what());
            }
          }
          else if (isDeactivating())
          {
            try
            {
              if (runDeactivationStateMachine())
                deactivate();
            }
            catch (std::runtime_error& e)
            {
              deactivationFailed(e.what());
            }
          }
          else
          {
            waitForMessages(1.0);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }
        }
      }
    };
  }
}

DUNE_TASK
