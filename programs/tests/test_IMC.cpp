//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 86a299b01f3fb2b07aa79ba59f7f24ec                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.663411791507);
    msg.setSource(8316U);
    msg.setSourceEntity(239U);
    msg.setDestination(64221U);
    msg.setDestinationEntity(40U);
    msg.state = 14U;
    msg.flags = 219U;
    msg.description.assign("IIIMDXJLWOUHRZGZKDJBCFXYSMQJYEEGXTRLYRZSCUBHIXNGQBUMTCEXDOPQKNXUCRWJBSWDKSNTYGVGGBUTNCUEHAWVWBOBCKWPOFWDABVZHEJSXKVTUXZKLPPIHNYALZDJKALEMCGPLVDSVVTERLCXFGOSZRILUTVQLOFWKPUIBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.732563868954);
    msg.setSource(29462U);
    msg.setSourceEntity(68U);
    msg.setDestination(24841U);
    msg.setDestinationEntity(91U);
    msg.state = 55U;
    msg.flags = 164U;
    msg.description.assign("QUVGEOWRSRBYIGDFBQASXJTIEKUZPUNMGKJXYOOEPYCNWJQAPRYDNXWHQAUMLPIWABEFCDEVHLOIKSMRGPTIMPWAFERGQCNATZSHSPWHVTWVTDGGNYOVZZIEMMKSBBEVZBRCCLNYOAFDKONQXXRHWTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.387840936502);
    msg.setSource(7480U);
    msg.setSourceEntity(167U);
    msg.setDestination(56136U);
    msg.setDestinationEntity(243U);
    msg.state = 142U;
    msg.flags = 94U;
    msg.description.assign("UVRPZTUQWYDERUFCQJLZNYNVUKPCJSQHLVRZTABEMSTKESHXPWUASLDUWCVGZTQVFXZHYIMOFANOPRXWMCAVFFFPSIGGHBJBWWCSIYNHHSKNMPNGIEDDXLRJCJTSWCOTPUTDGMMJWBJDOQKLLDRBHVQYEOPNLZBROYCTXDXAINUGGMZBQPVHZOKRIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.256246186947);
    msg.setSource(58776U);
    msg.setSourceEntity(166U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(46U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.691698732574);
    msg.setSource(63393U);
    msg.setSourceEntity(163U);
    msg.setDestination(1934U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.305774007387);
    msg.setSource(49719U);
    msg.setSourceEntity(10U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(163U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.30809414139);
    msg.setSource(39947U);
    msg.setSourceEntity(146U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(100U);
    msg.id = 203U;
    msg.label.assign("RANFRSFZUFVTHRSHUUKXVMVQCCISFTYHKIHGKPEIFAFBVSDROBWYPJEMTUKXUCJNRYIXAMTLDCSOAOAJWBQXJIMVUJVOLZ");
    msg.component.assign("TKIWVOCSQFETCLQHBGWSPGCQKNMHXGZVIMJMXFXFHXEEIJIERMNUJBATVF");
    msg.act_time = 2174U;
    msg.deact_time = 53178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.69097481294);
    msg.setSource(26073U);
    msg.setSourceEntity(70U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(42U);
    msg.id = 19U;
    msg.label.assign("IZEQYTOSIZIDDULYJJCYUTUVVJSNRLVHNZUZNRXXUHRCRJEZIUWGCKAGYOTLKVUDVTLROWADWPKEPAZWMPMUQCFMLAYCBNTQIBXSNXJKFTOSSFEVPBAFDSYMXQTCDMNUQBLZYTOQBEJGLPGIIYKDNNRKXEQWCPGWVGWGXABPFYAHEOKWXWBLLJOOF");
    msg.component.assign("VXCGDFLQDHKIOZXTEOR");
    msg.act_time = 37714U;
    msg.deact_time = 55520U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.875294538121);
    msg.setSource(7689U);
    msg.setSourceEntity(126U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(228U);
    msg.id = 78U;
    msg.label.assign("EXNUTWSFSNHBQOHTRIBXCPZPBKLIOCVGBJAGXDDFBMFTYUHGVWZERVMMRWMULPEEAAZOALNMYFUIRVTQHRIOCEMIVEZDOFJXRFYEQKXIVFZHBUD");
    msg.component.assign("ONIMHRHLETADPIOLGRYRUEESSWDRABBQFIUVDGIWXFGYUNJKWUTXVPTKCKQUUXCEYGMZDWUMHJFICWWDZXYEUDOHD");
    msg.act_time = 20714U;
    msg.deact_time = 20256U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.371889493411);
    msg.setSource(64917U);
    msg.setSourceEntity(18U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(151U);
    msg.id = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.113889704728);
    msg.setSource(35948U);
    msg.setSourceEntity(39U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(104U);
    msg.id = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.310050298619);
    msg.setSource(56285U);
    msg.setSourceEntity(252U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(18U);
    msg.id = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.819254326977);
    msg.setSource(10436U);
    msg.setSourceEntity(193U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(211U);
    msg.op = 236U;
    msg.list.assign("KOPHEVPVQAMFGIDLBFLBTKXQXSVGZFSKXXWLUGKIDXBDVWBOUJFBJDXNMAJTNFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.782101529956);
    msg.setSource(47508U);
    msg.setSourceEntity(149U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(116U);
    msg.op = 135U;
    msg.list.assign("JKXSDNQJVCMQRGKNLVIEXHCGHKMIDHCTTOHELGHLBMITPJAFZYDYAELGBYKJRYVDPCJGHLXIQQZDXRMRIEHFYGXTKYQOAFVWDOIWMSNBENLVUUAXFSSFKFAIBMFWTDCWZZOZZSSWEVKYASXUBRBXJGTVQMGNCWCFEQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.364230196777);
    msg.setSource(2674U);
    msg.setSourceEntity(60U);
    msg.setDestination(22137U);
    msg.setDestinationEntity(158U);
    msg.op = 120U;
    msg.list.assign("NCJCTZCJYHMJWQUJLPFUMHVMNLXTZODVTQOYIKEHXWUWZNRMYJWGEMXKWFDHAXLCFWUMIAMGLAVGZTEONITQDWMWRPAUAVNFOLBMCUYSHBBKBXSGXKSNDBQSVJJRDYLEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.98475898367);
    msg.setSource(13712U);
    msg.setSourceEntity(231U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(173U);
    msg.value = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.00282979218078);
    msg.setSource(20992U);
    msg.setSourceEntity(3U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(204U);
    msg.value = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.164940780638);
    msg.setSource(19142U);
    msg.setSourceEntity(85U);
    msg.setDestination(18343U);
    msg.setDestinationEntity(198U);
    msg.value = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.5278682537);
    msg.setSource(30696U);
    msg.setSourceEntity(147U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("WSWAOFSSXYKVZEJLFBZSUVCCNTMOBFUBQCPMORTJX");
    msg.message_id = 37958U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.502482561931);
    msg.setSource(41732U);
    msg.setSourceEntity(186U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(209U);
    msg.consumer.assign("LAVLGDIYVQQKFRTYUROMKNDPVEZKSSTEBDJLQYMHCNAGIVJWJTNUIRXWAMZMFKAUPFCVCWKHEWPWFDBMQTFEICTRUEXIYPSWBOHYGIOZRRWVXYSJNGFNZXMCRPQCBDAITQNQB");
    msg.message_id = 35917U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.880358898098);
    msg.setSource(33046U);
    msg.setSourceEntity(35U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(0U);
    msg.consumer.assign("JNXTFSPFBYORBMRVFVUOPAEFXCGGC");
    msg.message_id = 63582U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.593392087657);
    msg.setSource(20290U);
    msg.setSourceEntity(219U);
    msg.setDestination(41000U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0772210139587);
    msg.setSource(34874U);
    msg.setSourceEntity(69U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.65319570932);
    msg.setSource(57811U);
    msg.setSourceEntity(129U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.949053478451);
    msg.setSource(25515U);
    msg.setSourceEntity(86U);
    msg.setDestination(8861U);
    msg.setDestinationEntity(221U);
    msg.op = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.30335632715);
    msg.setSource(44613U);
    msg.setSourceEntity(199U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(253U);
    msg.op = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.492830393416);
    msg.setSource(32481U);
    msg.setSourceEntity(108U);
    msg.setDestination(6999U);
    msg.setDestinationEntity(24U);
    msg.op = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.902924738034);
    msg.setSource(31638U);
    msg.setSourceEntity(59U);
    msg.setDestination(5992U);
    msg.setDestinationEntity(198U);
    msg.total_steps = 13U;
    msg.step_number = 223U;
    msg.step.assign("HOFCOINPCYIXTSQXSVWIXLMSUZSFEYHTFBSFABOQNHFNEKLNAVFLKDAAIKM");
    msg.flags = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.0516338491194);
    msg.setSource(59360U);
    msg.setSourceEntity(93U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(115U);
    msg.total_steps = 63U;
    msg.step_number = 29U;
    msg.step.assign("OXZOIFYAJNRGBZGSOZTLPEMXVDCSYGBNZOGDQSLKEQCYSNARNUBNREHRBOFDCGUPSETJYWSFOUUVDGRQAFLTWOODHQEJKNZKJSWIXUCLTQXANAHWPEJWPIKTZJZETBIIVLGIUWUHRAAQSMUYAPLZWNZINIXKGEPZHYVVJDFKSWOXLTDPCBJCVMRQVE");
    msg.flags = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.495275571319);
    msg.setSource(52172U);
    msg.setSourceEntity(1U);
    msg.setDestination(29230U);
    msg.setDestinationEntity(2U);
    msg.total_steps = 77U;
    msg.step_number = 36U;
    msg.step.assign("DGOGETCFNXERMBZTDOAHRTMSTZVCHPSVYWVLLWEHSBJKOBXQDPAJRKWQGRNTFDKOPXFWJSQVJCGTPJTMRYLSFENBASZWAD");
    msg.flags = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.626524679349);
    msg.setSource(44199U);
    msg.setSourceEntity(220U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(169U);
    msg.state = 199U;
    msg.error.assign("EAIJUJZWYUBMHLEZLEPQAUJHFRKGYQEALVMISKSEPEUBTIYQIRXXFYCOFIBROGSKMVQALZTFCQLTDNOGQFZOTCBTDAXYBQWCDHIIWERMHHLBBGWQRFODMKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.565319103464);
    msg.setSource(26094U);
    msg.setSourceEntity(59U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(136U);
    msg.state = 251U;
    msg.error.assign("TNOMRZOLROOCZIPXRTJEEGKWJFTJLUAHFRSYVKXHQSAXPPYVJPLEVTLKHHUNBTIMNWUMUEFBBXAOSXZCRRTZYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.656472182141);
    msg.setSource(63457U);
    msg.setSourceEntity(152U);
    msg.setDestination(25827U);
    msg.setDestinationEntity(46U);
    msg.state = 221U;
    msg.error.assign("KCLMELHNUXZTIWTFQRQVMHCHLOCGNXMULGIUFEWQPBDQFUMQSEXDMRIGCDVUNBHFMKOATDMPPRCEYVGSDIWZUGYLATLJSBVVXHSGWTMHIXSCXBGJYCTWIMZVNEFOKUSJJDJISRHYWAJKOIKAJBXZSVNYENNOTPTHPUDEHKZQDVYYNRBGFAFRZBUPLLJOYWZBOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.896528597745);
    msg.setSource(22995U);
    msg.setSourceEntity(68U);
    msg.setDestination(63370U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.683018790683);
    msg.setSource(51905U);
    msg.setSourceEntity(203U);
    msg.setDestination(55309U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.224544915325);
    msg.setSource(3175U);
    msg.setSourceEntity(137U);
    msg.setDestination(48661U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.714317988063);
    msg.setSource(30262U);
    msg.setSourceEntity(39U);
    msg.setDestination(47020U);
    msg.setDestinationEntity(221U);
    msg.op = 204U;
    msg.speed_min = 0.196857081313;
    msg.speed_max = 0.695830514873;
    msg.long_accel = 0.998716140407;
    msg.alt_max_msl = 0.190165912019;
    msg.dive_fraction_max = 0.701950159156;
    msg.climb_fraction_max = 0.718324756405;
    msg.bank_max = 0.322327266752;
    msg.p_max = 0.48962625804;
    msg.pitch_min = 0.322476089911;
    msg.pitch_max = 0.42918902282;
    msg.q_max = 0.579604938143;
    msg.g_min = 0.590353522498;
    msg.g_max = 0.599542272144;
    msg.g_lat_max = 0.623139737178;
    msg.rpm_min = 0.611984891323;
    msg.rpm_max = 0.474421102319;
    msg.rpm_rate_max = 0.455487198699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.601087688497);
    msg.setSource(24782U);
    msg.setSourceEntity(94U);
    msg.setDestination(10274U);
    msg.setDestinationEntity(132U);
    msg.op = 244U;
    msg.speed_min = 0.796063300742;
    msg.speed_max = 0.957243666404;
    msg.long_accel = 0.641787712476;
    msg.alt_max_msl = 0.945338879892;
    msg.dive_fraction_max = 0.736489085967;
    msg.climb_fraction_max = 0.725029680543;
    msg.bank_max = 0.523095645078;
    msg.p_max = 0.445132930601;
    msg.pitch_min = 0.148347085814;
    msg.pitch_max = 0.359892139685;
    msg.q_max = 0.0719929675336;
    msg.g_min = 0.518840290558;
    msg.g_max = 0.0981383686877;
    msg.g_lat_max = 0.757144459042;
    msg.rpm_min = 0.204452206984;
    msg.rpm_max = 0.502535537;
    msg.rpm_rate_max = 0.337779088944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.058280014003);
    msg.setSource(15677U);
    msg.setSourceEntity(25U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(14U);
    msg.op = 113U;
    msg.speed_min = 0.209688966478;
    msg.speed_max = 0.106667239368;
    msg.long_accel = 0.344355011714;
    msg.alt_max_msl = 0.4894541159;
    msg.dive_fraction_max = 0.306447705395;
    msg.climb_fraction_max = 0.125413668534;
    msg.bank_max = 0.542469776416;
    msg.p_max = 0.280944079037;
    msg.pitch_min = 0.265416895566;
    msg.pitch_max = 0.0898989219293;
    msg.q_max = 0.0540224853552;
    msg.g_min = 0.0332543614014;
    msg.g_max = 0.230793111497;
    msg.g_lat_max = 0.1630401755;
    msg.rpm_min = 0.404245470976;
    msg.rpm_max = 0.146447843828;
    msg.rpm_rate_max = 0.405501466343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.684321740332);
    msg.setSource(15265U);
    msg.setSourceEntity(177U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(15U);
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3359539182U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.688681511556);
    msg.setSource(27202U);
    msg.setSourceEntity(123U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(110U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 21601U;
    tmp_msg_0.type = 103U;
    tmp_msg_0.max_size = 10502U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.141020097614;
    tmp_tmp_msg_0_0.base_lon = 0.549518727972;
    tmp_tmp_msg_0_0.base_time = 0.190444775213;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.608307967773);
    msg.setSource(36777U);
    msg.setSourceEntity(11U);
    msg.setDestination(54565U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.311553679608);
    msg.setSource(39888U);
    msg.setSourceEntity(175U);
    msg.setDestination(49018U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.975610032312;
    msg.lon = 0.625874534217;
    msg.height = 0.081313640687;
    msg.x = 0.160477088376;
    msg.y = 0.127640855888;
    msg.z = 0.683423444096;
    msg.phi = 0.265349176509;
    msg.theta = 0.475138986503;
    msg.psi = 0.972439174962;
    msg.u = 0.345103431154;
    msg.v = 0.788088495791;
    msg.w = 0.399609050363;
    msg.p = 0.106416309666;
    msg.q = 0.938816196577;
    msg.r = 0.129137105053;
    msg.svx = 0.750377122028;
    msg.svy = 0.383644001016;
    msg.svz = 0.417645239083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.734309160458);
    msg.setSource(22535U);
    msg.setSourceEntity(212U);
    msg.setDestination(41476U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.630451601764;
    msg.lon = 0.134983304001;
    msg.height = 0.166363215206;
    msg.x = 0.639685752968;
    msg.y = 0.352666937878;
    msg.z = 0.209528969452;
    msg.phi = 0.624109551042;
    msg.theta = 0.19755047724;
    msg.psi = 0.10697474255;
    msg.u = 0.46370967151;
    msg.v = 0.150758583214;
    msg.w = 0.444217986011;
    msg.p = 0.782440757655;
    msg.q = 0.706579075547;
    msg.r = 0.546106181271;
    msg.svx = 0.654822903793;
    msg.svy = 0.899337292577;
    msg.svz = 0.740154278515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.542494053234);
    msg.setSource(20990U);
    msg.setSourceEntity(57U);
    msg.setDestination(27003U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.300495796517;
    msg.lon = 0.0524746187659;
    msg.height = 0.148775997875;
    msg.x = 0.117051792014;
    msg.y = 0.470638182627;
    msg.z = 0.402997455975;
    msg.phi = 0.199208784235;
    msg.theta = 0.224704210216;
    msg.psi = 0.244421497026;
    msg.u = 0.0101274628601;
    msg.v = 0.701827917126;
    msg.w = 0.0714374816697;
    msg.p = 0.919912225324;
    msg.q = 0.892399970146;
    msg.r = 0.13440972425;
    msg.svx = 0.88432725647;
    msg.svy = 0.355709907376;
    msg.svz = 0.611084447463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.142097080983);
    msg.setSource(52171U);
    msg.setSourceEntity(213U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(206U);
    msg.op = 99U;
    msg.entities.assign("WTSTHUPRMUQOTFDHPXPUKQBWYNHZZAOFKJRFAGWJGVLDBAISYSTDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.744021983152);
    msg.setSource(15686U);
    msg.setSourceEntity(147U);
    msg.setDestination(6030U);
    msg.setDestinationEntity(212U);
    msg.op = 50U;
    msg.entities.assign("HNTUKERQKPNKNXOVKEMBVNGMGORXPLFSNCDJEDTEBTLRGIYIXQXRIXBOSQAWLQPCSLABWZCRHXENUBANMBAZMOCUPJFKYKUAYCOVVCBGDUWYEEWBNHFALFGJHSSQCETDZIZTTLRQLEFINJQSPPFAUGTTMAGOFVBWHMMDYNQDUYVVRZQSOVXDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.593199390551);
    msg.setSource(8060U);
    msg.setSourceEntity(62U);
    msg.setDestination(50360U);
    msg.setDestinationEntity(36U);
    msg.op = 55U;
    msg.entities.assign("YPHDCXGLBYUNTLSWJNAROZNYIWMKCXRXALBUIXMVHANGGEACQMDJQMOKHNWNUODRKIHMQWSLNTRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.00193465804257);
    msg.setSource(7336U);
    msg.setSourceEntity(58U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(238U);
    msg.type = 114U;
    msg.speed = 64242U;
    const char tmp_msg_0[] = {38, -119, -63, 28, -32, -4, 57, 32, -9, -87, 115, 105, 100, 124, -79, -11, 71, 75, -35, 55, 26, 54, -8, 86, 126, 28, 96, -63, 84, 1, -43, 86, -118, 76, -16, 55, -79, -8, -4, -115, -86, -42, 7, -74, -91, 28, -113, 21, -9, -31, 80, 55, 36, 6, -72, -105, -40, -30, -66, -11, 56, 27, 13, -75, -73, 122, 98, -88, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.996335895842);
    msg.setSource(8140U);
    msg.setSourceEntity(19U);
    msg.setDestination(8724U);
    msg.setDestinationEntity(107U);
    msg.type = 77U;
    msg.speed = 5670U;
    const char tmp_msg_0[] = {-8, 33, 27, 113, -46, 110, -58, -11, -57, 10, -14, 9, -35, -108, -68, -21, -102, 38, 15, 44, 68, 82, -122, 42, 21, -45, 117, -57, 88, 62, -18, 61, -75, 23, 59, 115, 97, -101, -76, -41, 50, -32, 82, 17, -88, 26, -59, -79, 13, -69, 42, 71, -55, -1, 64, -70, -39, 34, -8, 0, 47, -85, 93, -23, 16, -110, -68, 83, -36, 22, 126, -119, -126, 114, 73, -84, -127, -66, 76, -112, -100, 51, 86, 5, -89, 76, -121, 117, 44, -119, -124, 39, -90, 118, 108, 81, -108, -101, -68, -87, 98, -39, -1, -18, 34, 48, 100, -109, 69, -38, 125, -80, -7, -128, -22, 33, -85, 112, -46, -41, -101, 116, 92, 92, 18, 88, 57, -1, 114, -107, -109, 102, -55, 108, -36, -36, 124, -69, 30, -21, -114, -47, -43, -53, 109, 21, 73, -48, -77, 17, 50, 23, 37, 0, 108, -71, 44, 97, 59, -123, 13, -120, 119, 4, 20, -34, -112, 65, 121, 15, -94, 70, 61, 36, 54, 16, -74, -2, -109, -89, -104, -9, 39, 50, 116, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.413628788489);
    msg.setSource(20126U);
    msg.setSourceEntity(109U);
    msg.setDestination(40562U);
    msg.setDestinationEntity(218U);
    msg.type = 174U;
    msg.speed = 21515U;
    const char tmp_msg_0[] = {94, 77, -37, 23, -123, 80, -123, -60, 51, 114, 105, 33, 56, -72, -25, 18, -16, 72, 23, -43, -1, -66, 92, -113, 29, 5, 28, -73, 39, 104, -3, -86, -119, 27, 58, 99, -62, 93, -103, 16, -71, -43, -73, 70, -53, 33, -106, -44, -21, 5, -53, 89, -13, 122, 92, -26, -4, 11, -60, 106, 92, -28, 82, -70, -114, 66, -42, -80, -72, -39, -104, -21, -108, -84, 21, 62, 37, 45, -120, -112, -30, -99, -42, -61, 38, -11, 41, -42, 23, -1, 75, 118, -114, -95, -35, -92, -92, 79, 61, -24, 71, -39, 0, -57, 54, -1, 61, -128, 73, -56, -83, 35, -12, 104, 117, -35, 60, -81, -118, 114, 30, -27, -122, -58, -82, 126, -84, -81, -92, -22, 18, 47, -21, -106, -117, -78, -31, -60, 77, 90, -56, -16, 62, 95, 102, -105, 75, -89, -79, 16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.616204851053);
    msg.setSource(42248U);
    msg.setSourceEntity(214U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(210U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.691359628611;
    msg.bank2p_pgain = 0.398741245773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.663970725361);
    msg.setSource(18467U);
    msg.setSourceEntity(224U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(26U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.812611986723;
    msg.bank2p_pgain = 0.650749257244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.811347115519);
    msg.setSource(18216U);
    msg.setSourceEntity(188U);
    msg.setDestination(54228U);
    msg.setDestinationEntity(203U);
    msg.op = 90U;
    msg.tas2acc_pgain = 0.794951987907;
    msg.bank2p_pgain = 0.381379952028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.58605368041);
    msg.setSource(38382U);
    msg.setSourceEntity(197U);
    msg.setDestination(64007U);
    msg.setDestinationEntity(157U);
    msg.available = 2492450313U;
    msg.value = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.248642289745);
    msg.setSource(15238U);
    msg.setSourceEntity(238U);
    msg.setDestination(50027U);
    msg.setDestinationEntity(236U);
    msg.available = 1242905270U;
    msg.value = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.411259373585);
    msg.setSource(38899U);
    msg.setSourceEntity(75U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(50U);
    msg.available = 3918515013U;
    msg.value = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.45960610668);
    msg.setSource(46700U);
    msg.setSourceEntity(185U);
    msg.setDestination(2610U);
    msg.setDestinationEntity(185U);
    msg.op = 104U;
    msg.snapshot.assign("BKSWFNXHIPUZFRSOKIAHMMUMEOIXANCCQFDHBSTFQOIVSWHQIZQL");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 36U;
    tmp_msg_0.frag_number = 157U;
    tmp_msg_0.num_frags = 142U;
    const char tmp_tmp_msg_0_0[] = {-62, -86, -87, 24, 97, 121, -123, 56, -6, -9, -31, -95, 40, -126, -88, -107, 27, 114, -11, 1, 51, -104, 29, 117, -68, 30, 0, -40, 63, -80, -128, 81, 76, 87, -28, -73, -101, -4, -21, -114, -123, -121, 41, -94, 64, 27, -75, -101, -76, 59, -9, 0, 17, 122, -65, 96, -28, 89, -15, -35, 61, 92, -9, -85, -109, -48, -63, -17, 98, 18, 113, 89, -74, 57, -87, -67, 88, 113, 0, 65, -19, 66, -84, 1, -47, 13, 96, 14, 46, -72, 20, 34, 100, 76, -83, 71, -100, -103, 90, -60, 93, 57, 46, 111, -123, 83, 23, -41, 47, -104, 92, -33, -80, 121, -1, -92, -84, -63, 10, 0, 104, 88, 38, 97, -105, -38, 100, 44, -27, 54, -72, 72, -52, 87, -36, -12, 63, -50, 66, 82, -108, 26, -61, -118, 72, -38, -78, -2, -10, -14, 90, 0, 71, 21, -83, -22, 28, -95, 59, -102, -22, 26, -70, 4, 94, 75, 45, -71, -8, -36, -64, -36, -118, -4, -76, 70, 83, -126, 12, 115, 33, -44, -37, -125, -85, -59, 21, -74, 61, 73, 46, -121, 56, 83, -59, 59, -104, -70, 110, -34, -120, -111};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.263794872266);
    msg.setSource(62551U);
    msg.setSourceEntity(181U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(48U);
    msg.op = 167U;
    msg.snapshot.assign("ZZAAHGVPJUCBARDWPECRDRGVKKIHZUTSSLIARBUEQAOIFCHVZXGJPTCQYOZEEVWJOYBDJLINXMQXOQVOFYJDWQWWXMVKVDTYOWSLHZUPOQRAJIKXSOYYHVMFTPEZPMLRGGQEFLNTGVIEBZGRPNCDSUUPMHSGKFNMMCBXGSUEUNKRCNKYFDQWDLCKVTYJMBHWBHOLQN");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 130U;
    tmp_msg_0.longain = 0.720918047919;
    tmp_msg_0.latgain = 0.814856578304;
    tmp_msg_0.bondthick = 3097710678U;
    tmp_msg_0.leadgain = 0.19604827502;
    tmp_msg_0.deconflgain = 0.86752907415;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.331244770432);
    msg.setSource(32786U);
    msg.setSourceEntity(148U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(162U);
    msg.op = 183U;
    msg.snapshot.assign("HMUCLZVGSJKSPQREAYRDSQNBFTPKTAYNTJOYQWDULGNTWNLJQRPRYUCRXRMKVABPVVUHIODCDNNBUHVUBOBJCXAMLWKIOFHSBWLQMOETLZPNWWXVIZHCXAMJMVMCGKPVRJRFBMGXGYUXCSINZEZHPRUEPZQHNVYJIZQUJCTXSWKDWFATBKONEDDOGPKYYQCX");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.655436212834;
    tmp_msg_0.x = 0.890316481558;
    tmp_msg_0.y = 0.52555556894;
    tmp_msg_0.z = 0.404397779092;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.61305553349);
    msg.setSource(13587U);
    msg.setSourceEntity(57U);
    msg.setDestination(19168U);
    msg.setDestinationEntity(117U);
    msg.op = 43U;
    msg.name.assign("FYWUISSKZTVSPCXEFADULAXKAULCJLDHBAQNJIVNCMOOKUSWIPCYMFNJXBFHRBPUZLVGRQLJVMMQWEWSOIENCHXEDYRXMGZBZMGQZTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.148552041408);
    msg.setSource(53145U);
    msg.setSourceEntity(211U);
    msg.setDestination(17802U);
    msg.setDestinationEntity(160U);
    msg.op = 238U;
    msg.name.assign("LMCTVPQQFCVWHXZPNSEVZTXEPMLNKGDSFVYONCEBJRHIYQEWKOWCZGRGFJUXSPAQWYVOQGVRJYUGJXIJWRYVKAZXTXKUHZDRHCFASTKNFCTWSICHUMTDQLSXVKTTQKLAOBJBOREFERBNZDAIUWGOKIDZZXMYAOPZBNNUGLAMFWCDMRQPOETIKRQPCSZXBHAFTUBSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.563783622497);
    msg.setSource(64452U);
    msg.setSourceEntity(196U);
    msg.setDestination(18136U);
    msg.setDestinationEntity(109U);
    msg.op = 60U;
    msg.name.assign("UFDBZGUMXVEBOJQHZCCPLGDQLLZZQKUIHBCSKGASBWWLKXHGTWCYXQIAADEMXPPNXTQURDPPOEKBOBTMUCNHMEYPVSSVHCTAHMWLKTWBXVKZKFGIIFWLDGAWIOIRZMFRFTEMEWZRQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.1622135537);
    msg.setSource(9027U);
    msg.setSourceEntity(246U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(227U);
    msg.type = 3U;
    msg.htime = 0.250966044642;
    msg.context.assign("CACWXWQKSVYIELYWJBTDYQZGNNQDTCTHNGRCAVOFVXKPUGSOHLASWJBSKFXQTRIOQGQUTRMRUSLDMYGOWMPKPYAZVZBPHUNBIPEMOXJAXJLMPOGVDRAXGYJYNQNXCEFERHCYWKTBSPFFMJDKBTVRDAMIKXEJLLZFXHAYLDYOSFHCOUFGCZWPOHIEWAV");
    msg.text.assign("NOYOTAXRRIHMZBUVBNDGWJDTPALGUISLWHJLPQEJKIPZPOQXRDAUWFLLSIJTEKZSWFHGRTBQSNXECQCBYRWNZVAQVEEKZLJDPFQBGCPIHMIMGPSBFLHSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.0828307016531);
    msg.setSource(52402U);
    msg.setSourceEntity(48U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(248U);
    msg.type = 151U;
    msg.htime = 0.723534584442;
    msg.context.assign("LWQELWGAXFAP");
    msg.text.assign("BRPSJTJBTOVROOHGAGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.865331786677);
    msg.setSource(56443U);
    msg.setSourceEntity(1U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(153U);
    msg.type = 174U;
    msg.htime = 0.566914840662;
    msg.context.assign("JZCXHIATLKCZJKNXNIQHSSRFCIYURSVXLFTVPALFWMSHEPNFM");
    msg.text.assign("ADAUZRQZUZTLXYGPSPIEECXYGCXIRAYJMMYPGTDXWTDTASRGJUBIVDCNJNNOEVVOGFTOULFZBVQFVVKHVZNFDHSXBCKHZKNBLSPUZRRJTYEXEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.626167532186);
    msg.setSource(33953U);
    msg.setSourceEntity(205U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(1U);
    msg.command = 56U;
    msg.htime = 0.291361806443;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.htime = 0.624622716795;
    tmp_msg_0.context.assign("OVCVSSTQYMGSJXBVHVPQNTKIADXJPZBXAWNUHKZVEWTJLRAVRQSNEKONFDXJQMHNOSNGOOFIAYWQKHCIEREJEMFAUNLCCKBBGRKTWRKYYZRLZLZAABDLMCGPCITFZYVXUPWOPOCMFQAWFSHQLGHRPMDLGYUOYHDHCULITOCPYQCINAEZFT");
    tmp_msg_0.text.assign("KGIZQRVWFBYDIAQNMRECLRGJVFZTGJYWXPDXEEXJOPLFLHWCTESELSSOKHLHVZYHYODFOLYZNUBAJNXXEMOYWJBIRGVUEYVWCHIXU");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0455450209995);
    msg.setSource(21465U);
    msg.setSourceEntity(35U);
    msg.setDestination(49667U);
    msg.setDestinationEntity(26U);
    msg.command = 188U;
    msg.htime = 0.0358592650952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.990211627947);
    msg.setSource(60311U);
    msg.setSourceEntity(154U);
    msg.setDestination(18964U);
    msg.setDestinationEntity(49U);
    msg.command = 10U;
    msg.htime = 0.889401772931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.236910913733);
    msg.setSource(33106U);
    msg.setSourceEntity(188U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(148U);
    msg.op = 236U;
    msg.file.assign("BWSMRXSICCADPLTVYDVJSZQWNVZEZFGEGMZDXBUYNQQWNDCRVUSXLMJHFSTGGLUFWWTUSFKKHNNYPEQYBPGHYVTLEQXATMVDAIZBMGINIRZCJIRCJYIPWMWKBCZMCSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.655839199889);
    msg.setSource(49601U);
    msg.setSourceEntity(240U);
    msg.setDestination(15277U);
    msg.setDestinationEntity(201U);
    msg.op = 104U;
    msg.file.assign("OMKWWSDIKSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.979383077487);
    msg.setSource(45822U);
    msg.setSourceEntity(177U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(234U);
    msg.op = 96U;
    msg.file.assign("TKSMLDFTFDVDHCYSDRZANEUXMYRWSQPIIBLXZBPMLKNZJIRUXZQHKZNYJECMIHMADENLXPRGKXPUCOAKGOHTQYHWECVKCTEOFOSWATNJYRFBTENSGOEQLPOUQOPVKPXDGFOUZMSIBBMPFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.281506863343);
    msg.setSource(4066U);
    msg.setSourceEntity(24U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(224U);
    msg.op = 143U;
    msg.clock = 0.585096337796;
    msg.tz = -65;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.113627687098);
    msg.setSource(52595U);
    msg.setSourceEntity(55U);
    msg.setDestination(41168U);
    msg.setDestinationEntity(220U);
    msg.op = 27U;
    msg.clock = 0.498685076049;
    msg.tz = -104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.917475647089);
    msg.setSource(6387U);
    msg.setSourceEntity(163U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(227U);
    msg.op = 220U;
    msg.clock = 0.263622398139;
    msg.tz = 83;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.978605493791);
    msg.setSource(54581U);
    msg.setSourceEntity(241U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(51U);
    msg.conductivity = 0.0285204127461;
    msg.temperature = 0.41892430832;
    msg.depth = 0.888169765343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.387423905922);
    msg.setSource(4630U);
    msg.setSourceEntity(135U);
    msg.setDestination(434U);
    msg.setDestinationEntity(44U);
    msg.conductivity = 0.201502497183;
    msg.temperature = 0.250532070087;
    msg.depth = 0.13254545867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.00639516822666);
    msg.setSource(8357U);
    msg.setSourceEntity(143U);
    msg.setDestination(37141U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.125567289388;
    msg.temperature = 0.725507465933;
    msg.depth = 0.203854619922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.284254283868);
    msg.setSource(46782U);
    msg.setSourceEntity(107U);
    msg.setDestination(37U);
    msg.setDestinationEntity(180U);
    msg.altitude = 0.360343148093;
    msg.roll = 11137U;
    msg.pitch = 50159U;
    msg.yaw = 39265U;
    msg.speed = 14845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.956997745759);
    msg.setSource(44688U);
    msg.setSourceEntity(45U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(191U);
    msg.altitude = 0.794123025135;
    msg.roll = 61069U;
    msg.pitch = 21430U;
    msg.yaw = 39328U;
    msg.speed = -24046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.315015816231);
    msg.setSource(27165U);
    msg.setSourceEntity(103U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.777813865543;
    msg.roll = 63654U;
    msg.pitch = 30162U;
    msg.yaw = 31915U;
    msg.speed = 17789;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.546235682436);
    msg.setSource(33770U);
    msg.setSourceEntity(119U);
    msg.setDestination(54257U);
    msg.setDestinationEntity(3U);
    msg.altitude = 0.887994533456;
    msg.width = 0.00487004505612;
    msg.length = 0.959907002016;
    msg.bearing = 0.233100600151;
    msg.pxl = -1008;
    msg.encoding = 11U;
    const char tmp_msg_0[] = {-56, -23, -34, 114, -74, 38, 37, 16, 12, -5, 74, 95, 68, 17, -97, -16, -57, 115, -124, -80, 9, -50, 117, 98, -32, 42, 5, 72, 38, 13, -90, -39, 25, 125, 111, 28, 42, -72, -17, 61, 68, -75, 40, 45, 2, 2, -87, 85, 37, -105, 109, -27, -22, 122, 53, 28, -81, 105, -35, -96, 11, 49, -93, 13, -77, 58, 62, 56, -16, -37, -1, -96, -62, 113, -46, -61, 47, 124, 114, 20, 36, 87, -29, -116, -39, -121, -15, -48, -39, -104, 40, -9, 10, -69, 99, -58, -63, -77, 0, -108, 98, -95, -93, -63, -78, -22, 87, 39, -65, 97, 7, 55, -41, -20, 95, 103, 77, 65, -19, -116, -90, 48, -17, 17, 69, -57, -75, 12, 22, -12, 17, -45, -62, -94, -43, -91, -115, 60, 42, 46, 26, 68, -55, 109, 22, 40, 12, 109, -86, -94, 32, 66, 79, 15, 66, 0, 84, -96, 52, 118, 50, 111, -128, -108, 44, 16, 41, 115, -114, -124, -69, 56, 47, -58, -30, 123, -60, 67, 0, 41, -53, 74, 7, -49, -124, 6, 60, -118, -107, -37};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.526348352125);
    msg.setSource(38941U);
    msg.setSourceEntity(2U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(185U);
    msg.altitude = 0.817229030876;
    msg.width = 0.588565128637;
    msg.length = 0.479364188113;
    msg.bearing = 0.970222117183;
    msg.pxl = -19068;
    msg.encoding = 35U;
    const char tmp_msg_0[] = {69, 96, -23, -70, -106, -51, -54, 21, -43, 126, 119, 105, 19, 104, -28, 93, -52, 91, 106, 100, 0, -10, 22, -11, 102, 121, 43, 123, -35, 25, 11, 125, 19, -10, 120, -99, 27, -126, -72, -42, -66, -26, -52, -122, -11, 49, 96, -99, -18, -41, 103, -57, -109, -62, -101, 119, 86, 40, -120, -99, 51, 100, -124, -27, 72, -103, -7, 47, -128, -78, 106, 11, 93, -90, -65, -54, -127, 101, 54, 115, 85, 44, -60, 106, -48, -117, -107, -91, -110, 4, 114, -57, 40, 82, 120, 33};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.213600670309);
    msg.setSource(49610U);
    msg.setSourceEntity(82U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.3501809885;
    msg.width = 0.776173869786;
    msg.length = 0.862939929415;
    msg.bearing = 0.128527181062;
    msg.pxl = -15247;
    msg.encoding = 134U;
    const char tmp_msg_0[] = {109, 20, -102, -14, -101, -95, 85, 39, 95, -107, 71, 66, -23, 104, -20, 2, 98, -96, 108, -106, -51, 36, 51, 36, 18, -50, 114, -78, -14, 94, -41, -76, 25, -83, 109, -118, -16, 99, 111, -126, -18, -108, 61, -37, 52, 72, -88, 6, -63, 0};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.668791726675);
    msg.setSource(50446U);
    msg.setSourceEntity(136U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(99U);
    msg.text.assign("NZTPZZMVQLDFLWPFABNMROVRONQACSUVAPBLGN");
    msg.type = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.70786618053);
    msg.setSource(31455U);
    msg.setSourceEntity(247U);
    msg.setDestination(57294U);
    msg.setDestinationEntity(27U);
    msg.text.assign("RKKSJGAXVQPJHOJIWSDLHNCYALKFCTOGZMFJPFECIMFVLWRTQBDCPIPBCWN");
    msg.type = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.125826804014);
    msg.setSource(17807U);
    msg.setSourceEntity(141U);
    msg.setDestination(61843U);
    msg.setDestinationEntity(56U);
    msg.text.assign("JJRXCNKGUQBRJEWWXFZWKXSIIYLYOWDFFFJNDZDEFNHMVTFEEULDQNVQPJMHMKRZMQYLHY");
    msg.type = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.185170873607);
    msg.setSource(1241U);
    msg.setSourceEntity(143U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.773193891651);
    msg.setSource(6031U);
    msg.setSourceEntity(199U);
    msg.setDestination(45643U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.882531037067);
    msg.setSource(31483U);
    msg.setSourceEntity(146U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0795060768811);
    msg.setSource(54664U);
    msg.setSourceEntity(116U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(219U);
    msg.sys_name.assign("TQNOXRAIGTWMQWUCWMOCVNSNDEREQRVVGPL");
    msg.sys_type = 22U;
    msg.owner = 12219U;
    msg.lat = 0.11368093648;
    msg.lon = 0.714967230237;
    msg.height = 0.830373042154;
    msg.services.assign("JOOSFABPDUEDZWHHRMYBDRWCORSUFXTJZQYKVLXPPAMLSLAQFDMNNYBAZNKYEEZNKVPQSUVGHXHYUFVVVLNWYXYZOFFQCVTRKZBMLRLOMKPVIFJPHRPMUCUYIHETKYAJBJXQEYIKSSWVRGTSVXWQGAAPGBCIFERDXNHSAOMLCDHUWILINODTGZKCCEMFAUOOIZJBGNCDCJTGLIHPSXJSENXZBQGEGNQOWJAQZXHITETDMITBUBWWLFMGRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0605210754025);
    msg.setSource(50529U);
    msg.setSourceEntity(72U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(159U);
    msg.sys_name.assign("VOLHZYOFRVJRXTEFTLMZQEYPKNZGIV");
    msg.sys_type = 102U;
    msg.owner = 14590U;
    msg.lat = 0.855760767799;
    msg.lon = 0.614226130666;
    msg.height = 0.711680863829;
    msg.services.assign("VMLZHWALJXLOEWFBAYRRCCHZGWHVLKXRPVMFYPJOURACJKNKEKAVBYBDTEDXLJVLFZZNEELYLMNBSIBLSZCZYSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.809659363901);
    msg.setSource(49197U);
    msg.setSourceEntity(198U);
    msg.setDestination(48416U);
    msg.setDestinationEntity(168U);
    msg.sys_name.assign("DGHOZMLOBYJVHJVOJUPWBIUFJZXLAEGXOIFNMNQILRIUHEGRSULBREAKDFMONENDFQLNOAJZEPRUDQABZYXZDAHPNIGFWAILPNWQROHKXPWDZGQWFGYHLEZODSELYURPTYLZJBGAXSMJHRBVVAWTUFIKQTLGNCVMYMWPFXFYTDFRWCJC");
    msg.sys_type = 14U;
    msg.owner = 22466U;
    msg.lat = 0.890592663797;
    msg.lon = 0.625562805214;
    msg.height = 0.659862439537;
    msg.services.assign("SFUMZSKYBJEFGFXBQLXGXUHQDYBYNJDPXRRFCKKJJXZSWFZIZDVIRPSZOLAUUSWYTWVDNRPABYESNJNWJQJGDOKJYDNFTNHAQYSAPMHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.480414002876);
    msg.setSource(29224U);
    msg.setSourceEntity(204U);
    msg.setDestination(47394U);
    msg.setDestinationEntity(66U);
    msg.service.assign("QSXFVGCJRPDISMYFWOBCYIBSNGQVXOTFGTKDYZTENPAAAVZVDWQIHNVHSXJUCLGEUBFREDPTCJUAECZJOIKTSQAKUMG");
    msg.service_type = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.228879281096);
    msg.setSource(28904U);
    msg.setSourceEntity(223U);
    msg.setDestination(15503U);
    msg.setDestinationEntity(161U);
    msg.service.assign("BUFITRFISIRTBNHWSQLPPTQVMMYZEQDKINYVYUJIWDMNOLIKGYQGKJUCFLWPWMRSAEQDAEFKHRBNSPCUBSVJTIUGALSREJIHJRTNGPBSJRYOAOFEVAHBLMKOTEHCNRXXDGWHBDQJGXASLVYTNMDZWBHYANUMUQVDZVTFFPOJYTMGZDPQCXQXKZMKUPGIOZUBFDD");
    msg.service_type = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.704916312171);
    msg.setSource(41388U);
    msg.setSourceEntity(144U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(214U);
    msg.service.assign("DSDFVUONIHYEQFVJJEOYBTURLLKDLLXKQGZUIPKZUBIXRSTNPWJWFTWXJTWTKNABDUAAWNWBDGWGFSCTOYRYUGVJKHDOJMHWCAXQKZNQRNAVDSXYBZOKTFHKXOAEKLKZFURYYIQJEICAQTSQHR");
    msg.service_type = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.970905086216);
    msg.setSource(61585U);
    msg.setSourceEntity(37U);
    msg.setDestination(25434U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0544054197582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.99708693324);
    msg.setSource(10131U);
    msg.setSourceEntity(65U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(189U);
    msg.value = 0.956589166193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.986398560464);
    msg.setSource(31237U);
    msg.setSourceEntity(29U);
    msg.setDestination(28963U);
    msg.setDestinationEntity(203U);
    msg.value = 0.30291954987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.116673017889);
    msg.setSource(41758U);
    msg.setSourceEntity(226U);
    msg.setDestination(25934U);
    msg.setDestinationEntity(79U);
    msg.value = 0.387390588869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.879446269553);
    msg.setSource(57091U);
    msg.setSourceEntity(192U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(211U);
    msg.value = 0.836607592487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.789799206468);
    msg.setSource(31567U);
    msg.setSourceEntity(79U);
    msg.setDestination(17256U);
    msg.setDestinationEntity(179U);
    msg.value = 0.906364225934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.549344997742);
    msg.setSource(9786U);
    msg.setSourceEntity(156U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(214U);
    msg.value = 0.120679897683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.471645740681);
    msg.setSource(55722U);
    msg.setSourceEntity(85U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(85U);
    msg.value = 0.83826814059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.721875878885);
    msg.setSource(55632U);
    msg.setSourceEntity(194U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(66U);
    msg.value = 0.741631908672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.924897937461);
    msg.setSource(57025U);
    msg.setSourceEntity(81U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(23U);
    msg.number.assign("VETVWMSKILHCGUXOXRUFXQTGPZFQYYOOLDHEUNBEDCNLAZKQKVHUANFINPPSNTVTPQHYABBOKYTPAMDNYCBXULCUNLMOQBBEWHSZETPDSTJZURARDZRHEGIYIDFRWXBFVTIVSADPANCFZXZHYCSGHVRMJPODQGTDJMEWZPFAXVZWGBOQNGSMXLMJRJKKPZJWUYMHWKVHLFRBSGXMLCSMWQUWXAEJOIQJOLTI");
    msg.timeout = 47866U;
    msg.contents.assign("KQZVKOEYOLFAZUUXRTDDXYARLKTSYGZQZNVEVMHPBBXWFVNXTHFYSXOEXAUMHYCNTLFKOBSDHRBKLTIRSKBJIUCNJHAMQSTIGUJJYWBGILAWFBGJNQVDACZUEXVWCNACPMMJJKYUCRHVLVQEPAJWBUFCHCKKZPNFQDIDLOTRGRHOLIIMMTMBVZPXPKMLSJOGYURMRESBWIGQULPGCSQAEPZVCDFWZGYAXDNEFTND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.392488958912);
    msg.setSource(30757U);
    msg.setSourceEntity(215U);
    msg.setDestination(58780U);
    msg.setDestinationEntity(85U);
    msg.number.assign("SGWAATWBRYVOPJKNCQXZWVGFZSGUYTKGNUMLYLCODMRWVLPDPVKNMZVYPCTBRKOEYONMUHDPTNQEXIXUZLXKWJVGOFAUAZHIMBWRBTIRGAPILLWISGIAQGJAJHHNKZDEPOKMRHLQHECFMEBISNFRSUYU");
    msg.timeout = 39178U;
    msg.contents.assign("QGIKDLOEYCUQPNLCNYMAWIRZTAOCXASFBHWVTXJAKBDECIQWYHMBFGRKFCPODDXMPXSYGMJAFMFBHANUGWUALZYJSZZBINDJZOCNOPQNIIMZVMUHSSKNSEKCOWTCRROQZVVTZVKDRBYBLQRTNITPIVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.923655176073);
    msg.setSource(18062U);
    msg.setSourceEntity(155U);
    msg.setDestination(60602U);
    msg.setDestinationEntity(182U);
    msg.number.assign("BGENIBKRQKQPHEYDJNSXNTOWSBW");
    msg.timeout = 12607U;
    msg.contents.assign("PFQCDLGYGMHKRATYQHHCDXEYZKWVUTKNAFEOINGIMMENEZNJSGBSILSJBBPPKSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.513791413864);
    msg.setSource(26463U);
    msg.setSourceEntity(48U);
    msg.setDestination(521U);
    msg.setDestinationEntity(184U);
    msg.seq = 215109042U;
    msg.destination.assign("YECUZWGGTLAUQQSTBPVDYGVHYKAKUSUAOWJAIXPFMZOTOYPMRPEIFUSZVETEAXXHBQBMJZPCKDLBOCJSW");
    msg.timeout = 7717U;
    const char tmp_msg_0[] = {-51, 40, 57, -50, -21, -10, 81, 117, 85, 32, -18, 22, -84, 80, 32, 28, -54, -27, 67, 53, -3, 35, -125, 106, 101, -34, 84, 120, -90, -44, -93, -76, 47, -100, 31, 60, 117, 72, 10, -17, 63, -81, 117, -92, 78, -59, 48, -38, -104, -117, -107, -62, -126, -48, -92, 26, -9, 126, 5, -4, -124, 112, 25, -22, -11, 11, 59, 39, -92, -61, -90, 65, 97, 117, -57, 75, 90, 109, -95, 37, -119, -11, -101, 14, -56, -44, -66, 2, -70, -3, 63, -20, -57, -38, -88, -99, 116, 94, 61, 114, 117, 4, -62, -109, 86, 72, -108, 86, -2, -124, -118, -96, -59, 35, 17, 74, 23, 81, -25, -32, -113, -42, 96, 18, 2, 58, 50, 116, 69, 121, -114, -113, 87, -42, 50, -77, 124, 1, -13, -57, -53, 0, 126, -86, 112, 45, -75, 86, -70, -88, -41, -63, -26, -123, -125, 17, -51, -81, -55, -51, 83, -75, -5, -59, -114, -107, 63, -9, 99, -65, -118, -93, -96, 122, -31, -30, -90, 51, -128, 42, -24, 71, 37, -113, -13, -37, -23, -6, 41, 60, 21, 15, -43, 34, -60, 19, -53, -121, -43, 108, 110, -65, 8, 53, -82, 76, 22, -116, -91, -122, -98, -121, 53, -51, -81, -97, -68, 90, 117, -24, -84, -55, 78, -118, -12, 16, -113, 60, -11, 115, 116, -58, -83, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.00185274703659);
    msg.setSource(23641U);
    msg.setSourceEntity(191U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(181U);
    msg.seq = 4275330288U;
    msg.destination.assign("XULGNIVCSUSIZNMIZLLFNDYWXFMVCBWLQYRTHGPHQOUBOWPVVJAAWTASRORLSDPSTZL");
    msg.timeout = 19516U;
    const char tmp_msg_0[] = {44, 33, -101, -76, 12, -69, -48, 102, -106, 81, -62, 3, 107, -7, 6, 111, -55, 119, 5, -62, 122, -85, -121, -110, -30, -96, -56, 53, 120, -29, 82, 22, 24, -15, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.882636755796);
    msg.setSource(13040U);
    msg.setSourceEntity(235U);
    msg.setDestination(18270U);
    msg.setDestinationEntity(158U);
    msg.seq = 76028999U;
    msg.destination.assign("USBRXDCIEZOHTRQTMVAVQQQKXERBHMNZCKRBFSCZNWRJPRZKAYKRSYUVCUTGEATFGPYXEEFLBEJSOZDDTIDMVTUIZAPSJIMNUBITLUAYXEJHNFIPQGYYDLMATPFAHFDJGWPPUJWGKOTCVIYFWTZLJSNMCILEDXGBOBFCQDVZFSMOXOOCKYRPJBUCIOXQFNWLWS");
    msg.timeout = 26346U;
    const char tmp_msg_0[] = {89, 95, -118, 85, 50, 31, 73, -56, 4, 21, 118, 45, -30, -125, 113, -66, 119, 80, -119, -77, -88, -95, -126, 83, -41, -35, 110, 4, 89, -6, 40, 66, -96, 85, -54, -47, 19, -100, 102, -106, 108, -9, 96, 100, -49, -39, 24, 2, -24, 97, 35, 22, 82, -81, -51, 122, 105, 47, -116, -125, -93, 126, -52, 125, 84, -54, 117, -47, 43, 111, -86, 6, 26, -67, 69, 75, -84, -17, 106, -121, 20, -62, -90, 28, 55, 84, -52, 64, 120, 98, -90, -32, 41, -19, 94, 7, 68, -118, -120, 38, 98, -125, 84, -44, -57, 121, 45, 66, -28, 69, 7, 3, 72, 100, -44, 22, 10, -7, 32, 29, -111, -3, 86, 27, -9, 28, -59, -58, -61, 124, -4, -30, -109, 102, -110, 61, 74, -5, -4, -11, -18, -119, 53, -11, -43, -89, 43, 17, -58, -117, 18, 6, 40, 55, -90, 61, 49, -128, -16, -99, 51, -47, -4, -41, 79, -67, -78, 115, -96, 126, -50, 89, -41, -28, -29, -75, 84, -121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.905414244735);
    msg.setSource(58410U);
    msg.setSourceEntity(123U);
    msg.setDestination(45533U);
    msg.setDestinationEntity(68U);
    msg.source.assign("XUFFODNEOCANWPZBZVMQCDXSMZGTGPDMGJYOZGHKTLSSNUDYBNIYFTOJBALTWCMMYRVWQAYVNVIURHUUTIQTBLWKHCYELATFZEQQGBEGEFUJXHGBXINSBBDKONPKROSNHDKUILYAJRDJACGAWSDZCRVQLYMSABKPZDZTAJGRWXHNIMTCCLKOLEXMLVIIWKOQVVSCXZTKMSEWBRFEDUEQQPOEJRZFPIYXUP");
    const char tmp_msg_0[] = {-72, -51, -14, 63, 94, -106, -26, -47, 86, 98, 106, 64, 94, -114, 83, 88, -50, 63, -127, 83, -6, 110, -116, 116, 78, -39, 100, 115, 67, 124, 19, -107, 62, -109, 48, -117, -28, -126, -114, -31, 69, 15, -68, 57, 19, -120, -89, 36, -35, -4, -10, -100, -117, -88, -108, 30, -112, -32, -81, -67, -75, -111, -64, 97, -46, 119, -51, 101, 39, 114, 109, 122, 122, -104, -100, 46, 125, 115, 52, 39, 79, 84, 122, 120, -55, 29, -66, 50, 106, 23, 82, -9, -84, 31, -104, 66, 100, 4, -96, -36, 98, -76, -113, -115, -114, -38, -19, 39, -24, -82, 89, 49, -120, 59, 116, 94, 65, -118, 16, 70, 37, -11, 64, 66, -73, -45, -25, 122, -57, -122, -4, 0, 91, 115, 11, 124, 123, 83, -7, -37, 34, -95, -121, 116, 66, -29, 104, -122, 94, 1, 48, -109, 121, -44, -58, 20, -124, -68, 34, 107, -123, 112, 75, -70, 0, 123, -15, -93, 23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.0320254741322);
    msg.setSource(16947U);
    msg.setSourceEntity(151U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(187U);
    msg.source.assign("GYJPRDECFHKBMXFKJPRAAFQAUYERXLEQJQNWBHTSHVXMVRCXWPBZUPLVKGYOVYUUVYNOLCEISCUDHRINDGVUSFOTTOGMOLYXKBAZHMTYRICQIUJQLJJKDGVEHQXPQGHPAIUSAZUNBSZBZQVYFTHIAOTWWGIONSWBSLSFJEEEBZKFLCENPRSDLDTRORHGZJXMDNJACPQJPITDXDLNPYOMWMZBUMEOAWXKFYKFIMCKCGSWGNRAIC");
    const char tmp_msg_0[] = {-72, 29, -111, 43, 6, -95, 83, 35, -84, -38, 32, 31, 89, -94, -18, -34, -34, 103, 57, 88, -92, -108, 27, -1, 101, 82, 35, -126, -14, -52, 98, -120, -13, -116, -39, -79, -62, 123, -107, -61, -1, -72, 45, 97, 30, -54, -89, 94, -104, 112, -11, -123, -6, 117, 84, -104, 55, 46, 34, 62, -32, 68, 62, -91, -101, 40, -103, -86, -35, 36, 56, 7, 44, -118, -121, 102, 91, 119, 0, 68, 91, -87, 65, 101, 41, -25, 109, -57, -55, 18, -97, -113, -120, 74, 1, 22, 71, 125, -54, 93, 88, 36, -94, 64, -110, -121, -127, 6, -43, 71, -7, 32, -42, 110, 78, 97, 109, -36, -2, 58, -128, 0, -80, 79, 117, -88, 81, 0, 47, -7, -110, 84, -10, 108, 22, -54, -89, -77, -19, -8, -7, -86, -45, -79, -97, -40, 50, 54, -68, -17, -57, 69, -77, -81, -20, 100, -15, -51, 77, -57, 85, 114, -35, -34, -94, -56, 126, -97, -97, -13, -115, -38, -49, 71, -32, -47, 78, 52, -37, -90, 115, -26, -48, -18, 26, 107, 113, 101, 16, 43, 26, 111, 122, 45, 15, -113, 95, 52, 46, 78, -36, -106, 92, 101, 56, -53, -107, -70, -18, -60, -93, 79, 84, -29, -79, -128, 41, 50, -57, -19, 21, 30, 39, 53, 70, 90, -34, -79, 100, -72, -40, -36, 122, 9, -56, 72, 35, 57, -10, -122, 95, 17, -125, -18, -121, -127, 44, -35, 89, -87, -29, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.466416172898);
    msg.setSource(7104U);
    msg.setSourceEntity(240U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(87U);
    msg.source.assign("NOJFCDPCACNAPPFINQYBILRQRELOVJAN");
    const char tmp_msg_0[] = {-76, 95, -23, 125, 69, 88, 42, 86, 80, 4, 8, 14, -9, 105, 16, 6, 56, -57, 9, 119, -3, 23, -62, -48, 40, 106, 23, 104, 1, 58, 77, -58, -84, -74, 78, -33, -44, -65, -103, -4, -128, 41, 39, -61, 123, -120, 96, -18, -104, -61, -32, 67, -46, -113, 62, 71, 70, 72, 25, 46, -112, 71, 56, -82, 30, 37, -112, 97, 26, -47, -83, 109, 94, 14, -12, 91, 18, -117, 7, -24, 4, -7, 80, -62, -41, -7, 4, -48, -24, 53, 81, 27, 71, 39, -40, 36, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0304624791033);
    msg.setSource(3549U);
    msg.setSourceEntity(83U);
    msg.setDestination(27411U);
    msg.setDestinationEntity(99U);
    msg.seq = 4014984100U;
    msg.state = 202U;
    msg.error.assign("CUTERSFEPSCZYQWTOUHFIOLMJUPEELQLBXGGIVHZXBKXCRJJOQHCPSKHYGMFWXDJMATPNVBKLUMFZCUTRFSAWSDOKROGTKHMIEQDUZYRQOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.790469143023);
    msg.setSource(40223U);
    msg.setSourceEntity(112U);
    msg.setDestination(48834U);
    msg.setDestinationEntity(30U);
    msg.seq = 2738854240U;
    msg.state = 197U;
    msg.error.assign("RQWBYZAWBLRVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0351469901385);
    msg.setSource(19173U);
    msg.setSourceEntity(71U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(229U);
    msg.seq = 2675515781U;
    msg.state = 171U;
    msg.error.assign("WFGHOEMQRDHPJWLCMHNJHVZHWQSKKBONFDHBIAUBJQEXRKTSBFGYGIWBMIOMUJMCGUFHKFBEPEKAOUVKDFBGJZTJNUNXZCAWOIGKNNQRFTYOOQMZLFBNJGHQEODYJSBGETSLKQRZYVPJSMTPUWRMHVAYWLLVZEMXUXQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.613003723566);
    msg.setSource(61870U);
    msg.setSourceEntity(142U);
    msg.setDestination(21942U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("NFVJZGXTAQQKVEVZQVXJSHUZRLRDMWSPSAYITIORLFSPBDQRYXHYPTYNJCABDMAEHUYILHPPFYZIZCOZVTAVYJKJEQORTULNFURXXS");
    msg.text.assign("IDMEADYWDIBFFJUZPVKOMYHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.484271901966);
    msg.setSource(2181U);
    msg.setSourceEntity(3U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("NEWNUJOXQCVEKBVRABNKIEOKVIQMFQHYQISWPSABZHTOREYGFQHFHYPIXJEXVPFXGVCRZUJMSQKIENEVHBRAPIDYOMOFZDDMYUQGLKBHWJDJYDJZSRRMVSYTPNTCYASIG");
    msg.text.assign("VJYVHUHAFTHRMYSSXCPDBUQBWPOAZOGGXMYZNXUNJGSRRMHIAHUDKPOWKEKDRGPPNZLVSCIQCDFTLBNEAGBCMIFVQIUKPLQDDAEUXSXQPHVWWGXQBCHOECTRGHNNLUWDJALKTTZVAXJCQFYKVMFOUWXIWQJHZSXYTKIJVFOZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.348064805314);
    msg.setSource(39961U);
    msg.setSourceEntity(205U);
    msg.setDestination(60269U);
    msg.setDestinationEntity(55U);
    msg.origin.assign("GRQZDFELYAUOKDNGKTDEKUDYLMCFGBEZZGYRBPUHTKUYMFPMHTBYWKJQQGUWYWENQSUORSCRIUKXIDXDTQCXSLLJAVFOMZBPBRJDMUMGJSRVMIEJTIQFEWNNZWVIF");
    msg.text.assign("HDGZSDIZERAMHCSUPKLXYEODKUBRZGGNAFNRHNKQPFPIOPJIGWKLEFJQPMXPGJSITHCAYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.990318827231);
    msg.setSource(36965U);
    msg.setSourceEntity(181U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(18U);
    msg.origin.assign("XCKPDGNYGNUYBSYIZELFDXAVFIGXCIOLUXCPJGFAQTJBWPYSWGV");
    msg.htime = 0.850080972015;
    msg.lat = 0.107404519457;
    msg.lon = 0.581876125776;
    const char tmp_msg_0[] = {37, -102, -33, -128, 35, -16, -45, 83, -35, 20, 111, 107, -74, -108, -115, 40, 3, 54, 4, 47, -99, 89, 93, -11, -113, -62, -23, 84, -122, -48, 19, -81, 96, -6, 55, 76, 16, -110, 90, 109, -77, 19, -44, -14, 66, 77, -111, 68, 3, -71, -56, -84, -13, 0, -83, 6, -80, -88, -90, 25, 82, 8, -31, 73, -60, 36, -20, -102, 66, -125, 54, -4, 48, -89, 103, -49, 7, 81, -95, 60, 75, 18, 45, 125, 65, -68, -38, -28, 118, -17, -110, 24, 22, -113, 16, -125, -27, -14, -4, -66, 24, -4, 36, 44, 73, -3, 21, -102, 14, -52, -81, -104, -112, -94, -90, 82, 11, -36, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.687098112865);
    msg.setSource(40620U);
    msg.setSourceEntity(216U);
    msg.setDestination(49543U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("GHCQJQMNFGDXLPUHCXZNFHWRNOBOJDAYWCEHYTSRMEHTHKKQMVPHXONBQQSUJBOIVRIYACRWEUUSMVEJCZXMZFUILTVZDSWNRTILVBISFFJHNBWFSDNLUVSMGJUYPTXFIGYKQWLXSZBULTHIXLQPOKWEYJJK");
    msg.htime = 0.40780645419;
    msg.lat = 0.273572301309;
    msg.lon = 0.716818275148;
    const char tmp_msg_0[] = {-64, -10, -60, -101, 99, -119, 125, 126, -82, 33, 94, -69, 18, 4, 64, -89, 46, 80, -84, 10, -96, 20, 30, 81, -81, -58, 75, -30, 122, 105, 79, -10, -123, -28, 104, 109, 54, -109, 89, -10, 125, 16, 16, 94, 63, 120, 115, 37, -51, -110, -84, 73, -61, -56, 120, 47, -55, -120, 69, 12, -3, -104, 43, -93, 109, 96, 82, 91, 108, 102, -33, -111, -43, 74, 34, -127, -60, -127, -49, -89, -27, -100, -60, -73, 89, -27, -36, 42, 64, 0, -69, 121, 3, 100, 88, -28, -120, -14, -112, 5, 119, 122, 1, 7, -9, -71, -9, -27, 115, -80, -96, 110, 11, -25, -112, -97, -113, -114, -9, -9, -102, 67, 68, 71, -73, 28, -29, -71, 34, -33, -14, 92, 23, -5, 84, 47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0261733805566);
    msg.setSource(60957U);
    msg.setSourceEntity(172U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("NEBLSDIVEDTQVGZWW");
    msg.htime = 0.736900880557;
    msg.lat = 0.0307760026723;
    msg.lon = 0.930236528425;
    const char tmp_msg_0[] = {20, 99, 6, 10, -63, -122, 97, -117, -51, 19, -52, 102, -81, 94, -113, -38, 44, 60, 27, -3, -49, 66, -38, 36, 8, -15, -19, -96, -76, -1, -119, -57, -27, -70, -73, 57, -52, 113, -57, 25, -59, 105, -48, -64, 78, 17, -59, 58, 14, 77, 4, 125, 79, -29, -120, 116, -26, -90, -56, -125, -39, -119, 73, 3, -87, 17, 117, -61, -71, -108, 35, -23, -2, -60, 122, 82, 10, 67, -71, -128, -32, 108, -89, -99, 43, -5, -49, -124, -112, 75, -27, 107, -107, 78, -122, 61, 120, 57, 90, -66, -97, -124, 41, 101, -19, -22, -114, -100, -13, 64, -49, -70, -123, 20, 116, 23, 108, -127, -38, 47, 61, -116, -89, 31, -66, 17, 81, -123, -116, -112, 95, 102, -88, -83, 75, 37, -99, -35, 121, -53, -50, -125, 77, 103, -34, 104, 8, 31, 82, -54, -27, 84, 31, -105, 37, -26, -111, 98, 83, 94, -88, -28, -95, 126, -41, 51, 1, 80, 110, 123, -2, 78, 54, -95, -52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.481290865424);
    msg.setSource(64247U);
    msg.setSourceEntity(171U);
    msg.setDestination(30558U);
    msg.setDestinationEntity(145U);
    msg.req_id = 7747U;
    msg.ttl = 62034U;
    msg.destination.assign("LDTOQJHBMFNIOGPZZIMCQSXEURSXIKOSPYYACCLWFHRRKUWJJDBNMYEQGDGANGWVLADTPYQPIPXTZHFDNJLVTUEKWNCDUEPPOXNNBTVAQTLRSQEHPKFUTINVTPQXSUNEJLTWHZUEFXCZBFCAUHAERSSGWQWJKKCCVGRWHUSMLROTRFHHFGOVMMLVAVYNBCODBIBARKWBLBUGYDEIMXWJVQVOFKZJZHEJKRMISZMQAGLAYYOJGMBCFY");
    const char tmp_msg_0[] = {73, -84, 73, -117, 75, -127, 22, -109, 18, 16, 77, -67, 74, 31, 73, -127, -16, -123, 47, 111, 34, 104, -13, 71, -125, -101, -3, 84, 54, 22, 59, -39, 6, 109, 121, -62, 75, -23, -88, 60, -51, -47, -53, 33, -11, -101, -118, -90, -76, 63, -95, 91, 104, -71, 122, -118, 9, -42, -3, -115, -65, 76, -74, -68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.862959390876);
    msg.setSource(59318U);
    msg.setSourceEntity(251U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(1U);
    msg.req_id = 39751U;
    msg.ttl = 38841U;
    msg.destination.assign("VMJNDIEEMHKLOGPPCTWQZUGMQHJFCQKOZMHXHQKGNZTZGMUAYSGDDCQGDFENWFYTZAVMTVXKFCHUYZLXFSZIIWJCLHQORAYTELPKGMAUPLXYBBJHIGJTTXZJVUNWAUSVJKPRKROIRKDSEDYQYG");
    const char tmp_msg_0[] = {18, 18, -52, 112, -106, 92, -114, 83, 105, -80, 16, 99, 40, -14, 55, -78, 55, 89, 22, -84, -20, 100, -32, -101, 46, -35, 92, 72, -28, 25, -122, -33, 1, -101, -80, 115, -104, 56, 126, 5, -47, -29, 56, -39, -23, 113, -63, -30, 87, -84, -36, -78, 9, -103, -74, 37, 47, -121, 78, 112, -73, -15, -96, 43, 52, 80, -103, 13, -109, -105, -70, -20, 10, 111, 104, -124, 49, -54, -128, -110, 88, 89, -56, -101, 126, -51, -1, 123, 91, -51, -31, 73, 24, 94, -25, -90, 119, 29, -101, 122, -71, 95, 125, 8, -26, 111, 114, 57, 28, -80, -36, 92, -104, 125, -118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.619671370095);
    msg.setSource(8627U);
    msg.setSourceEntity(193U);
    msg.setDestination(27480U);
    msg.setDestinationEntity(129U);
    msg.req_id = 14601U;
    msg.ttl = 48139U;
    msg.destination.assign("QUZWXUTSNKQQIBP");
    const char tmp_msg_0[] = {4, 121, 109, -56, 120, 41, -93, -122, -25, -65, 32, -35, 14, 38, -113, 115, 124, 7, -94, -115, 112, 10, -58, 123, 83, -99, -122, -84, 103, -115, -70, 10, 14, 120, -66, -12};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.282829847374);
    msg.setSource(9248U);
    msg.setSourceEntity(249U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(23U);
    msg.req_id = 7121U;
    msg.status = 74U;
    msg.text.assign("WBSNNCLPHUMHLRIDYZGAOHIXUZOXEXBQYUHRTVRXEDSYIGDKXUCJBADXQLWTDUYZJYKMHEBWSQTMLPDGKEDWSEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.363328387383);
    msg.setSource(8760U);
    msg.setSourceEntity(12U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(246U);
    msg.req_id = 44308U;
    msg.status = 98U;
    msg.text.assign("FGEIJTRZEBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.357529380047);
    msg.setSource(17343U);
    msg.setSourceEntity(13U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(136U);
    msg.req_id = 19724U;
    msg.status = 225U;
    msg.text.assign("DKPZBFMMSLCPHGCFKHCVHEUMKOGXGRMIWVVXUTIQNHPGQTZFMTJENNFEYTABOBNDDRJICSSQTZXZISULOJRWWLGOULDKAJSLNCLVLMYKXXPDYJYURKPIUYNIFFLEHVDVZPHYCSVRJDKTIMUFMRFRWPENZBEINYSTCGPWUCAUSLFAUQCELPEDWJQGEOBJVIVMAOOWAYZOFOHAZCEGWHXWZRHBOARDJSQGNXQZDQGSWKXHBPNTKBMRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.194925938713);
    msg.setSource(38914U);
    msg.setSourceEntity(244U);
    msg.setDestination(277U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("LHGJOHYDQAURUAFCNOOUCLTRKKJZMYFYXIIUNRDZWXXNEACZVHKTCCVOWIAPVAZKPQPPSPMHZGPSSNDUSEVWCNTEFKUAFROEDNYO");
    msg.links = 1147465268U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.101554547073);
    msg.setSource(31801U);
    msg.setSourceEntity(2U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(193U);
    msg.group_name.assign("RGLZCKVEDLCECSQINZKXLHZNEBWMBOHUUDNNHQGNFFLAOPTPVRLQESMDDOBSPUHWMXCUPAAKHWEKPEYLVKQWJWQRPXQHDXUXACJMJGTKRARPPLRMLIDFCJUXTWZGKZIOOYIDTTHRWOIHNQBGGDXSDYMBVFVZWJYFLJVOACIUIYLYVCZGHJFGEVOXAURAYOHQFQVRAUBPEGMSSJJFMTD");
    msg.links = 1919000718U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.263768064055);
    msg.setSource(28873U);
    msg.setSourceEntity(252U);
    msg.setDestination(32877U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("NHCEBPPGXUSMUTSYQCDHELZQIJESOTSKOFGNUBRZYXNRACPNDORNNEHZDKRVFGHVVRWQCVJODTXWEC");
    msg.links = 2549574156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.888733863016);
    msg.setSource(25451U);
    msg.setSourceEntity(210U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(143U);
    msg.groupname.assign("HGMTZVQEJLGFNENQSPCFRVLPGAHKCUPPVPIUAGNWXSDWTOSLZIJVNIWYTZCHBEFWMRZFIAOUPKQFTBXCCKABHGVQRJVTWWRGWUFBHUIITXNSBJFNXAMFVZNDMRGUYODOCTDRLQHTQNSVMZUZGRLPJESYOODKYJABQCXTEADKFVCDXGROHKWSYPMUHYHDOMUSYAUOFXXMNIMKIZJVYGTEWJBKHRNELIZ");
    msg.action = 170U;
    msg.grouplist.assign("WFHYLBJWOLETRVXOTWHJKUIFEJBKXMPOIKQSQUMMWIEDSXQIIKDDSRHULHTGELIFVYWCXVLPCSUZGMCRGNJSIGMFNYFZLCBPEZBXOXRAXMYEPSSNAIZSVYBXWYRUQDFWZVDOTAPVKHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.565740571445);
    msg.setSource(22296U);
    msg.setSourceEntity(35U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(247U);
    msg.groupname.assign("CORNZZDETEXOGKORUMOIAIARTSAFKAIRJHGCALJMRCSWXPQTLHPGFDYHGWKDEDRMFSZZRJOPTYBPOSRLDLBUOMFNJBLYSNZZXJLIGBZPNWWRFKKWVMIQAMPNQANYDXNYVY");
    msg.action = 53U;
    msg.grouplist.assign("OMULNAHUPSYHRAIJPENZORSIYNCEYOAOPWMVFVNCGDBAYACEVICHBXQZEZKHXHGDVDXFPNPMVAXIDAIGCLKLOUDFWCJBUWKFQQEOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.27046183325);
    msg.setSource(40159U);
    msg.setSourceEntity(118U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(221U);
    msg.groupname.assign("WJDNSTFETDRDZQFSCVIYPTKDHEQGOYYUPIKAYXCOPMRLZSXRLRGGCMAOUQQSEUREZNHKWPRJFWHXMIBIAVEMWLQYXBAJTDJ");
    msg.action = 41U;
    msg.grouplist.assign("GQWZVATJVADTURDCYXBOJMQJIDBBVHKCBWAPUDPTONKHQGKSBQGAAISUTJRXIPQSRRFSXKEWBHICSXANKWGNUIKPFILOEMPLHZHEVLPZYVHCHXXRYXDZXPHTSEEENPLTFOCDYTYIJHVMHFIEWSYONTNYQXAJRXRLOKWOOYNNQZSJTDWFMUGZRBUEGVSCLLJEFCMATBVBMPLGDMKANOKZZCFUMWUFLUJYKNUDBMJZGRFGDOMWASCEYCVVQIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.0747399384357);
    msg.setSource(48478U);
    msg.setSourceEntity(142U);
    msg.setDestination(28639U);
    msg.setDestinationEntity(22U);
    msg.value = 0.68307249083;
    msg.sys_src = 47653U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.588605314353);
    msg.setSource(2835U);
    msg.setSourceEntity(37U);
    msg.setDestination(28562U);
    msg.setDestinationEntity(212U);
    msg.value = 0.957124613718;
    msg.sys_src = 49606U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.121112216824);
    msg.setSource(64658U);
    msg.setSourceEntity(12U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(37U);
    msg.value = 0.796249811288;
    msg.sys_src = 37207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.979616543732);
    msg.setSource(47160U);
    msg.setSourceEntity(164U);
    msg.setDestination(31456U);
    msg.setDestinationEntity(105U);
    msg.value = 0.702094068146;
    msg.units = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.446999357031);
    msg.setSource(46273U);
    msg.setSourceEntity(15U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(44U);
    msg.value = 0.310966096196;
    msg.units = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.692473870789);
    msg.setSource(34562U);
    msg.setSourceEntity(20U);
    msg.setDestination(46839U);
    msg.setDestinationEntity(110U);
    msg.value = 0.956432063779;
    msg.units = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.622778709096);
    msg.setSource(31589U);
    msg.setSourceEntity(43U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.0247379327047;
    msg.base_lon = 0.585863832532;
    msg.base_time = 0.105013165827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.709391685259);
    msg.setSource(62858U);
    msg.setSourceEntity(107U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.824085414677;
    msg.base_lon = 0.917118793074;
    msg.base_time = 0.308959767896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.467018095039);
    msg.setSource(62257U);
    msg.setSourceEntity(70U);
    msg.setDestination(4443U);
    msg.setDestinationEntity(28U);
    msg.base_lat = 0.040417598577;
    msg.base_lon = 0.36007211187;
    msg.base_time = 0.603901492982;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 26105U;
    tmp_msg_0.priority = -31;
    tmp_msg_0.x = 11186;
    tmp_msg_0.y = 27578;
    tmp_msg_0.z = 23790;
    tmp_msg_0.t = -16530;
    IMC::FormCtrlParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 94U;
    tmp_tmp_msg_0_0.longain = 0.707653921727;
    tmp_tmp_msg_0_0.latgain = 0.494394742115;
    tmp_tmp_msg_0_0.bondthick = 2202362281U;
    tmp_tmp_msg_0_0.leadgain = 0.133225986589;
    tmp_tmp_msg_0_0.deconflgain = 0.982747595502;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.831704786134);
    msg.setSource(13738U);
    msg.setSourceEntity(156U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(160U);
    msg.base_lat = 0.824812083449;
    msg.base_lon = 0.985721565024;
    msg.base_time = 0.924853786871;
    const char tmp_msg_0[] = {17, -59, 18, 123, -103, 109, -95, 80, -50, 9, -65, 75, 47, -23, -61, -27, 120, -47, -1, -55, -40, 52, -30, 81, -11, 59, -4, 83, 37, 115, 74, 97, 14, 48, -105, -36, 119, 76, -122, 93, 8, 111, 48, -113, -99, 75, 96, -48, 46, -18, -49, 109, 109, -19, 107, 119, -46, 99, 21, -24, -97, -28, -16, 62, 106, -72, -93, -91, 69, -15, -4, 3, 99, 43, -86, 109, -7, -106, -46, 75, 96, 43, -120, -65, -99, 86, -55, -69, 48, -49, 48, -80, 13, -52, 104, -90, 69, 61, -118, 91, -96, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.831398303306);
    msg.setSource(13124U);
    msg.setSourceEntity(91U);
    msg.setDestination(48818U);
    msg.setDestinationEntity(64U);
    msg.base_lat = 0.369052132017;
    msg.base_lon = 0.796912863833;
    msg.base_time = 0.171265765901;
    const char tmp_msg_0[] = {-74, 122, -18, 124, -64, -52, -31, -46, 37, 16, 83, -76, 24, -113, 67, -24, 83, 104, -104, 113, 58, 56, -13, -21, -83, 48, -10, -9, 42, -45, 52, -44, 124, -41, 124, 111, -70, 21, -106, 15, -8, 94, 30, -119, -86, 118, -12, -5, 102, -9, 46, 7, -54, -47, 33, 11, -17, 31, -110, 105, -1, -59, -72, -6, -93, -40, 26, -53, -53, -58, -20, -39, 11, -56, 100, -21, 99, 20, -66, 42, 111, 16, -84, -96, -30, -83, 31, -19, 100, -92, 1, -83, -17, -90, 94, 10, 74, -85, 1, -5, -15, 74, -3, -11, 35, 35, -81, -12, 11, 101, 62, 58, -125, -86, -80, 119, -99, 27, 40, -70, 21, -21, -125, 93, -51, -102, 67, -66, -21, 123, -80, 22, -68, -74, -50, 111, 53, -78, -17, 119, -44, 70, 27, -99, -56, 102, -68, -49, -102, -29, 94, -123, -97, -20, 93, 12, 34, -28, -35, 60, 28, -34, 16, 4, -127, 53, -93, -69, 78, 84, -13, -51, 19, 80, -119, -122, -5, -86, 54, -37, -40, -69, -93, -55, -66, -38, 16, 5, 67, 49, -110, -32, -94, -119, 52, 88, -17, -66, -23, 66, 89, -56, -59, -43, -79, 14, 82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.101285771572);
    msg.setSource(425U);
    msg.setSourceEntity(42U);
    msg.setDestination(25043U);
    msg.setDestinationEntity(39U);
    msg.base_lat = 0.282875149785;
    msg.base_lon = 0.655037929028;
    msg.base_time = 0.956725096221;
    const char tmp_msg_0[] = {-45, -72, -20, -21, 82, 87, 97, -103, 118, -114, 68, 61, -37, -60, 55, 2, 40, -108, 82, -126, 87, 18, 106, 104, -50, -125, 9, 26, 16, 86, -108, -85, -110, -128, -21, 77, 112, -92, -12, 2, -19, 45, -60, -32, -23, 13, -79, -62, 42, -82, 42, -109, -96, 64, -66, 14, -18, -107, -20, -84, -48, 50, 90, 24, -44, -3, 100, 7, -107, -88, -81, -1, -29, 0, -97, -100, 114, -74, -122, 108, -119, 33, 59, 47, -95, -33, -32, -75, 94, -73, 62, -3, -39, -31, -29, 111, -98, -40, -45, 33, 119, 99, 57, -69, -104, 75, 101, -48, -66, 10, 74, 3, -121, 74, 108, 58, 27, -56, 60, -112, -54, 42, -6, -121, 10, -68, -105, 71, -8, 49, -13, -4, 21, -19, -22, 83, 35, -29, -60, 9, -74, -25, 57, -73, -70, 92, 115, 53, 76, -70, -87, 108, 39, 102, -4, -105, 118, -82, -13, 119, -31, -79, -37, 93, -48, -114, -127, 108, 116, 15, -100, 107, 117, 75, 116, 3, 17, -1, 123, -118, 15, -4, 30, -18, 80, 109, 46, 126, -58, 83, -103, 36, -51, -117, -125, 19, 66, -37, -51, 46, -97, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.917485208654);
    msg.setSource(17903U);
    msg.setSourceEntity(94U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(51U);
    msg.sys_id = 749U;
    msg.priority = -74;
    msg.x = 8201;
    msg.y = -30324;
    msg.z = -22733;
    msg.t = -5206;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.331969384357;
    tmp_tmp_msg_0_0.lon = 0.401034779503;
    tmp_tmp_msg_0_0.height = 0.410155915695;
    tmp_tmp_msg_0_0.x = 0.522932147769;
    tmp_tmp_msg_0_0.y = 0.0292379205703;
    tmp_tmp_msg_0_0.z = 0.705556220087;
    tmp_tmp_msg_0_0.phi = 0.444343590292;
    tmp_tmp_msg_0_0.theta = 0.0926798250809;
    tmp_tmp_msg_0_0.psi = 0.655634027797;
    tmp_tmp_msg_0_0.u = 0.746182100382;
    tmp_tmp_msg_0_0.v = 0.357156377421;
    tmp_tmp_msg_0_0.w = 0.242900193533;
    tmp_tmp_msg_0_0.vx = 0.219502782038;
    tmp_tmp_msg_0_0.vy = 0.396687598902;
    tmp_tmp_msg_0_0.vz = 0.98729870809;
    tmp_tmp_msg_0_0.p = 0.981167768942;
    tmp_tmp_msg_0_0.q = 0.406815201671;
    tmp_tmp_msg_0_0.r = 0.973228967819;
    tmp_tmp_msg_0_0.depth = 0.17971534395;
    tmp_tmp_msg_0_0.alt = 0.16379248542;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 135U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.517709174802);
    msg.setSource(45612U);
    msg.setSourceEntity(152U);
    msg.setDestination(5753U);
    msg.setDestinationEntity(139U);
    msg.sys_id = 45833U;
    msg.priority = -120;
    msg.x = -10681;
    msg.y = -25512;
    msg.z = 19062;
    msg.t = 1790;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 63320U;
    tmp_msg_0.type = 108U;
    tmp_msg_0.max_size = 14730U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.923464355835;
    tmp_tmp_msg_0_0.base_lon = 0.698322130865;
    tmp_tmp_msg_0_0.base_time = 0.780748477809;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 41976U;
    tmp_tmp_tmp_msg_0_0_0.priority = -39;
    tmp_tmp_tmp_msg_0_0_0.x = -14136;
    tmp_tmp_tmp_msg_0_0_0.y = 10524;
    tmp_tmp_tmp_msg_0_0_0.z = -18100;
    tmp_tmp_tmp_msg_0_0_0.t = 24511;
    IMC::TeleoperationDone tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.852949112104);
    msg.setSource(644U);
    msg.setSourceEntity(24U);
    msg.setDestination(31079U);
    msg.setDestinationEntity(126U);
    msg.sys_id = 39406U;
    msg.priority = 80;
    msg.x = 12121;
    msg.y = 23824;
    msg.z = -3890;
    msg.t = -7666;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("LNUHPUNWSHUTIORACRKPDCGXQTGFZPRRQOAWIALAFFGWYUJPARVPUYJEHCAFKIDDIDILKBKYMXEMPMEWYPZNEQPUTIQRMXDKTAPGZNQWECS");
    tmp_msg_0.x = 0.376647040223;
    tmp_msg_0.y = 0.943026717013;
    tmp_msg_0.z = 0.0288503926221;
    tmp_msg_0.n = 0.626493881767;
    tmp_msg_0.e = 0.301753224603;
    tmp_msg_0.d = 0.0367298759681;
    tmp_msg_0.phi = 0.719584829404;
    tmp_msg_0.theta = 0.717327320078;
    tmp_msg_0.psi = 0.1547975379;
    tmp_msg_0.accuracy = 0.70776181183;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.954017018928);
    msg.setSource(23691U);
    msg.setSourceEntity(143U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(244U);
    msg.req_id = 22594U;
    msg.type = 40U;
    msg.max_size = 46570U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.00940775207834;
    tmp_msg_0.base_lon = 0.0774411961191;
    tmp_msg_0.base_time = 0.428851466233;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 39031U;
    tmp_tmp_msg_0_0.priority = -119;
    tmp_tmp_msg_0_0.x = 26286;
    tmp_tmp_msg_0_0.y = -23788;
    tmp_tmp_msg_0_0.z = 14990;
    tmp_tmp_msg_0_0.t = 21412;
    IMC::PlanDB tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 116U;
    tmp_tmp_tmp_msg_0_0_0.op = 190U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 51261U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("EETNHUCKRQWHDQKQJMXZTQJGKMEYINDVHNOFLFRZGGLKEGVYDKOGYTB");
    IMC::GpsNavData tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.itow = 162074653U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.22955123251;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.696017919929;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.height_ell = 0.0863775779843;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.height_sea = 0.501905848689;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.hacc = 0.536451051414;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vacc = 0.268795629074;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vel_n = 0.911731091267;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vel_e = 0.97947887724;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vel_d = 0.358635349857;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.95211637344;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.gspeed = 0.93811567486;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.heading = 0.635039994253;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sacc = 0.246095204347;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cacc = 0.67467836511;
    tmp_tmp_tmp_msg_0_0_0.arg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.info.assign("NDYCLGAZVGJVU");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.453055604012);
    msg.setSource(48675U);
    msg.setSourceEntity(241U);
    msg.setDestination(58168U);
    msg.setDestinationEntity(36U);
    msg.req_id = 11277U;
    msg.type = 231U;
    msg.max_size = 48280U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.275758176273;
    tmp_msg_0.base_lon = 0.763079076724;
    tmp_msg_0.base_time = 0.505202047199;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.715047583482);
    msg.setSource(9453U);
    msg.setSourceEntity(5U);
    msg.setDestination(50446U);
    msg.setDestinationEntity(168U);
    msg.req_id = 28863U;
    msg.type = 112U;
    msg.max_size = 44962U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.703676311815;
    tmp_msg_0.base_lon = 0.116247845769;
    tmp_msg_0.base_time = 0.550748343509;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 4390U;
    tmp_tmp_msg_0_0.priority = -73;
    tmp_tmp_msg_0_0.x = 30868;
    tmp_tmp_msg_0_0.y = 23776;
    tmp_tmp_msg_0_0.z = -21856;
    tmp_tmp_msg_0_0.t = 29811;
    IMC::FormationEval tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.err_mean = 0.269755673482;
    tmp_tmp_tmp_msg_0_0_0.dist_min_abs = 0.301845605588;
    tmp_tmp_tmp_msg_0_0_0.dist_min_mean = 0.855867302981;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.356483247406);
    msg.setSource(24112U);
    msg.setSourceEntity(143U);
    msg.setDestination(41534U);
    msg.setDestinationEntity(59U);
    msg.original_source = 35218U;
    msg.destination = 9194U;
    msg.timeout = 0.69365226166;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MTSOVIITDPEKCFULFOIODYMGAUXSVBENZKQNAGZOPSNATWTPXENXFAHQIIEAFJUIJRKFASQOWZDYWHHYILIUQTCRUIELNAHXKDDJGDLHZVPVMRHCXHZBYOGVURSGTJORFWKWJSRKOGHLUULSBZDQCVQVPEWTQERLGVDJZBMTBSZJLWPXJNLBGHEYCMJGAABW");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.617829484924);
    msg.setSource(253U);
    msg.setSourceEntity(48U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(42U);
    msg.original_source = 36142U;
    msg.destination = 7234U;
    msg.timeout = 0.468715100373;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.880903527486;
    tmp_msg_0.lon = 0.136671869278;
    tmp_msg_0.height = 0.788641860353;
    tmp_msg_0.x = 0.946574261035;
    tmp_msg_0.y = 0.813695953266;
    tmp_msg_0.z = 0.6186097672;
    tmp_msg_0.phi = 0.824489023063;
    tmp_msg_0.theta = 0.53229170748;
    tmp_msg_0.psi = 0.93347544889;
    tmp_msg_0.u = 0.939841478842;
    tmp_msg_0.v = 0.521602758255;
    tmp_msg_0.w = 0.249806937782;
    tmp_msg_0.p = 0.789692475736;
    tmp_msg_0.q = 0.389922533325;
    tmp_msg_0.r = 0.243546714044;
    tmp_msg_0.svx = 0.363199114032;
    tmp_msg_0.svy = 0.85133702035;
    tmp_msg_0.svz = 0.721680338376;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0650733482907);
    msg.setSource(29834U);
    msg.setSourceEntity(200U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(168U);
    msg.original_source = 63464U;
    msg.destination = 25408U;
    msg.timeout = 0.0775905443803;
    IMC::Aborted tmp_msg_0;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.625417292753);
    msg.setSource(43774U);
    msg.setSourceEntity(204U);
    msg.setDestination(55191U);
    msg.setDestinationEntity(195U);
    msg.id = 147U;
    msg.range = 0.0724630258563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.48044869187);
    msg.setSource(57674U);
    msg.setSourceEntity(101U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(157U);
    msg.id = 209U;
    msg.range = 0.258582981989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.23782996658);
    msg.setSource(51077U);
    msg.setSourceEntity(205U);
    msg.setDestination(14894U);
    msg.setDestinationEntity(164U);
    msg.id = 57U;
    msg.range = 0.796946248501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.506420928363);
    msg.setSource(1635U);
    msg.setSourceEntity(231U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(82U);
    msg.beacon.assign("ROUQWFFAZZYGPYNBYUCXKIOUHBLGOIVEZBDVXFTDKNQSEGHXLSQTJJDBFROJTWLQWEHPMDTVWZIZZPUSQYXMWNQYFCTRSQLDDNWTMNKDAXXAVDCGUIRTTEHKFMHSBGJXZIFGGLVJP");
    msg.lat = 0.0862050281046;
    msg.lon = 0.452258642983;
    msg.depth = 0.480862813694;
    msg.query_channel = 174U;
    msg.reply_channel = 56U;
    msg.transponder_delay = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.10158153477);
    msg.setSource(13725U);
    msg.setSourceEntity(95U);
    msg.setDestination(50061U);
    msg.setDestinationEntity(145U);
    msg.beacon.assign("QIJQPNZMEVHBYOZAXYOSHIBFIXTFJTJZWSWOAQMGWJLUTWJTZRLPVBVXPFYEQOHHBOFNPGSEXMXEIHWGILZHKCQDCFXTYAFNDPWNCBQKYUWUORPMMOMTNRLKAOGJVMUNNCDVZQEELPDAJPCXRPYENQUGWSHBSWFUVIIRANMXDKIZDZAVXKTCYTUJCB");
    msg.lat = 0.307219856125;
    msg.lon = 0.611518241925;
    msg.depth = 0.557236460469;
    msg.query_channel = 23U;
    msg.reply_channel = 62U;
    msg.transponder_delay = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.0413624451597);
    msg.setSource(22873U);
    msg.setSourceEntity(106U);
    msg.setDestination(16853U);
    msg.setDestinationEntity(245U);
    msg.beacon.assign("HEAZOVFBJAIPEJRAZPAUDGBQDZGKEWRLNXAQCYFOWYKKGLPTJBYUKYBLERXIEZGQSWS");
    msg.lat = 0.234801688046;
    msg.lon = 0.68549164128;
    msg.depth = 0.0209118720481;
    msg.query_channel = 84U;
    msg.reply_channel = 170U;
    msg.transponder_delay = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.674338647303);
    msg.setSource(19683U);
    msg.setSourceEntity(43U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(6U);
    msg.op = 133U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DQGTIMOWYBXEDUSIBUOHZYIPTGREAOEIKSFEKANAXIJACHDWJFYHHAJOZUTWMGSVCPXMGLRXNLCIDUYVCKLJTZZMLUURMCKQHVDDQKITKHPQQWZLRRYGBESGDGHULBUINZMSHFPQPBJNWVN");
    tmp_msg_0.lat = 0.915689453854;
    tmp_msg_0.lon = 0.189151323698;
    tmp_msg_0.depth = 0.970468390227;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 59U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.48205080091);
    msg.setSource(48247U);
    msg.setSourceEntity(43U);
    msg.setDestination(25709U);
    msg.setDestinationEntity(50U);
    msg.op = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.157772320495);
    msg.setSource(19411U);
    msg.setSourceEntity(245U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(189U);
    msg.op = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.105375062155);
    msg.setSource(43921U);
    msg.setSourceEntity(6U);
    msg.setDestination(37276U);
    msg.setDestinationEntity(223U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.545467890981;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.940469856967);
    msg.setSource(1333U);
    msg.setSourceEntity(101U);
    msg.setDestination(59728U);
    msg.setDestinationEntity(158U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 11736U;
    tmp_msg_0.lat = 0.739465638555;
    tmp_msg_0.lon = 0.308875323073;
    tmp_msg_0.z = 0.158812115125;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.duration = 3688U;
    tmp_msg_0.speed = 0.929228541721;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.type = 97U;
    tmp_msg_0.radius = 0.79971044824;
    tmp_msg_0.length = 0.581295085417;
    tmp_msg_0.bearing = 0.524138412256;
    tmp_msg_0.direction = 233U;
    tmp_msg_0.custom.assign("VIIGANMRQCEIOYZAJWRHGLMXIMCILNLZQYZPQPOZVWMVUASQJMRHWEVUGHNLAOUDXXFFGNQSBLFYLWNTDYCKBSZSDPUQXBMRJRMPLHOVFHNCUXCGHSYWKBTXKOANJJWTZXKRVUSLMIWTBRIIQHFRANOZPDJMGXEGWNMWYUEVEAUCTHBZKCLFPFGW");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.445995888927);
    msg.setSource(35991U);
    msg.setSourceEntity(7U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(39U);
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("DAALLDWMSWTPIZRPSCSFKQKNESFRDHLWZROTJDPFTIYNNZQGNQKCCRHLHJRNGTPUCJTXSUIGQTVOPVSCTGZVUOQCJMUURRPANBHKEECBBVKYHBVOEIJBAAWPOHILQWFFFIJABNNMZZEXTGGLOSIAZXWDQVDKWTAGBDGMXKOXHELWKWRHLUSVMBZUEMBKDLVJQYSMCCUYUDOMXXLYYZAEHXBVRPYFRGFJYHNYDJTXFFSVMPOOXKIW");
    const char tmp_tmp_msg_0_0[] = {50, 25, -27, -123, -49, 10, -50, 0, 39, 48, -44, -12, -57, 9, -10, 91, 102, -117, -68, 14, 115, -39, 51, -30, -47, -9, -61, 39, -121, -43, -50, 51, 79, 22, -54, 34, 1, -78, 89, -112, -125, 79, 71, -37, 105, -103, -15, -66, -36, -9, -14, -34, 30, -53, 122, -50, -36, -48, 104, 26, 8, 27, -16, 67, 51, 96, 21, -100, -71, 61, -127, -53, -113, 107, -20, 22, 68, -79, 20, 8, -84, 46, 87, 55, 78, -118, 56, 3, 16, -7, -25, -107, -113, -98, -64, -124, -125, 80, -53, 123, -21, -33, 92, -63, -48, -56, -25, 72, -22, -82, 60, -70, 57, -19, -45, 39, 115, 120, 42, 112, 44, 97, -47, 63, 29, -82, -119, -114, -89, -84, 113, -78, -72, 85, 51, -105, 86, -118, -69, -109, -68, 109, 60, -37, -111, -86, -88};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.236043942612);
    msg.setSource(35085U);
    msg.setSourceEntity(108U);
    msg.setDestination(61944U);
    msg.setDestinationEntity(103U);
    msg.op = 214U;
    msg.system.assign("EHOUTTAXKZRBCIOPFHCGQNXSNHGPRFEKVPITHHVXLCROJAXDVLGJCTTZRRLEXFGTRFPWKUUNZENLDQRLVIWSANEHAZBOIAVRZINZFDCQODEVDBUZTSBOZFJXYGSIAAQJYLXNKXMEZDMYPKSGSYAWMY");
    msg.range = 0.597401186327;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 65207U;
    tmp_msg_0.status = 111U;
    tmp_msg_0.text.assign("QLPFSLGITWWXZCQSOQBFITXAODDCMKKNPLPJBQHJANWDKKJUNWPPJWESNUYTQIVAKTPDTRMROBIUBBEUNHVNIOVGIGQZWORZWTHLRWHUMXAJMZCGJADEXISSOPULZEALSNEPFMVLSQJSDFVNNGPCLAHYBFHHLKHYCCVXFZEDLTYWBUDSR");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.345536821178);
    msg.setSource(26335U);
    msg.setSourceEntity(14U);
    msg.setDestination(1510U);
    msg.setDestinationEntity(76U);
    msg.op = 89U;
    msg.system.assign("JVPDPFOAQQIWWWGSWISNXRFVXYYJYKOVBRXNYMHPREZLBMVUNNBSLLPFLSDTGMMZLRFQQNARSHSJTNUBGCNZKWWBTUPOLFBJUDKJSQEE");
    msg.range = 0.233467226207;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 19U;
    tmp_msg_0.lat = 0.0901614054543;
    tmp_msg_0.lon = 0.753972819545;
    tmp_msg_0.x = 0.661548791231;
    tmp_msg_0.y = 0.429707491782;
    tmp_msg_0.z = 0.249065054967;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.539831592035);
    msg.setSource(41577U);
    msg.setSourceEntity(233U);
    msg.setDestination(40312U);
    msg.setDestinationEntity(66U);
    msg.op = 230U;
    msg.system.assign("FLYFPDFLJWPRJJHHSYBNHDMZXZKAQECCRNQERURGRYDPPKOEAYEWIPMBNIUSTXPBJPANVSVEIAFIEPPNSCVMJTSFZHTFNDTLXFEMQEBYIWOALDOSKCMWMBISTIZQOGQRCQVYXFAANNWAUUTOCASKIYBDJOKTYTXOWFXGELLXXMKHNOWUTGVRLHEHHUQOWZYGVJMUYVFIGDSCCUCZWDLZDLROCGHTMGKXBZNDK");
    msg.range = 0.741546900795;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("UGQJXEWCVZVIHXPYKXOWNFMNBCQCISRSHEKTTCQRADJURSBBQPGYZUOPIZKKMJRIASFHIDFEBPZYQQPYAMFZFBNEGKHSPHGOJWADULISJRAXDEBTOXOCYYGULVTTY");
    tmp_msg_0.reference_frame = 63U;
    tmp_msg_0.custom.assign("QBUIYDNCTYXNMVNBZFWDOJYBQMTFSUIZXNGWVODUATMGXUSGTGXDREPFKLCLBNMRZPJTJOLOSAVKPMTSHHHFIACDBKIJWIHJYWWSRVZZYSNUYGOKJCVODWBBCHMLVUOEJHXRXIKMWPQXPBETNUKFSPXF");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.668000861163);
    msg.setSource(48692U);
    msg.setSourceEntity(91U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.372506314002);
    msg.setSource(42620U);
    msg.setSourceEntity(254U);
    msg.setDestination(26869U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.671023861573);
    msg.setSource(39126U);
    msg.setSourceEntity(18U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.710787727389);
    msg.setSource(58199U);
    msg.setSourceEntity(119U);
    msg.setDestination(56923U);
    msg.setDestinationEntity(80U);
    msg.list.assign("EYFZHBSMFRLWNTZDEIFUAAULEEQLBTNXPVSHZQJVDTUHOJIWFCDRDNDVZCJPHKVFZRPSMLSPCJWUTTYACRXFEKNVRQBITYONYQSHJKLHQPSMJHGODDBEOAAHKBMDXRSLVPELQNMLIGYHMWIIUZOYWNMCRXTTJMWFIWBRYFOKYJYVYXWGOCXFQEGXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.156877999083);
    msg.setSource(13163U);
    msg.setSourceEntity(121U);
    msg.setDestination(62817U);
    msg.setDestinationEntity(26U);
    msg.list.assign("EDRVLJZYQTXQFBGMPQJWZMQHKQVBCMJXGDNOFVPOPPNMNZQHRRKLIRBCDALXZEKVEMHQSQUSQNTYTXDWVRRCLIHUUVFSJECENNBIRARHWGTFDAKCZPWZVCGGMYKLELYPLASKJFSRJZVBGWHLSUSOOXIYBKHBWIJTWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.052754763797);
    msg.setSource(32U);
    msg.setSourceEntity(165U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(26U);
    msg.list.assign("MJAEYXDCATSUJHWULYLXIFRQTVFMCTDNQWBJEEMCOEAOYOMYIWDIPAHXLGQFJNYNXRVVQMLMGEBPVZNKFTHWJTXAQHDOEKVJZLRPZIGBOSYLHKFRYPIYNBNGCCEOKBZNUDTCRXVAUSNSEZYONWQHFRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.453549919651);
    msg.setSource(15051U);
    msg.setSourceEntity(110U);
    msg.setDestination(55840U);
    msg.setDestinationEntity(127U);
    msg.peer.assign("DXEZZWMXPNFQOGZJVNFHMSAWGSGBWTOTSKZYLITFFZLBLHUXAWLBAJICKPTVRETHGMLROUKUXEOVGJIVPSWMNQYJRUOWNBKXOBOVMUHYRAXEIRFSDDMDONQQLCELATOPVWRSMIDCGHVHSJKYSEUQBMKRDFZHSXFUCNDZPYRIFQEJZGLKKCXTYPTJHIFPIGCQSIINNPQXYGBDMX");
    msg.rssi = 0.723619967164;
    msg.integrity = 31592U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.71053888488);
    msg.setSource(29224U);
    msg.setSourceEntity(204U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(85U);
    msg.peer.assign("RTPBYJAEGAGGHXBDNLXXZCFNUFSAXLWTGJEWNKHMOSTYYSJCQVKRIRFWUWAPLI");
    msg.rssi = 0.869301092384;
    msg.integrity = 10739U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.914166995483);
    msg.setSource(2771U);
    msg.setSourceEntity(237U);
    msg.setDestination(4999U);
    msg.setDestinationEntity(251U);
    msg.peer.assign("ZHTLHDNGTVSNTYVUFYXTOAAVVWPFBYGSNXZAREYOURPGMQFJCVEIBDZMHVAXXYCZHBOFFUKQRUQYPKCIOVKOLOWDMXLHEUGHMFIJUSBCMHIQDYPLYGZJDNERDUWKLZOPBXWKC");
    msg.rssi = 0.417974833329;
    msg.integrity = 58444U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.243139745368);
    msg.setSource(51765U);
    msg.setSourceEntity(167U);
    msg.setDestination(5056U);
    msg.setDestinationEntity(41U);
    msg.value = -3359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.785290075553);
    msg.setSource(6145U);
    msg.setSourceEntity(61U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(191U);
    msg.value = 31894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.124273634801);
    msg.setSource(10071U);
    msg.setSourceEntity(124U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(61U);
    msg.value = 22449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.282523800969);
    msg.setSource(61278U);
    msg.setSourceEntity(70U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(175U);
    msg.value = 0.812253144741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.106186420863);
    msg.setSource(51855U);
    msg.setSourceEntity(13U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(136U);
    msg.value = 0.875923512656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.691794281404);
    msg.setSource(37291U);
    msg.setSourceEntity(116U);
    msg.setDestination(8751U);
    msg.setDestinationEntity(236U);
    msg.value = 0.300846253782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.650147863083);
    msg.setSource(8094U);
    msg.setSourceEntity(120U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(169U);
    msg.value = 0.553136350503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.482967151907);
    msg.setSource(15158U);
    msg.setSourceEntity(140U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(9U);
    msg.value = 0.746381534696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.355557989245);
    msg.setSource(53738U);
    msg.setSourceEntity(169U);
    msg.setDestination(59235U);
    msg.setDestinationEntity(144U);
    msg.value = 0.514517802729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.788052416247);
    msg.setSource(60248U);
    msg.setSourceEntity(2U);
    msg.setDestination(40967U);
    msg.setDestinationEntity(40U);
    msg.validity = 14716U;
    msg.type = 236U;
    msg.utc_year = 13918U;
    msg.utc_month = 135U;
    msg.utc_day = 105U;
    msg.utc_time = 0.370023854615;
    msg.lat = 0.119349107008;
    msg.lon = 0.84964735897;
    msg.height = 0.589224384887;
    msg.satellites = 69U;
    msg.cog = 0.83683136215;
    msg.sog = 0.612615334593;
    msg.hdop = 0.252407325535;
    msg.vdop = 0.217892461767;
    msg.hacc = 0.832407916894;
    msg.vacc = 0.342971229432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.615824774144);
    msg.setSource(64429U);
    msg.setSourceEntity(119U);
    msg.setDestination(5705U);
    msg.setDestinationEntity(77U);
    msg.validity = 2996U;
    msg.type = 213U;
    msg.utc_year = 11311U;
    msg.utc_month = 146U;
    msg.utc_day = 190U;
    msg.utc_time = 0.527644711952;
    msg.lat = 0.433685629804;
    msg.lon = 0.663542320127;
    msg.height = 0.38891879638;
    msg.satellites = 79U;
    msg.cog = 0.293415348372;
    msg.sog = 0.372456030273;
    msg.hdop = 0.0378232106378;
    msg.vdop = 0.906617732543;
    msg.hacc = 0.110473284822;
    msg.vacc = 0.868469930013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.820427751312);
    msg.setSource(54086U);
    msg.setSourceEntity(62U);
    msg.setDestination(25919U);
    msg.setDestinationEntity(27U);
    msg.validity = 32958U;
    msg.type = 19U;
    msg.utc_year = 34978U;
    msg.utc_month = 58U;
    msg.utc_day = 75U;
    msg.utc_time = 0.367197777134;
    msg.lat = 0.567696660181;
    msg.lon = 0.454573441038;
    msg.height = 0.756264938539;
    msg.satellites = 131U;
    msg.cog = 0.695527963502;
    msg.sog = 0.754701308142;
    msg.hdop = 0.752860458207;
    msg.vdop = 0.63276722574;
    msg.hacc = 0.607493744566;
    msg.vacc = 0.324578810439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0252251422003);
    msg.setSource(30118U);
    msg.setSourceEntity(8U);
    msg.setDestination(13995U);
    msg.setDestinationEntity(148U);
    msg.time = 0.46630700394;
    msg.phi = 0.991978671994;
    msg.theta = 0.635113474049;
    msg.psi = 0.765163817614;
    msg.psi_magnetic = 0.117546686766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.309338161721);
    msg.setSource(42416U);
    msg.setSourceEntity(12U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(39U);
    msg.time = 0.797328909683;
    msg.phi = 0.0561663514596;
    msg.theta = 0.311452920768;
    msg.psi = 0.536144572078;
    msg.psi_magnetic = 0.93114654791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.926986228583);
    msg.setSource(30155U);
    msg.setSourceEntity(169U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(84U);
    msg.time = 0.783175322039;
    msg.phi = 0.43284697489;
    msg.theta = 0.965619089908;
    msg.psi = 0.0109736524426;
    msg.psi_magnetic = 0.733277474146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.968314878424);
    msg.setSource(56044U);
    msg.setSourceEntity(46U);
    msg.setDestination(26573U);
    msg.setDestinationEntity(4U);
    msg.time = 0.186405155437;
    msg.x = 0.678659902585;
    msg.y = 0.114161139295;
    msg.z = 0.172166511451;
    msg.timestep = 0.986830049142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.434202751001);
    msg.setSource(13002U);
    msg.setSourceEntity(0U);
    msg.setDestination(36647U);
    msg.setDestinationEntity(13U);
    msg.time = 0.382601346908;
    msg.x = 0.998476245578;
    msg.y = 0.124729333976;
    msg.z = 0.693593756242;
    msg.timestep = 0.85009633295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.702294648605);
    msg.setSource(1683U);
    msg.setSourceEntity(210U);
    msg.setDestination(28410U);
    msg.setDestinationEntity(7U);
    msg.time = 0.227052766314;
    msg.x = 0.57941307934;
    msg.y = 0.0955778976097;
    msg.z = 0.905318674071;
    msg.timestep = 0.700324046041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.758594608781);
    msg.setSource(7453U);
    msg.setSourceEntity(50U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(234U);
    msg.time = 0.530061979729;
    msg.x = 0.00887579394205;
    msg.y = 0.813200033627;
    msg.z = 0.178438129982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.603388250171);
    msg.setSource(60U);
    msg.setSourceEntity(119U);
    msg.setDestination(40550U);
    msg.setDestinationEntity(244U);
    msg.time = 0.306651466092;
    msg.x = 0.468211463869;
    msg.y = 0.170365744129;
    msg.z = 0.200063899629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.75715508798);
    msg.setSource(10718U);
    msg.setSourceEntity(105U);
    msg.setDestination(61715U);
    msg.setDestinationEntity(106U);
    msg.time = 0.0995331225241;
    msg.x = 0.0633237091319;
    msg.y = 0.0401259622342;
    msg.z = 0.706947543219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5119762502);
    msg.setSource(24324U);
    msg.setSourceEntity(14U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(219U);
    msg.time = 0.388955497504;
    msg.x = 0.861588410619;
    msg.y = 0.236431454759;
    msg.z = 0.641336294994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.384052016121);
    msg.setSource(18167U);
    msg.setSourceEntity(54U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(7U);
    msg.time = 0.500450447566;
    msg.x = 0.0789628945912;
    msg.y = 0.984575488559;
    msg.z = 0.401832863425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.151306322175);
    msg.setSource(35077U);
    msg.setSourceEntity(16U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(158U);
    msg.time = 0.832101439232;
    msg.x = 0.342351314466;
    msg.y = 0.461808514177;
    msg.z = 0.0694611811687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.127721675591);
    msg.setSource(35531U);
    msg.setSourceEntity(60U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(129U);
    msg.time = 0.356819765585;
    msg.x = 0.969601236239;
    msg.y = 0.437128257722;
    msg.z = 0.239882981256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.745068757143);
    msg.setSource(10091U);
    msg.setSourceEntity(133U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(148U);
    msg.time = 0.0951808722224;
    msg.x = 0.593437812065;
    msg.y = 0.141457023434;
    msg.z = 0.423433426464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.277427305725);
    msg.setSource(33257U);
    msg.setSourceEntity(176U);
    msg.setDestination(55165U);
    msg.setDestinationEntity(16U);
    msg.time = 0.888167771467;
    msg.x = 0.00800396112968;
    msg.y = 0.537709540179;
    msg.z = 0.766204722529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.378157608422);
    msg.setSource(53406U);
    msg.setSourceEntity(228U);
    msg.setDestination(45420U);
    msg.setDestinationEntity(155U);
    msg.validity = 52U;
    msg.x = 0.733886485411;
    msg.y = 0.218090738077;
    msg.z = 0.150890391251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.213963516737);
    msg.setSource(50393U);
    msg.setSourceEntity(239U);
    msg.setDestination(10987U);
    msg.setDestinationEntity(118U);
    msg.validity = 12U;
    msg.x = 0.550206130696;
    msg.y = 0.798176038764;
    msg.z = 0.419112267197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.772463737962);
    msg.setSource(4827U);
    msg.setSourceEntity(212U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(181U);
    msg.validity = 93U;
    msg.x = 0.0679560576523;
    msg.y = 0.118998508189;
    msg.z = 0.432270852462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.448920605101);
    msg.setSource(36209U);
    msg.setSourceEntity(172U);
    msg.setDestination(9231U);
    msg.setDestinationEntity(43U);
    msg.validity = 126U;
    msg.x = 0.817006344508;
    msg.y = 0.693776392313;
    msg.z = 0.974441364099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.936559697582);
    msg.setSource(53465U);
    msg.setSourceEntity(192U);
    msg.setDestination(23790U);
    msg.setDestinationEntity(39U);
    msg.validity = 62U;
    msg.x = 0.124308496422;
    msg.y = 0.564717609168;
    msg.z = 0.743256451102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.662669724001);
    msg.setSource(61182U);
    msg.setSourceEntity(217U);
    msg.setDestination(47408U);
    msg.setDestinationEntity(187U);
    msg.validity = 251U;
    msg.x = 0.894031216469;
    msg.y = 0.297231667368;
    msg.z = 0.728005161282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.507336582642);
    msg.setSource(63394U);
    msg.setSourceEntity(123U);
    msg.setDestination(485U);
    msg.setDestinationEntity(168U);
    msg.time = 0.547050296653;
    msg.x = 0.571861839909;
    msg.y = 0.0207443919282;
    msg.z = 0.23952464153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0348881161787);
    msg.setSource(61506U);
    msg.setSourceEntity(254U);
    msg.setDestination(14789U);
    msg.setDestinationEntity(182U);
    msg.time = 0.937731135319;
    msg.x = 0.520237103822;
    msg.y = 0.553509475359;
    msg.z = 0.347603249102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.682490007861);
    msg.setSource(11413U);
    msg.setSourceEntity(49U);
    msg.setDestination(28050U);
    msg.setDestinationEntity(83U);
    msg.time = 0.235246238443;
    msg.x = 0.0538880336299;
    msg.y = 0.278597411841;
    msg.z = 0.216233698321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.717091584644);
    msg.setSource(57766U);
    msg.setSourceEntity(27U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(214U);
    msg.validity = 242U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.183178851691;
    tmp_msg_0.y = 0.189712378236;
    tmp_msg_0.z = 0.232412687888;
    tmp_msg_0.phi = 8.23692812557e-06;
    tmp_msg_0.theta = 0.586768700518;
    tmp_msg_0.psi = 0.738324822557;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.134409703566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.494628327584);
    msg.setSource(59883U);
    msg.setSourceEntity(217U);
    msg.setDestination(52882U);
    msg.setDestinationEntity(107U);
    msg.validity = 155U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0917902690769;
    tmp_msg_0.y = 0.800567577053;
    tmp_msg_0.z = 0.590813431369;
    tmp_msg_0.phi = 0.361286918256;
    tmp_msg_0.theta = 0.635300955691;
    tmp_msg_0.psi = 0.0938621256275;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.470542994866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.401456098506);
    msg.setSource(34616U);
    msg.setSourceEntity(223U);
    msg.setDestination(55825U);
    msg.setDestinationEntity(73U);
    msg.validity = 155U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.222670959745;
    tmp_msg_0.beam_height = 0.132330774266;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.612614653849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.677282332091);
    msg.setSource(942U);
    msg.setSourceEntity(71U);
    msg.setDestination(12777U);
    msg.setDestinationEntity(175U);
    msg.value = 0.731007309053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.905055560712);
    msg.setSource(42244U);
    msg.setSourceEntity(206U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(66U);
    msg.value = 0.411841229616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.688022991146);
    msg.setSource(23731U);
    msg.setSourceEntity(85U);
    msg.setDestination(43035U);
    msg.setDestinationEntity(202U);
    msg.value = 0.0985840190185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.905277433962);
    msg.setSource(5330U);
    msg.setSourceEntity(125U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(71U);
    msg.value = 0.751897197626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.595582103902);
    msg.setSource(58424U);
    msg.setSourceEntity(38U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0090286110722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.510057517327);
    msg.setSource(23086U);
    msg.setSourceEntity(63U);
    msg.setDestination(32418U);
    msg.setDestinationEntity(234U);
    msg.value = 0.909851160405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.120504312541);
    msg.setSource(59778U);
    msg.setSourceEntity(67U);
    msg.setDestination(18302U);
    msg.setDestinationEntity(43U);
    msg.value = 0.228007228127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0284485782984);
    msg.setSource(27196U);
    msg.setSourceEntity(220U);
    msg.setDestination(15815U);
    msg.setDestinationEntity(152U);
    msg.value = 0.489752090398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7301128097);
    msg.setSource(9463U);
    msg.setSourceEntity(121U);
    msg.setDestination(14187U);
    msg.setDestinationEntity(225U);
    msg.value = 0.731737763763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.523366879791);
    msg.setSource(43842U);
    msg.setSourceEntity(195U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(131U);
    msg.value = 0.958598011061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.783518335076);
    msg.setSource(53818U);
    msg.setSourceEntity(229U);
    msg.setDestination(7814U);
    msg.setDestinationEntity(70U);
    msg.value = 0.00769278321129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.630592484331);
    msg.setSource(28290U);
    msg.setSourceEntity(176U);
    msg.setDestination(32325U);
    msg.setDestinationEntity(173U);
    msg.value = 0.145457484353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.697471545414);
    msg.setSource(7442U);
    msg.setSourceEntity(16U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(88U);
    msg.value = 0.980389224787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.05521682471);
    msg.setSource(33550U);
    msg.setSourceEntity(238U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(187U);
    msg.value = 0.435618944155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.897156369369);
    msg.setSource(33378U);
    msg.setSourceEntity(233U);
    msg.setDestination(32511U);
    msg.setDestinationEntity(185U);
    msg.value = 0.297107714989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.175136220182);
    msg.setSource(25269U);
    msg.setSourceEntity(150U);
    msg.setDestination(29553U);
    msg.setDestinationEntity(185U);
    msg.value = 0.595565191778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.117110636284);
    msg.setSource(1044U);
    msg.setSourceEntity(143U);
    msg.setDestination(3717U);
    msg.setDestinationEntity(161U);
    msg.value = 0.00132278562394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.270185228997);
    msg.setSource(75U);
    msg.setSourceEntity(202U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(213U);
    msg.value = 0.168264703845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.252831704243);
    msg.setSource(20321U);
    msg.setSourceEntity(4U);
    msg.setDestination(37184U);
    msg.setDestinationEntity(22U);
    msg.value = 0.882993900755;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.95843541011);
    msg.setSource(4596U);
    msg.setSourceEntity(57U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(57U);
    msg.value = 0.527823746432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.361284139508);
    msg.setSource(51147U);
    msg.setSourceEntity(221U);
    msg.setDestination(54396U);
    msg.setDestinationEntity(233U);
    msg.value = 0.490774606804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.99652392517);
    msg.setSource(37213U);
    msg.setSourceEntity(196U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(158U);
    msg.value = 0.19936840087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.883160668587);
    msg.setSource(43723U);
    msg.setSourceEntity(20U);
    msg.setDestination(29937U);
    msg.setDestinationEntity(11U);
    msg.value = 0.678943442135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.125218732197);
    msg.setSource(25161U);
    msg.setSourceEntity(122U);
    msg.setDestination(33888U);
    msg.setDestinationEntity(103U);
    msg.value = 0.304340106995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0658671288726);
    msg.setSource(59007U);
    msg.setSourceEntity(26U);
    msg.setDestination(59306U);
    msg.setDestinationEntity(229U);
    msg.direction = 0.956778977855;
    msg.speed = 0.82892524689;
    msg.turbulence = 0.769665832132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.849185046153);
    msg.setSource(55250U);
    msg.setSourceEntity(54U);
    msg.setDestination(21850U);
    msg.setDestinationEntity(28U);
    msg.direction = 0.424016827481;
    msg.speed = 0.693553989854;
    msg.turbulence = 0.484757780152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.396275538768);
    msg.setSource(33232U);
    msg.setSourceEntity(159U);
    msg.setDestination(40851U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.485269524772;
    msg.speed = 0.76426547994;
    msg.turbulence = 0.0626083506373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.0853491111727);
    msg.setSource(16577U);
    msg.setSourceEntity(72U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0199878626034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.464762433906);
    msg.setSource(53022U);
    msg.setSourceEntity(251U);
    msg.setDestination(16305U);
    msg.setDestinationEntity(240U);
    msg.value = 0.678567401039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.303610492403);
    msg.setSource(46912U);
    msg.setSourceEntity(93U);
    msg.setDestination(13015U);
    msg.setDestinationEntity(39U);
    msg.value = 0.505033820103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.821759830082);
    msg.setSource(62812U);
    msg.setSourceEntity(99U);
    msg.setDestination(5789U);
    msg.setDestinationEntity(164U);
    msg.value.assign("WFKGFOMSPUFWQCTEYVCFJDXSYPKWIXTWAQTDQKTUQEUZRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.380100065188);
    msg.setSource(50907U);
    msg.setSourceEntity(236U);
    msg.setDestination(42942U);
    msg.setDestinationEntity(66U);
    msg.value.assign("OYNZHOWXGKPYGGNMOOOJSBMEZZWKBBCSQLJJBYGXJUNUPHCJPGZIMSTXBUFTLKFMYDQZKLPUOFRCVWDSGVCVECLIJOXINEWRHHMGGBWZXQRNTCEFETFQARMKVSRBOLRCUKAANHHTHACZEELXDDTHDTVPDJUAIZYCWFFNVEIWSYLYRMEWHMAETQQVDXMKIWPUII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.58242781708);
    msg.setSource(6440U);
    msg.setSourceEntity(84U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(55U);
    msg.value.assign("NSZYIXSANVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.345850025696);
    msg.setSource(7931U);
    msg.setSourceEntity(24U);
    msg.setDestination(11055U);
    msg.setDestinationEntity(118U);
    const char tmp_msg_0[] = {-107, -24, -105, 57, -62, 34, -124, -61, 78, 9, 31, 85, -19, -82, -96, 120, 105, 78, -119, -98, -112, 51, 109, -91, 50, -73, 41, -89, -92, -9, -15, -50, 89, -14, -7, -110, 16, -18, -49, 119, -80, -5, 42, -29, -68, 32, -78, 92, -94, 8, 56, 44, 36, 119, 104, -57, 0, -51, 6, -46, -48, 126, -77, -82, 11, 82, -5, -6, 71, 65, -66, -116, -7, 90, -38, -7, 11, 4, 83, 92, 66, 125, -101, -24, -122, 48, -51, 114, 11, 109, -67, 7, 110, 34, -16, 12, -76, -88, 7, 18, 11, -3, 115, -103, -110, 60, 48, -126, -45, -101, -41, -124, 114, -111, 83, 27, -61, -109, -1, 86, 124, -77, 9, 39, -102, -120, -36, -119, 16, -79, 34, 93, -36, 98, -41, -22, -98, 51, 58, -11, -13, -26, 82, -123, 58, -115, -120, 105, -8, -63, 117, -110, 105, -46, 17, 10, -95, -25, -30, -86, 87, 76, 114, -38, -2, 15, 22, -64, 18, 120, -11, -54, -37, 18, -66};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.4785517006);
    msg.setSource(3454U);
    msg.setSourceEntity(172U);
    msg.setDestination(7370U);
    msg.setDestinationEntity(77U);
    const char tmp_msg_0[] = {-119, 104, 70, 78, -35, -86, 6, 110, 4, -35, 4, -71, -105, -42, 80, -118, -98, -74, 79, -121, 89, -10, -109, -121, -61, -56, -2, -112, 112, 37, 58, -31, -98, -14, -44, 66, -60, 66, -23, 43, 106, -117, -23, -50, -101, 90, -39, 27, 111, -28, 78, 123, -10, -61, 125, 86, -90, 116, -81, 75, 21, 104, -109, -112, 125, -69, -8, -115, -21, -59, 48, -30, 33, -30, -90, -60, 73, 82, 100, 40, 117, -118, -7, 33, 110, 84, -99, -36, 0, 87, 15, 105, 17, -48, 107, 114, -51, 34, -15, 39, 119, -50, 69, -5, -30, 54, -20, 48, -87, -81, 26, 106, 99, 107, -25, -96, -32, -63, -49, -50, -100, 65, -6, 69, -77, 97, 60, 81, 5, -98, 42, -113, 1, -2, 14, -82, -122, 80, 108, -35, -98, 19, 98, -32, -98, -75, -21, -88, -120, 54, -102, 101, 107, 12, 32, 40, 118, -46, 117, 11, -73, -92, -50, 49, 7, 16, -112, 45, 35, 54, -92, 59, -19, 76, -41, 26, 116, 33, 111, 42, -123, 100, -29, 7, -13, 84, 46, -111, 35, -119, 5, 50, 21, -18, -19, 118, 8, -25, 44, 60, -22, 25, 109, 112, 42, -7, 34, -8, -12, 102};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.765279086837);
    msg.setSource(24242U);
    msg.setSourceEntity(215U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {70, -84, -73, -107, -55, -115, 52, 30, 71, -115, -18, -58, 22, 64, -21, -104, -73, -37, -47, -65, 46, -97, 26, 68, 12, -96, -81, -61, 66, 11, -49, 126, -127, 112, -73, -40, 78, 72, -36, 78, 76, 81, 109, -118, -27, -18, 125, -12, 35, -120, 43, 27, -48, 27, 70, -84, 30, 85, 33, 94, 63, 114, -76, -64, 33, -84, 68, 123, 117, 60, -31, -52, -40, -40, -51, -103, -22, -45, 52, 36, -57, -31, -17, 62, 15, 57, -66, 23, 63, 102, -63, 46, 119, -83, 39, -115, 15, -62, 69, -81, -62, 81, -10, 114, -108, -34, 33, 75, -126, -61, -76, 82, -127, 110, -27, 124, 95, 122, 21, 123, 23, 111, -125, 117, 60, -96, 108, 25, 39, 23, 90, -54, 95, -85, 0, -51, -14, -120, -8, -19, -86, 40, -27, -99, -70, 97, -13, 20, 94, -63, -42, -11, 30, -28, -66, 18, 30, 82, -52, 36, 54, 86, -32, 126, -25, -58, 97, 36, -79, 48, -113, 110, 81, -66, 46, -14, -125, -61, 37, 89, -21};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.298218394646);
    msg.setSource(63924U);
    msg.setSourceEntity(96U);
    msg.setDestination(49764U);
    msg.setDestinationEntity(150U);
    msg.type = 1U;
    msg.frequency = 3276938415U;
    msg.min_range = 59075U;
    msg.max_range = 34401U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.214158906189;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0150652816748;
    tmp_msg_0.beam_height = 0.536332686432;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {97, 98, -55, 115, 95, -63, -39, 122, -85, -52, 47, -69, 46, -72, -102, -89, 96, -124, 18, 119, 75, 124, 29, -40, 83, 88, 12, 4, -109, -111, -21, -96, -95, 88, 34, -4, -56, -76, -30, 126, 18, -59, -1, 102, -106, 11, 72, -50, -90, -21, -27, -113, -5, 11, -66, 85, 122, -3, 109, 80, -42, 107, -55, 91, 101, 63, 85, 29, -10, -42, 9, -95, -64, -46, -4, 114, -76, 31, -52, -104, -126, -85, 36, 4, -98, -114, 28, -105, -8, -9, -38, 74, 21, 32, 94, -109, 96, 32, -68, -57, 53, -87, 84, -30, 31, 15, 36, -9, 55, -21, 126, -23, 32, 8, 31, -45, -5, 122, -107, -112, -120, 79, -122, -41, -115, -17, 72, 55, 7, -5, 20, -42, 108, -31, -112, 33, 57, 66, 55, -43, -61, 57, 102, 25, -38, 23, -27, 106, -96, 61, 116, 38, 82, 110, -85, 96, 53, 59, -117, -70, -95, -103, 85, 88, 10, 102, -96, 35, -99, 36, 120, 70, 41, -117, -99, -38, 115, 56, 84, -102, -119, 84, 105, -82, -102, -29, -8, -96, 26, 118, 21, 78, -12, -57, -23, -22, 34, 55, 27, 3, -75, 15, 44, -8, -29, -99, 93, 98, 39, -40, -101, -29, 27, -81, 125, -124, 65, 116, -115, 72, -47, -19, 43, -125, 63, 88, 15, -14, -118, -5, 70, 66};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.730880592298);
    msg.setSource(58571U);
    msg.setSourceEntity(150U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(189U);
    msg.type = 82U;
    msg.frequency = 2143150821U;
    msg.min_range = 44119U;
    msg.max_range = 20807U;
    msg.bits_per_point = 226U;
    msg.scale_factor = 0.533080757432;
    const char tmp_msg_0[] = {-78, -29, 78, 24, 72, 85, -20, -86, 106, -114, 7, -106, 121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.103929189932);
    msg.setSource(19214U);
    msg.setSourceEntity(45U);
    msg.setDestination(62806U);
    msg.setDestinationEntity(144U);
    msg.type = 250U;
    msg.frequency = 807474080U;
    msg.min_range = 18105U;
    msg.max_range = 6372U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.838669555938;
    const char tmp_msg_0[] = {-18, -43, -72, 11, 106, -32, -107, -99, -20, -81, 0, -30, -47, -75, 17, 125, 97, -114, 44, 88, -124, -116, -60, -74, 69, 31, -124, -22, -22, 120, -99, 10, 114, -19, 40, 42, -105, -37, 101, -60, 65, -83, -79, -78, -12, -49, -65, 2, -108, -117, -99, -60, 79, 5, 64, 121, -59, 123, 39, 83, 96, 22, 25, -27, -95, -9, -114, -16, -115, 68, 81, 96, 98, 37, 63, 24, 56, 20, -65, 50, 73, 115, -68, -74, -1, 86, -97, -38, -1, -124, -28, -81, -81, 126, 4, -34, 9, -110, 104, 48, 120, 85, 103, -31, 81, -58, -103, -100, 37, -71, 39, 30, -8, 60, 86, -73, -124, 11, 62, -29, 109, 50, 29, -106, -81, 28, 74, 9, 16, -43, 121, -4, -78, 119, -61, -117, 70, 122, -88, -111, 13, 23, -60, -126, 0, -108, 90, 102, -91, -48, 18, -23, 31, 91, -41, 45, 11, -12, 95, 103, 17, -26, 69, 3, -84, 87, -92, -56, 95, 112, -82, 93, 9, -62, 56, -48, 56, -66, -23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.791584899351);
    msg.setSource(14769U);
    msg.setSourceEntity(200U);
    msg.setDestination(14313U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.596258660172);
    msg.setSource(8480U);
    msg.setSourceEntity(230U);
    msg.setDestination(20141U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.0842338496565);
    msg.setSource(29897U);
    msg.setSourceEntity(20U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.979943022417);
    msg.setSource(57869U);
    msg.setSourceEntity(201U);
    msg.setDestination(12974U);
    msg.setDestinationEntity(0U);
    msg.op = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.089337208243);
    msg.setSource(23938U);
    msg.setSourceEntity(175U);
    msg.setDestination(25467U);
    msg.setDestinationEntity(97U);
    msg.op = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.53115244602);
    msg.setSource(5414U);
    msg.setSourceEntity(75U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(87U);
    msg.op = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.348222670227);
    msg.setSource(1235U);
    msg.setSourceEntity(89U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(201U);
    msg.value = 0.26336265238;
    msg.confidence = 0.275356701354;
    msg.opmodes.assign("FIJUSKYPIETNXGFUGPJETYHRFHIDCICICXFQVMQNAKMRITZBYERJUFTOKNAJBVJSEXCZMBMDEMXNJMQNOYXIXEFLBTTNWRYCGOMYFMQHBBWUWWHIOLGDMUPODHZQJAKWDIKLRBKOZEYVRPISOSWERGLLHHGGZQZWSNPKORAXVAYTCGDVEGXPDDPZWFACVPUPXYVZAJTSLUFQSBUWHMEZOPUQBBLCTCSANFJQSYGCXKJHNNDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.469769316526);
    msg.setSource(28947U);
    msg.setSourceEntity(108U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(9U);
    msg.value = 0.293111737875;
    msg.confidence = 0.403598528119;
    msg.opmodes.assign("WKMSKJHMLITZMLEULGHBCIVIDPRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.992318159404);
    msg.setSource(58547U);
    msg.setSourceEntity(146U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(121U);
    msg.value = 0.548190555051;
    msg.confidence = 0.0246742659205;
    msg.opmodes.assign("DZSCAKXHXBYOAFVYEMXIIHYOPCGNRRGENXMWXLNAVLFVVIQBKSGCIJBUBPRLRAZRADOMLIWJOGNTIHVCCZQFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.176206580747);
    msg.setSource(40397U);
    msg.setSourceEntity(55U);
    msg.setDestination(37395U);
    msg.setDestinationEntity(228U);
    msg.itow = 857052919U;
    msg.lat = 0.447584013081;
    msg.lon = 0.739443823537;
    msg.height_ell = 0.1031761333;
    msg.height_sea = 0.118415815472;
    msg.hacc = 0.780013267523;
    msg.vacc = 0.436619219834;
    msg.vel_n = 0.310858010036;
    msg.vel_e = 0.799563578767;
    msg.vel_d = 0.478221660444;
    msg.speed = 0.730266660177;
    msg.gspeed = 0.81406116805;
    msg.heading = 0.224655047491;
    msg.sacc = 0.754691592218;
    msg.cacc = 0.651797131434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.714451795608);
    msg.setSource(19346U);
    msg.setSourceEntity(99U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(196U);
    msg.itow = 1227361150U;
    msg.lat = 0.0381441103188;
    msg.lon = 0.573675472314;
    msg.height_ell = 0.555560911358;
    msg.height_sea = 0.0373033380712;
    msg.hacc = 0.128016681127;
    msg.vacc = 0.127891231993;
    msg.vel_n = 0.909245522712;
    msg.vel_e = 0.213982539088;
    msg.vel_d = 0.661716925904;
    msg.speed = 0.355809900333;
    msg.gspeed = 0.440199158982;
    msg.heading = 0.496421690777;
    msg.sacc = 0.394738526717;
    msg.cacc = 0.219661567303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.578732647026);
    msg.setSource(22361U);
    msg.setSourceEntity(78U);
    msg.setDestination(53336U);
    msg.setDestinationEntity(56U);
    msg.itow = 430861742U;
    msg.lat = 0.305789291594;
    msg.lon = 0.630093804279;
    msg.height_ell = 0.485859491864;
    msg.height_sea = 0.35007925689;
    msg.hacc = 0.800489032734;
    msg.vacc = 0.876899750264;
    msg.vel_n = 0.512344349222;
    msg.vel_e = 0.623246503051;
    msg.vel_d = 0.670756858816;
    msg.speed = 0.147680549478;
    msg.gspeed = 0.0576595209099;
    msg.heading = 0.0956519098521;
    msg.sacc = 0.338351456847;
    msg.cacc = 0.786668542867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.113723916624);
    msg.setSource(59177U);
    msg.setSourceEntity(178U);
    msg.setDestination(44943U);
    msg.setDestinationEntity(199U);
    msg.id = 157U;
    msg.value = 0.0125485886841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.0599990761515);
    msg.setSource(19228U);
    msg.setSourceEntity(245U);
    msg.setDestination(24037U);
    msg.setDestinationEntity(59U);
    msg.id = 146U;
    msg.value = 0.513464889281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.867460166523);
    msg.setSource(10035U);
    msg.setSourceEntity(170U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(52U);
    msg.id = 238U;
    msg.value = 0.329691350978;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.0880019689011);
    msg.setSource(53280U);
    msg.setSourceEntity(98U);
    msg.setDestination(27250U);
    msg.setDestinationEntity(224U);
    msg.x = 0.144699228923;
    msg.y = 0.480044485442;
    msg.z = 0.414634287989;
    msg.phi = 0.143501821733;
    msg.theta = 0.767193381833;
    msg.psi = 0.119683582653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.997398070378);
    msg.setSource(8540U);
    msg.setSourceEntity(230U);
    msg.setDestination(58592U);
    msg.setDestinationEntity(6U);
    msg.x = 0.151831221139;
    msg.y = 0.82479870472;
    msg.z = 0.960977567597;
    msg.phi = 0.00466886589127;
    msg.theta = 0.844543799396;
    msg.psi = 0.593933819465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.210230225731);
    msg.setSource(6158U);
    msg.setSourceEntity(148U);
    msg.setDestination(39398U);
    msg.setDestinationEntity(205U);
    msg.x = 0.255531287678;
    msg.y = 0.134656822896;
    msg.z = 0.187166664319;
    msg.phi = 0.602733966606;
    msg.theta = 0.857412813392;
    msg.psi = 0.36946719877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.718394447673);
    msg.setSource(51585U);
    msg.setSourceEntity(64U);
    msg.setDestination(8007U);
    msg.setDestinationEntity(15U);
    msg.beam_width = 0.222660380786;
    msg.beam_height = 0.127262799224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.779882826942);
    msg.setSource(17357U);
    msg.setSourceEntity(186U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(146U);
    msg.beam_width = 0.750670638659;
    msg.beam_height = 0.742467140225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.677490064652);
    msg.setSource(45010U);
    msg.setSourceEntity(186U);
    msg.setDestination(52197U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.667849707042;
    msg.beam_height = 0.708032006479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.328473826063);
    msg.setSource(61584U);
    msg.setSourceEntity(132U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(178U);
    msg.sane = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.83292488057);
    msg.setSource(6246U);
    msg.setSourceEntity(150U);
    msg.setDestination(48185U);
    msg.setDestinationEntity(235U);
    msg.sane = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.434173614703);
    msg.setSource(51597U);
    msg.setSourceEntity(57U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(192U);
    msg.sane = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.429579016406);
    msg.setSource(11083U);
    msg.setSourceEntity(178U);
    msg.setDestination(13005U);
    msg.setDestinationEntity(19U);
    msg.value = 0.546981315525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.872679190817);
    msg.setSource(3156U);
    msg.setSourceEntity(81U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(6U);
    msg.value = 0.0478638809026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.408817757974);
    msg.setSource(43976U);
    msg.setSourceEntity(175U);
    msg.setDestination(54879U);
    msg.setDestinationEntity(96U);
    msg.value = 0.831282911431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.824139708061);
    msg.setSource(5665U);
    msg.setSourceEntity(232U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(41U);
    msg.value = 0.505177198949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.453573204346);
    msg.setSource(835U);
    msg.setSourceEntity(127U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(97U);
    msg.value = 0.49907261061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.687975356088);
    msg.setSource(28792U);
    msg.setSourceEntity(52U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(92U);
    msg.value = 0.278995812086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.317803121212);
    msg.setSource(60890U);
    msg.setSourceEntity(21U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(111U);
    msg.value = 0.727160234859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.39256014148);
    msg.setSource(1028U);
    msg.setSourceEntity(71U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(193U);
    msg.value = 0.900178328399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0654013257897);
    msg.setSource(14322U);
    msg.setSourceEntity(146U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(107U);
    msg.value = 0.223719655376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0320588228914);
    msg.setSource(25746U);
    msg.setSourceEntity(6U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(44U);
    msg.value = 0.175701681351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.524954933856);
    msg.setSource(46910U);
    msg.setSourceEntity(186U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(14U);
    msg.value = 0.94733754613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0494945811019);
    msg.setSource(39850U);
    msg.setSourceEntity(140U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(111U);
    msg.value = 0.393679923008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.18506143973);
    msg.setSource(299U);
    msg.setSourceEntity(197U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(66U);
    msg.value = 0.791209073493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.113133758145);
    msg.setSource(41013U);
    msg.setSourceEntity(238U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(181U);
    msg.value = 0.205858624914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.276150650365);
    msg.setSource(34335U);
    msg.setSourceEntity(149U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(80U);
    msg.value = 0.564166252431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.387545908515);
    msg.setSource(53694U);
    msg.setSourceEntity(150U);
    msg.setDestination(59028U);
    msg.setDestinationEntity(210U);
    msg.value = 0.923189599448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.85253808879);
    msg.setSource(32169U);
    msg.setSourceEntity(1U);
    msg.setDestination(44033U);
    msg.setDestinationEntity(197U);
    msg.value = 0.126201734284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.0357938116279);
    msg.setSource(37467U);
    msg.setSourceEntity(177U);
    msg.setDestination(34865U);
    msg.setDestinationEntity(221U);
    msg.value = 0.485037082324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.0488473910015);
    msg.setSource(34793U);
    msg.setSourceEntity(96U);
    msg.setDestination(13931U);
    msg.setDestinationEntity(147U);
    msg.value = 0.509719094862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.659533484336);
    msg.setSource(27266U);
    msg.setSourceEntity(177U);
    msg.setDestination(28762U);
    msg.setDestinationEntity(12U);
    msg.value = 0.492219894953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.857362482298);
    msg.setSource(28767U);
    msg.setSourceEntity(66U);
    msg.setDestination(50231U);
    msg.setDestinationEntity(118U);
    msg.value = 0.00493286930348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.917152187245);
    msg.setSource(43481U);
    msg.setSourceEntity(160U);
    msg.setDestination(42988U);
    msg.setDestinationEntity(86U);
    msg.value = 0.617185278686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.778257904193);
    msg.setSource(43067U);
    msg.setSourceEntity(135U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(189U);
    msg.value = 0.764881289215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.0653236351875);
    msg.setSource(35782U);
    msg.setSourceEntity(157U);
    msg.setDestination(52650U);
    msg.setDestinationEntity(215U);
    msg.value = 0.888260989875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.149218202777);
    msg.setSource(5019U);
    msg.setSourceEntity(82U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(192U);
    msg.validity = 16038U;
    msg.type = 85U;
    msg.tow = 1243100602U;
    msg.base_lat = 0.344349825013;
    msg.base_lon = 0.0675307468568;
    msg.base_height = 0.742305912327;
    msg.n = 0.829737478621;
    msg.e = 0.939469540969;
    msg.d = 0.79142803933;
    msg.v_n = 0.488578299963;
    msg.v_e = 0.0812910280389;
    msg.v_d = 0.945537306415;
    msg.satellites = 226U;
    msg.iar_hyp = 53401U;
    msg.iar_ratio = 0.0691113680869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.108215893035);
    msg.setSource(41870U);
    msg.setSourceEntity(146U);
    msg.setDestination(45815U);
    msg.setDestinationEntity(139U);
    msg.validity = 4310U;
    msg.type = 207U;
    msg.tow = 1049694358U;
    msg.base_lat = 0.722986462529;
    msg.base_lon = 0.671906123557;
    msg.base_height = 0.269540006928;
    msg.n = 0.932903314073;
    msg.e = 0.983753005949;
    msg.d = 0.589938157479;
    msg.v_n = 0.506139947575;
    msg.v_e = 0.254630377682;
    msg.v_d = 0.685999594273;
    msg.satellites = 184U;
    msg.iar_hyp = 56456U;
    msg.iar_ratio = 0.34220570178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.356430112689);
    msg.setSource(655U);
    msg.setSourceEntity(161U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(8U);
    msg.validity = 60716U;
    msg.type = 109U;
    msg.tow = 3021464384U;
    msg.base_lat = 0.476873553939;
    msg.base_lon = 0.43529399689;
    msg.base_height = 0.151670745468;
    msg.n = 0.86342985305;
    msg.e = 0.195728153998;
    msg.d = 0.219964395464;
    msg.v_n = 0.953747040575;
    msg.v_e = 0.897894649868;
    msg.v_d = 0.309911925215;
    msg.satellites = 248U;
    msg.iar_hyp = 42041U;
    msg.iar_ratio = 0.693612418822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.802587115971);
    msg.setSource(42325U);
    msg.setSourceEntity(189U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(106U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.413945027049;
    tmp_msg_0.lon = 0.630860012836;
    tmp_msg_0.height = 0.793045943202;
    tmp_msg_0.x = 0.026245709308;
    tmp_msg_0.y = 0.921986309299;
    tmp_msg_0.z = 0.941042693537;
    tmp_msg_0.phi = 0.612651729366;
    tmp_msg_0.theta = 0.802167100888;
    tmp_msg_0.psi = 0.600693093542;
    tmp_msg_0.u = 0.345062133696;
    tmp_msg_0.v = 0.641245161604;
    tmp_msg_0.w = 0.327261307882;
    tmp_msg_0.vx = 0.89064977792;
    tmp_msg_0.vy = 0.227257728563;
    tmp_msg_0.vz = 0.657370764902;
    tmp_msg_0.p = 0.0665750788531;
    tmp_msg_0.q = 0.574774659805;
    tmp_msg_0.r = 0.535081709327;
    tmp_msg_0.depth = 0.495183841235;
    tmp_msg_0.alt = 0.73192730361;
    msg.state.set(tmp_msg_0);
    msg.type = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.798510892292);
    msg.setSource(59983U);
    msg.setSourceEntity(159U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(144U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.670312084208;
    tmp_msg_0.lon = 0.394396528923;
    tmp_msg_0.height = 0.309745250332;
    tmp_msg_0.x = 0.370329277385;
    tmp_msg_0.y = 0.511942329573;
    tmp_msg_0.z = 0.367904275661;
    tmp_msg_0.phi = 0.834495624206;
    tmp_msg_0.theta = 0.141782508454;
    tmp_msg_0.psi = 0.706396523439;
    tmp_msg_0.u = 0.514807667237;
    tmp_msg_0.v = 0.814761617551;
    tmp_msg_0.w = 0.289027040261;
    tmp_msg_0.vx = 0.904685537708;
    tmp_msg_0.vy = 0.759569390703;
    tmp_msg_0.vz = 0.390786791137;
    tmp_msg_0.p = 0.64950663534;
    tmp_msg_0.q = 0.703697756478;
    tmp_msg_0.r = 0.830914223223;
    tmp_msg_0.depth = 0.439767189923;
    tmp_msg_0.alt = 0.035798250751;
    msg.state.set(tmp_msg_0);
    msg.type = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.56789931161);
    msg.setSource(6111U);
    msg.setSourceEntity(49U);
    msg.setDestination(53419U);
    msg.setDestinationEntity(206U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.340575057561;
    tmp_msg_0.lon = 0.553042853285;
    tmp_msg_0.height = 0.477312739939;
    tmp_msg_0.x = 0.171814617376;
    tmp_msg_0.y = 0.313961551986;
    tmp_msg_0.z = 0.322307268959;
    tmp_msg_0.phi = 0.387233964929;
    tmp_msg_0.theta = 0.543099098898;
    tmp_msg_0.psi = 0.325736431451;
    tmp_msg_0.u = 0.992502635053;
    tmp_msg_0.v = 0.104213126782;
    tmp_msg_0.w = 0.836973213703;
    tmp_msg_0.vx = 0.863340625538;
    tmp_msg_0.vy = 0.524195745877;
    tmp_msg_0.vz = 0.956188433158;
    tmp_msg_0.p = 0.744981390907;
    tmp_msg_0.q = 0.159565788677;
    tmp_msg_0.r = 0.927091310007;
    tmp_msg_0.depth = 0.805409152914;
    tmp_msg_0.alt = 0.414015623478;
    msg.state.set(tmp_msg_0);
    msg.type = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.484665088416);
    msg.setSource(52015U);
    msg.setSourceEntity(147U);
    msg.setDestination(38192U);
    msg.setDestinationEntity(237U);
    msg.value = 0.72718892351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.889671009381);
    msg.setSource(62672U);
    msg.setSourceEntity(48U);
    msg.setDestination(62781U);
    msg.setDestinationEntity(49U);
    msg.value = 0.266420040329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.757001213898);
    msg.setSource(115U);
    msg.setSourceEntity(253U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(122U);
    msg.value = 0.647278081457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.653353533355);
    msg.setSource(40704U);
    msg.setSourceEntity(78U);
    msg.setDestination(54538U);
    msg.setDestinationEntity(187U);
    msg.value = 0.915836849548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.112521684574);
    msg.setSource(8643U);
    msg.setSourceEntity(101U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(21U);
    msg.value = 0.868768893021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.0740635096492);
    msg.setSource(43890U);
    msg.setSourceEntity(132U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(252U);
    msg.value = 0.922670660187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.251992603709);
    msg.setSource(54862U);
    msg.setSourceEntity(136U);
    msg.setDestination(21428U);
    msg.setDestinationEntity(16U);
    msg.id = 76U;
    msg.zoom = 212U;
    msg.action = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.411224308047);
    msg.setSource(59986U);
    msg.setSourceEntity(79U);
    msg.setDestination(47671U);
    msg.setDestinationEntity(191U);
    msg.id = 178U;
    msg.zoom = 92U;
    msg.action = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.842729263113);
    msg.setSource(7674U);
    msg.setSourceEntity(54U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(191U);
    msg.id = 164U;
    msg.zoom = 52U;
    msg.action = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.669544767283);
    msg.setSource(54876U);
    msg.setSourceEntity(211U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(122U);
    msg.id = 84U;
    msg.value = 0.39596979591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.97361112976);
    msg.setSource(28836U);
    msg.setSourceEntity(106U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(167U);
    msg.id = 217U;
    msg.value = 0.331896462545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.114196259626);
    msg.setSource(17507U);
    msg.setSourceEntity(189U);
    msg.setDestination(57988U);
    msg.setDestinationEntity(45U);
    msg.id = 191U;
    msg.value = 0.0783685974741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.732919513804);
    msg.setSource(45966U);
    msg.setSourceEntity(214U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(3U);
    msg.id = 119U;
    msg.value = 0.526194885269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.619217346264);
    msg.setSource(49628U);
    msg.setSourceEntity(42U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(7U);
    msg.id = 56U;
    msg.value = 0.663326059772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.666569068703);
    msg.setSource(34318U);
    msg.setSourceEntity(101U);
    msg.setDestination(44335U);
    msg.setDestinationEntity(87U);
    msg.id = 118U;
    msg.value = 0.24018635132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.0456099085462);
    msg.setSource(9298U);
    msg.setSourceEntity(43U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(8U);
    msg.id = 156U;
    msg.angle = 0.496993225547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.4549999035);
    msg.setSource(26288U);
    msg.setSourceEntity(151U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(53U);
    msg.id = 106U;
    msg.angle = 0.172800021874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.285964722639);
    msg.setSource(16795U);
    msg.setSourceEntity(95U);
    msg.setDestination(9109U);
    msg.setDestinationEntity(180U);
    msg.id = 150U;
    msg.angle = 0.805836594235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.552961596235);
    msg.setSource(50734U);
    msg.setSourceEntity(38U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(48U);
    msg.op = 22U;
    msg.actions.assign("SOCBKLDQYEBJBFIJTSFAHCUYFGJNFIULQOMFVXWIMDSVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.382136558653);
    msg.setSource(6359U);
    msg.setSourceEntity(181U);
    msg.setDestination(62950U);
    msg.setDestinationEntity(174U);
    msg.op = 174U;
    msg.actions.assign("NRKZKZZXIRMWZGLQTJCSDDCPBMDTUKUZWHZOQQERXUVSFAQBWHLUONNPVPCEFDEOKOXFOEBEJAWXLVSYYFKZYUPOLJAVESKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.840783538142);
    msg.setSource(60410U);
    msg.setSourceEntity(70U);
    msg.setDestination(64379U);
    msg.setDestinationEntity(34U);
    msg.op = 27U;
    msg.actions.assign("IVQGMCLFVZCMKZULSZQHRXQJMANNSIZWIANDCRXPJGTATMUNZPXNVEYRCKHPJFINEXPSHBRXTJISEOYBBYUFVGJFPOVMBAVFOEGLHTIWVSBJLRIMTCMMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.845861151635);
    msg.setSource(49497U);
    msg.setSourceEntity(232U);
    msg.setDestination(28124U);
    msg.setDestinationEntity(30U);
    msg.actions.assign("FCAOWJLIFZWWJLRDZOAFRHDZXZLRHFHTDWYLZPPKWTIPMKQYUUQJLMYNYBURHSMXCTHCESFOBVGSMTKAIHXNJBIFXGRLWONAEFKUQSGUHEGQMYVFZOBPYYLWHEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.515360950289);
    msg.setSource(12772U);
    msg.setSourceEntity(117U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("DNXEYPLPTCRJXKGRCZTPKMYIHKEOXPGBIORJVEMLUQAFDRFSSATTPNQMSAKMSHYFLXCZJRCVJDHCICERUTJKZEFOZHGLAUSTDIKQYZELEWQNKBOQGPZHKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0220256972918);
    msg.setSource(17954U);
    msg.setSourceEntity(253U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(68U);
    msg.actions.assign("OHECBGZDJMQWDLTERFTPKECIILVJEGESWXCOMTUAUGQONBQQVBPOINGEVWCQVJNEAVQZVLMIKTSNWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.205860449867);
    msg.setSource(39941U);
    msg.setSourceEntity(54U);
    msg.setDestination(60042U);
    msg.setDestinationEntity(197U);
    msg.button = 163U;
    msg.value = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.00263147136596);
    msg.setSource(55590U);
    msg.setSourceEntity(62U);
    msg.setDestination(11600U);
    msg.setDestinationEntity(201U);
    msg.button = 224U;
    msg.value = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.100524592663);
    msg.setSource(56941U);
    msg.setSourceEntity(158U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(1U);
    msg.button = 22U;
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.7125105163);
    msg.setSource(61237U);
    msg.setSourceEntity(104U);
    msg.setDestination(32937U);
    msg.setDestinationEntity(178U);
    msg.op = 243U;
    msg.text.assign("FJKFGVJAKEKCVFOYTRFCODOTNMDNHHZVGXSUFCDKBQUDRGILAXDDHIUFNXMHWWMTNOLMEYEAPWOWDVMNGBWFSGWHVDBBLLWITLGYRDKIWNRUGYALSHYVUZUQBPDPJGVLAVPUESTHHEMRIKSBQARPKIZZYGESSGKOLKAIXZJIURSOCMNXOAHROFUCOSATQYZEYJBZRIALPWBWZKPCQQYEPPEJQVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.924453460974);
    msg.setSource(49559U);
    msg.setSourceEntity(50U);
    msg.setDestination(35297U);
    msg.setDestinationEntity(87U);
    msg.op = 177U;
    msg.text.assign("MAYQVYXBXSUFLONRARWLPGKQGOEGSPEDCTORCFESFXAHPDKJVFXIBDJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.212590726155);
    msg.setSource(21556U);
    msg.setSourceEntity(231U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(40U);
    msg.op = 28U;
    msg.text.assign("LIRGZDSJYAOXPNLOGLAUDBKMYMWRWDVLRHKIGAOZDCTMHHYPLSEUFXEVROFXIWIABKZPEDBJNROUCTAGPQOGWZJGXVTWMNJPWTVZHYTBPFOEPURKQSVMHMXLIWZSFDALBKTTCSWAXQQCQVVLQQNYETNNEMOJDTFSSEUGTCAFFVYRCOXOMYLDWURWYJAJEXJZDRINDEHQBKXFSYIQKUQAHYJHBGUKBMUHHGKSZRGVVBJFCECBIPULPNPNNZIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.859464777154);
    msg.setSource(40124U);
    msg.setSourceEntity(51U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(176U);
    msg.op = 32U;
    msg.time_remain = 0.771247790287;
    msg.sched_time = 0.312614339649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.695004499152);
    msg.setSource(54851U);
    msg.setSourceEntity(218U);
    msg.setDestination(7455U);
    msg.setDestinationEntity(56U);
    msg.op = 0U;
    msg.time_remain = 0.300432517499;
    msg.sched_time = 0.301728019316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.420188582784);
    msg.setSource(9460U);
    msg.setSourceEntity(209U);
    msg.setDestination(52149U);
    msg.setDestinationEntity(253U);
    msg.op = 218U;
    msg.time_remain = 0.526564375787;
    msg.sched_time = 0.143096257134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.951349941075);
    msg.setSource(36427U);
    msg.setSourceEntity(42U);
    msg.setDestination(36232U);
    msg.setDestinationEntity(115U);
    msg.name.assign("AHWDEFDBXVIZMQUWYGCAABGMTIZJUVAKDQYEQTXUUDMTRAHLHHRIBRUEPNXYCZDRUQXLFYNVFXWRKVICHMPHSHZGWCGYWFJCCEPWKUEQTXMBOJTGIJRYAOSCSNTZLEKGSWNOZPFLAXQQNPWSOMEJJZYJGTOSEDRWGENSFMHZKGCKPDPBNKBOVDCPVKX");
    msg.op = 95U;
    msg.sched_time = 0.992523636142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.904874240514);
    msg.setSource(63341U);
    msg.setSourceEntity(77U);
    msg.setDestination(33590U);
    msg.setDestinationEntity(37U);
    msg.name.assign("ADKUULVKGBDCUSSPLXWTVQANFQNJAVUSDHGJHZGNBLYLKDEFIQNHXTNEDUFABPKIHMEXUTTVQPCKDUZIIPRMVGXTOVVECSNRQGTAZIPETSJOSNIXUPWCBMOLKKDPRNCCVTZEIOYRDIPSCACYJRMNBWWFFGWHHEFBGRWQGZXWXFGIOJFLQZZRQTLYAWKAMMCZBDUSEBDJBKLXMQMLHOOR");
    msg.op = 122U;
    msg.sched_time = 0.866334035385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.326989804457);
    msg.setSource(33030U);
    msg.setSourceEntity(248U);
    msg.setDestination(24776U);
    msg.setDestinationEntity(206U);
    msg.name.assign("AZJZTCKEUGLZRQOXLSHNFRYYIGBPKJZXDIFRBTTFHGLCCCHPYGDMIUZWN");
    msg.op = 251U;
    msg.sched_time = 0.633108119213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.356504016886);
    msg.setSource(50391U);
    msg.setSourceEntity(25U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.945437168674);
    msg.setSource(17017U);
    msg.setSourceEntity(102U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0567085595703);
    msg.setSource(42131U);
    msg.setSourceEntity(3U);
    msg.setDestination(48516U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.272548896781);
    msg.setSource(3317U);
    msg.setSourceEntity(39U);
    msg.setDestination(18626U);
    msg.setDestinationEntity(171U);
    msg.name.assign("UHMMWKDKIIVOGLEOYBXBLONXEYKJXNXZIYHFOCRZWJUNMTLVSUUYMKHZYZASENEWMXCBVGOZNAINPOCQNGEKIVYDPKIFBDPJBEGYIPACKYMBLN");
    msg.state = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.661993211151);
    msg.setSource(4580U);
    msg.setSourceEntity(185U);
    msg.setDestination(54479U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YYQTBVVPSUGOLUZMSRTTHULQNNZGBOSJPEEHWSXRCRUAGTWAICVZDPWKDMODPDOCMFAPCHLGVEARXRIXOEGJNVAIWWYECA");
    msg.state = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.792368738497);
    msg.setSource(61292U);
    msg.setSourceEntity(207U);
    msg.setDestination(10998U);
    msg.setDestinationEntity(158U);
    msg.name.assign("BGWKXZJARHBKYBYNLGMO");
    msg.state = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.197930087484);
    msg.setSource(55376U);
    msg.setSourceEntity(187U);
    msg.setDestination(39805U);
    msg.setDestinationEntity(198U);
    msg.name.assign("UQZZAOTVSGXWFTTIQTNSKDRXLYHPBVTIUGLTAGLFYDNGPNPGPCDVSXCLBOGOWCRZSLMMJHIBEZKYOKKIOQDUSYH");
    msg.value = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.180482102968);
    msg.setSource(64264U);
    msg.setSourceEntity(133U);
    msg.setDestination(60579U);
    msg.setDestinationEntity(47U);
    msg.name.assign("TFYIBFJBKVFAPFMIEMHPJQKRTHKMCVWSXUVZGHODJBVDGJBULSWDIGBUACFVIZNGTXYHIPKBARYRQNHYOHQJTEXZDJMSQSMOPXNLOCWBWQZMBHIGUCCFELQTHTEGZDCLTLRMETFIVPGZWNYSGNQAWAGWVKORNDRJOAQYENXXPNYUXCJSMIMKEEDFUJDALRDXBOUKVNZMYIKORZFHAPYHSYPPWSIOVLGCSEWJNX");
    msg.value = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.20091922068);
    msg.setSource(19554U);
    msg.setSourceEntity(185U);
    msg.setDestination(35871U);
    msg.setDestinationEntity(1U);
    msg.name.assign("RVBENPRMMNDWAZVUUVLUIHZOHMICEXPWTGNVENXEOIFMPFWCIIRIFDYWKZKQHJNTOFCLSQRKEVKSKQHHZS");
    msg.value = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.840011717814);
    msg.setSource(53073U);
    msg.setSourceEntity(200U);
    msg.setDestination(55057U);
    msg.setDestinationEntity(26U);
    msg.name.assign("LMCUWIAXREQNKBVUNRKHBGUHTZYQANHNVWJXSSKEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.107931078969);
    msg.setSource(48561U);
    msg.setSourceEntity(51U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(118U);
    msg.name.assign("KIIMSDDORFSKBOVYQRUKFSLKCMKNYHYXPHONGDSIOEMJDQZJBTXIQNRRNWLZSJERFZJJAKDHPPYRIQIEYVTPFKVGNCNDIUQGGLFPAIAHZXEUSURLWBAHFASWTBNMLTGBPWWWLCHTPQLDTQXBHFMNECHGGLZJRCDFMUBMVCTDNCMYEAYWSXZWUFZBKZIRHWYLJUKCCJQJAUOZOTKXSTNSPUEUAVOVPBGGEQVBQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.715876128283);
    msg.setSource(52221U);
    msg.setSourceEntity(213U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(233U);
    msg.name.assign("SDBFRKIEZFCXTUHIFYDTXGFDXLQWOCQJXYLMSUMEJAIEKETCEVIQPLBGUEZLPCPTKLZGNUPESVCJGKGMAUWVOAHJSEIYYBBISYNZCVDZXATMWNMCGGPMJOQWARKLRAETQLYNMHBPKAJBOQDHVFKVJKHRSWOLXXROMICNZEMZBNRXHSXHPGCAAJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.336100784777);
    msg.setSource(63374U);
    msg.setSourceEntity(35U);
    msg.setDestination(58130U);
    msg.setDestinationEntity(68U);
    msg.name.assign("QRQTCYGZKCILDNQSSFZURROOHNVPWNWMNGYTDBICBNJBFXHQLHDNXBAJMGEIKEIUAVGDOTPKDIWFQSLJJYUFTYHQDXLKFDFORHMSTSXCBCPPEHYGZTEOGAVSMPCLAFZIKHUVAYBVWJEJDLNCQSZKRMEIHOEKXSVWOXMALUBVOWQYPWKUSGGAIBGAIZJHUYLZZSQMREOF");
    msg.value = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.0542373147426);
    msg.setSource(19754U);
    msg.setSourceEntity(207U);
    msg.setDestination(12086U);
    msg.setDestinationEntity(217U);
    msg.name.assign("GAIGPWYKYOEMUWCGSCMELQSTLKDRADLREWLLVPYJUO");
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.406744192362);
    msg.setSource(2331U);
    msg.setSourceEntity(182U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(20U);
    msg.name.assign("QZATESAFZSIXUEXNGKVTIQXFQDGNGRUQOMLXVHBDWJHXYRWBOJGDHTVLZPJXCNZYZPKQNKLMORAYLGTBVYZVJAHUHWOXOPT");
    msg.value = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.323265696215);
    msg.setSource(5334U);
    msg.setSourceEntity(226U);
    msg.setDestination(34466U);
    msg.setDestinationEntity(200U);
    msg.id = 123U;
    msg.period = 1611539568U;
    msg.duty_cycle = 1275964785U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.998356554241);
    msg.setSource(30230U);
    msg.setSourceEntity(188U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(185U);
    msg.id = 207U;
    msg.period = 3536096506U;
    msg.duty_cycle = 129893332U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.345739829854);
    msg.setSource(29779U);
    msg.setSourceEntity(114U);
    msg.setDestination(33280U);
    msg.setDestinationEntity(227U);
    msg.id = 152U;
    msg.period = 2543906857U;
    msg.duty_cycle = 2524132371U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.879428471887);
    msg.setSource(59097U);
    msg.setSourceEntity(81U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(181U);
    msg.id = 229U;
    msg.period = 3093121978U;
    msg.duty_cycle = 1912136770U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.944904686752);
    msg.setSource(34284U);
    msg.setSourceEntity(55U);
    msg.setDestination(38804U);
    msg.setDestinationEntity(145U);
    msg.id = 61U;
    msg.period = 2370093247U;
    msg.duty_cycle = 2914327812U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.00595102641848);
    msg.setSource(26712U);
    msg.setSourceEntity(39U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(170U);
    msg.id = 167U;
    msg.period = 2217591314U;
    msg.duty_cycle = 2303067350U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.947429474593);
    msg.setSource(36058U);
    msg.setSourceEntity(177U);
    msg.setDestination(125U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.590810265307;
    msg.lon = 0.776813424067;
    msg.height = 0.271001489199;
    msg.x = 0.267020313757;
    msg.y = 0.0930758888844;
    msg.z = 0.516221184876;
    msg.phi = 0.246435450629;
    msg.theta = 0.45518399748;
    msg.psi = 0.185582148796;
    msg.u = 0.612446801485;
    msg.v = 0.7861266957;
    msg.w = 0.844323025192;
    msg.vx = 0.955657143021;
    msg.vy = 0.880908248482;
    msg.vz = 0.407456524925;
    msg.p = 0.938501623317;
    msg.q = 0.749486148881;
    msg.r = 0.895433217915;
    msg.depth = 0.909335418984;
    msg.alt = 0.878863478784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.0683439484719);
    msg.setSource(564U);
    msg.setSourceEntity(27U);
    msg.setDestination(41350U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.466268458992;
    msg.lon = 0.455828431261;
    msg.height = 0.913807644178;
    msg.x = 0.735080875703;
    msg.y = 0.699486691046;
    msg.z = 0.587104211068;
    msg.phi = 0.635577395168;
    msg.theta = 0.65316506323;
    msg.psi = 0.729285456063;
    msg.u = 0.24824115614;
    msg.v = 0.257236309963;
    msg.w = 0.582336086153;
    msg.vx = 0.513479661883;
    msg.vy = 0.284249568259;
    msg.vz = 0.326449296803;
    msg.p = 0.852377655509;
    msg.q = 0.370120548883;
    msg.r = 0.751059353223;
    msg.depth = 0.877340379073;
    msg.alt = 0.83903711966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.246997153526);
    msg.setSource(35230U);
    msg.setSourceEntity(58U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.137080982227;
    msg.lon = 0.635152284268;
    msg.height = 0.449515927467;
    msg.x = 0.000254995409958;
    msg.y = 0.635433938265;
    msg.z = 0.365751076398;
    msg.phi = 0.889512048847;
    msg.theta = 0.3059833242;
    msg.psi = 0.200647904165;
    msg.u = 0.21791269348;
    msg.v = 0.955161944383;
    msg.w = 0.522454272691;
    msg.vx = 0.734080867968;
    msg.vy = 0.839144852571;
    msg.vz = 0.29287072292;
    msg.p = 0.251028111221;
    msg.q = 0.101039673665;
    msg.r = 0.0464272101286;
    msg.depth = 0.212223227366;
    msg.alt = 0.605870444333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0458355423648);
    msg.setSource(6563U);
    msg.setSourceEntity(208U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(238U);
    msg.x = 0.893975607128;
    msg.y = 0.405452627708;
    msg.z = 0.313350218643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.183402554416);
    msg.setSource(40702U);
    msg.setSourceEntity(209U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(185U);
    msg.x = 0.815562458541;
    msg.y = 0.713334584758;
    msg.z = 0.884026364317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.565807139547);
    msg.setSource(35716U);
    msg.setSourceEntity(110U);
    msg.setDestination(18709U);
    msg.setDestinationEntity(2U);
    msg.x = 0.295472016349;
    msg.y = 0.798236694629;
    msg.z = 0.0488522858607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.906563416455);
    msg.setSource(55557U);
    msg.setSourceEntity(164U);
    msg.setDestination(44645U);
    msg.setDestinationEntity(214U);
    msg.value = 0.32586091786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.829241291764);
    msg.setSource(10700U);
    msg.setSourceEntity(71U);
    msg.setDestination(15426U);
    msg.setDestinationEntity(63U);
    msg.value = 0.600618099337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.773746109595);
    msg.setSource(33574U);
    msg.setSourceEntity(157U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(110U);
    msg.value = 0.624384381737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.12900435261);
    msg.setSource(45149U);
    msg.setSourceEntity(204U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0525371340886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0806645785872);
    msg.setSource(56543U);
    msg.setSourceEntity(171U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(100U);
    msg.value = 0.969561815628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.712115333943);
    msg.setSource(50234U);
    msg.setSourceEntity(7U);
    msg.setDestination(47866U);
    msg.setDestinationEntity(233U);
    msg.value = 0.114939349468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.845502944318);
    msg.setSource(12604U);
    msg.setSourceEntity(205U);
    msg.setDestination(50069U);
    msg.setDestinationEntity(118U);
    msg.x = 0.0510517871168;
    msg.y = 0.621054550224;
    msg.z = 0.463589624675;
    msg.phi = 0.640009643716;
    msg.theta = 0.993826716801;
    msg.psi = 0.606348157067;
    msg.p = 0.952876212675;
    msg.q = 0.263958460997;
    msg.r = 0.644333127341;
    msg.u = 0.272522620336;
    msg.v = 0.550424313036;
    msg.w = 0.205807891309;
    msg.bias_psi = 0.632132656394;
    msg.bias_r = 0.689605164445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.343989976637);
    msg.setSource(29878U);
    msg.setSourceEntity(180U);
    msg.setDestination(116U);
    msg.setDestinationEntity(130U);
    msg.x = 0.92263468487;
    msg.y = 0.685975692518;
    msg.z = 0.20995427727;
    msg.phi = 0.180247915461;
    msg.theta = 0.568977698539;
    msg.psi = 0.346850399233;
    msg.p = 0.497100776271;
    msg.q = 0.547887459572;
    msg.r = 0.852888029302;
    msg.u = 0.573392509144;
    msg.v = 0.913403156508;
    msg.w = 0.295314375669;
    msg.bias_psi = 0.589983358739;
    msg.bias_r = 0.321340971375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.316430714594);
    msg.setSource(24992U);
    msg.setSourceEntity(50U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(131U);
    msg.x = 0.472675244127;
    msg.y = 0.905984856024;
    msg.z = 0.768838454915;
    msg.phi = 0.965179887193;
    msg.theta = 0.225574294375;
    msg.psi = 0.667422419484;
    msg.p = 0.66396400674;
    msg.q = 0.652720009097;
    msg.r = 0.880587182689;
    msg.u = 0.629432041008;
    msg.v = 0.693897801811;
    msg.w = 0.698468378353;
    msg.bias_psi = 0.22601387729;
    msg.bias_r = 0.664370583415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.22021623956);
    msg.setSource(41136U);
    msg.setSourceEntity(232U);
    msg.setDestination(10368U);
    msg.setDestinationEntity(19U);
    msg.bias_psi = 0.249870896802;
    msg.bias_r = 0.546685113575;
    msg.cog = 0.227394720682;
    msg.cyaw = 0.365915070327;
    msg.lbl_rej_level = 0.883194938495;
    msg.gps_rej_level = 0.690477689922;
    msg.custom_x = 0.298515311442;
    msg.custom_y = 0.176283371441;
    msg.custom_z = 0.190057332004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.481668598532);
    msg.setSource(15386U);
    msg.setSourceEntity(19U);
    msg.setDestination(57034U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.582766999522;
    msg.bias_r = 0.909510910189;
    msg.cog = 0.875794912032;
    msg.cyaw = 0.559914341174;
    msg.lbl_rej_level = 0.593614234719;
    msg.gps_rej_level = 0.465171544616;
    msg.custom_x = 0.00674925397227;
    msg.custom_y = 0.174040141376;
    msg.custom_z = 0.493667309814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.359891569632);
    msg.setSource(12160U);
    msg.setSourceEntity(122U);
    msg.setDestination(35639U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.441747332998;
    msg.bias_r = 0.0841809840829;
    msg.cog = 0.386152972637;
    msg.cyaw = 0.745652703451;
    msg.lbl_rej_level = 0.903397677219;
    msg.gps_rej_level = 0.0238322872393;
    msg.custom_x = 0.847377624004;
    msg.custom_y = 0.483501966285;
    msg.custom_z = 0.965938342655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.988599579523);
    msg.setSource(32351U);
    msg.setSourceEntity(51U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.373028613981;
    msg.reason = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.00962268028265);
    msg.setSource(18876U);
    msg.setSourceEntity(9U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(199U);
    msg.utc_time = 0.329411432338;
    msg.reason = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.313266182234);
    msg.setSource(17310U);
    msg.setSourceEntity(220U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(40U);
    msg.utc_time = 0.999950526891;
    msg.reason = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.39647582383);
    msg.setSource(51093U);
    msg.setSourceEntity(149U);
    msg.setDestination(43029U);
    msg.setDestinationEntity(206U);
    msg.id = 63U;
    msg.range = 0.713733226292;
    msg.acceptance = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.369921409948);
    msg.setSource(41428U);
    msg.setSourceEntity(33U);
    msg.setDestination(51247U);
    msg.setDestinationEntity(18U);
    msg.id = 231U;
    msg.range = 0.508942469967;
    msg.acceptance = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.406101972413);
    msg.setSource(5799U);
    msg.setSourceEntity(209U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(155U);
    msg.id = 83U;
    msg.range = 0.170036082048;
    msg.acceptance = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.930990662563);
    msg.setSource(1778U);
    msg.setSourceEntity(186U);
    msg.setDestination(50800U);
    msg.setDestinationEntity(27U);
    msg.type = 245U;
    msg.reason = 77U;
    msg.value = 0.172196078857;
    msg.timestep = 0.190570021352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.249784584028);
    msg.setSource(18963U);
    msg.setSourceEntity(153U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(102U);
    msg.type = 30U;
    msg.reason = 91U;
    msg.value = 0.785668982042;
    msg.timestep = 0.0249279852554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.785878120658);
    msg.setSource(43111U);
    msg.setSourceEntity(161U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(7U);
    msg.type = 239U;
    msg.reason = 131U;
    msg.value = 0.44025535589;
    msg.timestep = 0.903596052295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9633492138);
    msg.setSource(27238U);
    msg.setSourceEntity(9U);
    msg.setDestination(40156U);
    msg.setDestinationEntity(218U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RPZTMQVHGPZFMCAXLOGJAMNVXKXXKUKPBRIRTDDMGJYGVUXRRPTOSDRPUZFSODPBNZSYSCIFCFIVTJRIAOHPVQEEYBNRCTQTDOUEULOXYYZEIKTRHFTBTRGINUKCKBWUZISEUZSILNSWAJVYPTWOIDHELFYMEMWCLHALXLFVFWBGQJBMVDGBEQFHLFJYNGQODAVNSLQXBWZXJUWCCHGZENAZJIYJNSWCKPALMONAYMQUBVPSXJAKHQ");
    tmp_msg_0.lat = 0.326768484483;
    tmp_msg_0.lon = 0.95389980597;
    tmp_msg_0.depth = 0.788833110528;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 184U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.621678703314;
    msg.y = 0.482071751703;
    msg.var_x = 0.0872539787494;
    msg.var_y = 0.0243906478204;
    msg.distance = 0.506956575868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.74042158716);
    msg.setSource(2255U);
    msg.setSourceEntity(124U);
    msg.setDestination(59200U);
    msg.setDestinationEntity(203U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BPOZKSXOKGTHEDYBAZFZIMWLTKCVMHRMCHWLKRTTAYNRARSFDOBOXEB");
    tmp_msg_0.lat = 0.501610302956;
    tmp_msg_0.lon = 0.0837449314722;
    tmp_msg_0.depth = 0.888790987308;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 197U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0804811989283;
    msg.y = 0.469826878692;
    msg.var_x = 0.547717317294;
    msg.var_y = 0.28734349797;
    msg.distance = 0.754157579558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.899633309236);
    msg.setSource(49162U);
    msg.setSourceEntity(173U);
    msg.setDestination(49719U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WBRCLMBLMGZSNGWSDZVTAQYNRFJOOUZAIFEYGASZRTJNHRPJXUXMLDBBUPQKITFUKVDKBKHAIBXKFBFZORELEYQPWCKCPGOSAHDTGECD");
    tmp_msg_0.lat = 0.858345305743;
    tmp_msg_0.lon = 0.0969619690196;
    tmp_msg_0.depth = 0.345362870591;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 9U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.688867615869;
    msg.y = 0.937017714322;
    msg.var_x = 0.583715521553;
    msg.var_y = 0.88071718765;
    msg.distance = 0.691539443216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.530824403473);
    msg.setSource(24140U);
    msg.setSourceEntity(144U);
    msg.setDestination(14171U);
    msg.setDestinationEntity(168U);
    msg.state = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.96291438079);
    msg.setSource(20911U);
    msg.setSourceEntity(242U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(133U);
    msg.state = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.472848706318);
    msg.setSource(12560U);
    msg.setSourceEntity(20U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(141U);
    msg.state = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.730629051358);
    msg.setSource(32278U);
    msg.setSourceEntity(215U);
    msg.setDestination(20834U);
    msg.setDestinationEntity(164U);
    msg.x = 0.15330404925;
    msg.y = 0.12582669627;
    msg.z = 0.332176967532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.215183929597);
    msg.setSource(27189U);
    msg.setSourceEntity(40U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(127U);
    msg.x = 0.244998801531;
    msg.y = 0.336563931871;
    msg.z = 0.663837670544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.573928365538);
    msg.setSource(11035U);
    msg.setSourceEntity(217U);
    msg.setDestination(36363U);
    msg.setDestinationEntity(150U);
    msg.x = 0.747820290292;
    msg.y = 0.96974132421;
    msg.z = 0.187780334612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.951403263708);
    msg.setSource(44458U);
    msg.setSourceEntity(36U);
    msg.setDestination(51357U);
    msg.setDestinationEntity(156U);
    msg.va = 0.63542692066;
    msg.aoa = 0.870937798393;
    msg.ssa = 0.992331343697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.930034422034);
    msg.setSource(2881U);
    msg.setSourceEntity(140U);
    msg.setDestination(57509U);
    msg.setDestinationEntity(251U);
    msg.va = 0.844758867561;
    msg.aoa = 0.88090930617;
    msg.ssa = 0.660756324995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.575618005051);
    msg.setSource(45632U);
    msg.setSourceEntity(10U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(71U);
    msg.va = 0.0225446074839;
    msg.aoa = 0.999060846836;
    msg.ssa = 0.151718016341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.704449355012);
    msg.setSource(1296U);
    msg.setSourceEntity(225U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(108U);
    msg.value = 0.165528462103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.863398412921);
    msg.setSource(16236U);
    msg.setSourceEntity(163U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(89U);
    msg.value = 0.750253282907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.303605183457);
    msg.setSource(4398U);
    msg.setSourceEntity(14U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(126U);
    msg.value = 0.177449059929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.694334140921);
    msg.setSource(59707U);
    msg.setSourceEntity(75U);
    msg.setDestination(54598U);
    msg.setDestinationEntity(46U);
    msg.value = 0.812855809274;
    msg.z_units = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.324224604635);
    msg.setSource(10930U);
    msg.setSourceEntity(217U);
    msg.setDestination(4043U);
    msg.setDestinationEntity(187U);
    msg.value = 0.886261656872;
    msg.z_units = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.893065684942);
    msg.setSource(18702U);
    msg.setSourceEntity(129U);
    msg.setDestination(19973U);
    msg.setDestinationEntity(254U);
    msg.value = 0.350749984192;
    msg.z_units = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0396786790899);
    msg.setSource(22089U);
    msg.setSourceEntity(169U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(128U);
    msg.value = 0.32052961569;
    msg.speed_units = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.787990560657);
    msg.setSource(30026U);
    msg.setSourceEntity(207U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(126U);
    msg.value = 0.498517187172;
    msg.speed_units = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.288818046286);
    msg.setSource(16439U);
    msg.setSourceEntity(138U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(18U);
    msg.value = 0.968106422752;
    msg.speed_units = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.354032303553);
    msg.setSource(38393U);
    msg.setSourceEntity(168U);
    msg.setDestination(45721U);
    msg.setDestinationEntity(147U);
    msg.value = 0.401886771055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.221814356976);
    msg.setSource(42585U);
    msg.setSourceEntity(237U);
    msg.setDestination(21881U);
    msg.setDestinationEntity(30U);
    msg.value = 0.478872159985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.760601966705);
    msg.setSource(15565U);
    msg.setSourceEntity(113U);
    msg.setDestination(64508U);
    msg.setDestinationEntity(136U);
    msg.value = 0.671490578915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.899104994098);
    msg.setSource(53079U);
    msg.setSourceEntity(14U);
    msg.setDestination(416U);
    msg.setDestinationEntity(68U);
    msg.value = 0.00307853836255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.207822263518);
    msg.setSource(33757U);
    msg.setSourceEntity(250U);
    msg.setDestination(61832U);
    msg.setDestinationEntity(5U);
    msg.value = 0.706889430902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.249213234937);
    msg.setSource(50795U);
    msg.setSourceEntity(130U);
    msg.setDestination(25021U);
    msg.setDestinationEntity(151U);
    msg.value = 0.749511320955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.893962266415);
    msg.setSource(64373U);
    msg.setSourceEntity(147U);
    msg.setDestination(15060U);
    msg.setDestinationEntity(210U);
    msg.value = 0.681443171811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.324913907702);
    msg.setSource(26843U);
    msg.setSourceEntity(25U);
    msg.setDestination(20217U);
    msg.setDestinationEntity(95U);
    msg.value = 0.350232654639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.352687345267);
    msg.setSource(48799U);
    msg.setSourceEntity(183U);
    msg.setDestination(34861U);
    msg.setDestinationEntity(117U);
    msg.value = 0.0360693413119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.118078041597);
    msg.setSource(64355U);
    msg.setSourceEntity(172U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 2482200418U;
    msg.start_lat = 0.358134367165;
    msg.start_lon = 0.908654167109;
    msg.start_z = 0.767892472584;
    msg.start_z_units = 6U;
    msg.end_lat = 0.49057700347;
    msg.end_lon = 0.660458266589;
    msg.end_z = 0.690177245861;
    msg.end_z_units = 247U;
    msg.speed = 0.596110172422;
    msg.speed_units = 134U;
    msg.lradius = 0.0401569347701;
    msg.flags = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.270082268273);
    msg.setSource(28461U);
    msg.setSourceEntity(8U);
    msg.setDestination(23817U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 3351832317U;
    msg.start_lat = 0.638291745189;
    msg.start_lon = 0.713276296168;
    msg.start_z = 0.418733898916;
    msg.start_z_units = 171U;
    msg.end_lat = 0.654256296434;
    msg.end_lon = 0.764211571511;
    msg.end_z = 0.628821050415;
    msg.end_z_units = 119U;
    msg.speed = 0.487844000239;
    msg.speed_units = 211U;
    msg.lradius = 0.745463679783;
    msg.flags = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.474587583959);
    msg.setSource(42455U);
    msg.setSourceEntity(144U);
    msg.setDestination(32868U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 2682830097U;
    msg.start_lat = 0.772205637071;
    msg.start_lon = 0.842508814502;
    msg.start_z = 0.0422167099176;
    msg.start_z_units = 44U;
    msg.end_lat = 0.216701840926;
    msg.end_lon = 0.0173774169186;
    msg.end_z = 0.31387657552;
    msg.end_z_units = 246U;
    msg.speed = 0.62063298069;
    msg.speed_units = 154U;
    msg.lradius = 0.881935131924;
    msg.flags = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.676664154884);
    msg.setSource(31832U);
    msg.setSourceEntity(71U);
    msg.setDestination(938U);
    msg.setDestinationEntity(89U);
    msg.x = 0.343838125682;
    msg.y = 0.201244977891;
    msg.z = 0.585951038789;
    msg.k = 0.662399435722;
    msg.m = 0.456658881794;
    msg.n = 0.471326279747;
    msg.flags = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.496941888955);
    msg.setSource(48087U);
    msg.setSourceEntity(29U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(65U);
    msg.x = 0.175841495651;
    msg.y = 0.755701908088;
    msg.z = 0.916223225825;
    msg.k = 0.276370113634;
    msg.m = 0.468204750207;
    msg.n = 0.174944710352;
    msg.flags = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.802025529071);
    msg.setSource(11198U);
    msg.setSourceEntity(1U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(81U);
    msg.x = 0.723315460912;
    msg.y = 0.504357781109;
    msg.z = 0.206244086022;
    msg.k = 0.383095795537;
    msg.m = 0.275446734331;
    msg.n = 0.0567177974215;
    msg.flags = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.808340696093);
    msg.setSource(32808U);
    msg.setSourceEntity(87U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0120859341861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.0276790784843);
    msg.setSource(15751U);
    msg.setSourceEntity(177U);
    msg.setDestination(62764U);
    msg.setDestinationEntity(179U);
    msg.value = 0.794653248041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.689545338105);
    msg.setSource(62925U);
    msg.setSourceEntity(160U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(57U);
    msg.value = 0.80396613766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.877413912427);
    msg.setSource(24613U);
    msg.setSourceEntity(97U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(235U);
    msg.u = 0.832569164779;
    msg.v = 0.786679335492;
    msg.w = 0.712837772241;
    msg.p = 0.491239256628;
    msg.q = 0.290630370282;
    msg.r = 0.517910233797;
    msg.flags = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.212663609655);
    msg.setSource(19772U);
    msg.setSourceEntity(173U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(203U);
    msg.u = 0.736454640464;
    msg.v = 0.201848239342;
    msg.w = 0.434400727797;
    msg.p = 0.869160251353;
    msg.q = 0.528259764127;
    msg.r = 0.848148937196;
    msg.flags = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.38807456096);
    msg.setSource(33053U);
    msg.setSourceEntity(142U);
    msg.setDestination(20552U);
    msg.setDestinationEntity(187U);
    msg.u = 0.53274197718;
    msg.v = 0.409447717824;
    msg.w = 0.594864339739;
    msg.p = 0.0640484717751;
    msg.q = 0.336847352196;
    msg.r = 0.11940337709;
    msg.flags = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.50300819253);
    msg.setSource(28001U);
    msg.setSourceEntity(123U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 4080382242U;
    msg.start_lat = 0.532839497208;
    msg.start_lon = 0.890867884664;
    msg.start_z = 0.861614131844;
    msg.start_z_units = 242U;
    msg.end_lat = 0.298651298876;
    msg.end_lon = 0.247887422603;
    msg.end_z = 0.305925274056;
    msg.end_z_units = 33U;
    msg.lradius = 0.997771382778;
    msg.flags = 237U;
    msg.x = 0.905437387999;
    msg.y = 0.232240681705;
    msg.z = 0.319865192569;
    msg.vx = 0.896408725317;
    msg.vy = 0.982708879212;
    msg.vz = 0.246768288326;
    msg.course_error = 0.421382582413;
    msg.eta = 57361U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.648479771106);
    msg.setSource(38319U);
    msg.setSourceEntity(58U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 14918181U;
    msg.start_lat = 0.182909622272;
    msg.start_lon = 0.912654059729;
    msg.start_z = 0.0970947337982;
    msg.start_z_units = 68U;
    msg.end_lat = 0.734035599858;
    msg.end_lon = 0.00404824429764;
    msg.end_z = 0.231799963612;
    msg.end_z_units = 75U;
    msg.lradius = 0.190766582765;
    msg.flags = 214U;
    msg.x = 0.418669177975;
    msg.y = 0.269355150126;
    msg.z = 0.505643737657;
    msg.vx = 0.409232630094;
    msg.vy = 0.346553727815;
    msg.vz = 0.777107450145;
    msg.course_error = 0.0659619221018;
    msg.eta = 33343U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.484022404216);
    msg.setSource(8323U);
    msg.setSourceEntity(172U);
    msg.setDestination(51835U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 3842381428U;
    msg.start_lat = 0.156306170917;
    msg.start_lon = 0.50001908074;
    msg.start_z = 0.98635194562;
    msg.start_z_units = 239U;
    msg.end_lat = 0.224914306312;
    msg.end_lon = 0.11165254192;
    msg.end_z = 0.211567019727;
    msg.end_z_units = 101U;
    msg.lradius = 0.49389636664;
    msg.flags = 234U;
    msg.x = 0.618079967735;
    msg.y = 0.291921189022;
    msg.z = 0.96152698013;
    msg.vx = 0.594926888705;
    msg.vy = 0.945170262544;
    msg.vz = 0.548966692331;
    msg.course_error = 0.0609098052695;
    msg.eta = 10236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.369434312539);
    msg.setSource(61989U);
    msg.setSourceEntity(48U);
    msg.setDestination(35209U);
    msg.setDestinationEntity(234U);
    msg.k = 0.642872218122;
    msg.m = 0.227651677715;
    msg.n = 0.502916623645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.482252052281);
    msg.setSource(11556U);
    msg.setSourceEntity(235U);
    msg.setDestination(28520U);
    msg.setDestinationEntity(28U);
    msg.k = 0.739191388799;
    msg.m = 0.102829644517;
    msg.n = 0.830978785802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.112013656514);
    msg.setSource(5749U);
    msg.setSourceEntity(182U);
    msg.setDestination(51952U);
    msg.setDestinationEntity(229U);
    msg.k = 0.479857947453;
    msg.m = 0.0266894507937;
    msg.n = 0.382938260084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.37102863536);
    msg.setSource(55160U);
    msg.setSourceEntity(61U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(215U);
    msg.p = 0.731734332047;
    msg.i = 0.768954063149;
    msg.d = 0.0237596354512;
    msg.a = 0.499891263692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.433579021716);
    msg.setSource(40003U);
    msg.setSourceEntity(210U);
    msg.setDestination(46206U);
    msg.setDestinationEntity(253U);
    msg.p = 0.987305545656;
    msg.i = 0.440589521139;
    msg.d = 0.938808602057;
    msg.a = 0.337918688713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.313322894046);
    msg.setSource(63109U);
    msg.setSourceEntity(231U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(141U);
    msg.p = 0.912537850338;
    msg.i = 0.373577542432;
    msg.d = 0.192375529873;
    msg.a = 0.60683778647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.772467246202);
    msg.setSource(54237U);
    msg.setSourceEntity(114U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(119U);
    msg.op = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.550020524142);
    msg.setSource(46561U);
    msg.setSourceEntity(141U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(171U);
    msg.op = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.643641521454);
    msg.setSource(30456U);
    msg.setSourceEntity(82U);
    msg.setDestination(51149U);
    msg.setDestinationEntity(178U);
    msg.op = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.174115895169);
    msg.setSource(5057U);
    msg.setSourceEntity(158U);
    msg.setDestination(18787U);
    msg.setDestinationEntity(90U);
    msg.x = 0.862780624557;
    msg.y = 0.0157488086998;
    msg.z = 0.683801014271;
    msg.vx = 0.540682664355;
    msg.vy = 0.473181389;
    msg.vz = 0.947236762234;
    msg.ax = 0.821281585075;
    msg.ay = 0.508682780216;
    msg.az = 0.24133111292;
    msg.flags = 8053U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.363095807695);
    msg.setSource(32447U);
    msg.setSourceEntity(205U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(181U);
    msg.x = 0.0790271825595;
    msg.y = 0.7054971685;
    msg.z = 0.435617332037;
    msg.vx = 0.541602749843;
    msg.vy = 0.639934890152;
    msg.vz = 0.742902275914;
    msg.ax = 0.573196428678;
    msg.ay = 0.992369826148;
    msg.az = 0.215045162427;
    msg.flags = 50206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.826917910564);
    msg.setSource(51180U);
    msg.setSourceEntity(29U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(44U);
    msg.x = 0.680496423059;
    msg.y = 0.961737637495;
    msg.z = 0.593871517802;
    msg.vx = 0.541871896693;
    msg.vy = 0.189439169552;
    msg.vz = 0.939632900788;
    msg.ax = 0.0661819141137;
    msg.ay = 0.718697752522;
    msg.az = 0.100249368338;
    msg.flags = 5092U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.359053784269);
    msg.setSource(15485U);
    msg.setSourceEntity(254U);
    msg.setDestination(30141U);
    msg.setDestinationEntity(201U);
    msg.value = 0.247707800018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.273800978309);
    msg.setSource(16045U);
    msg.setSourceEntity(6U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(163U);
    msg.value = 0.450293966738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.562210263808);
    msg.setSource(47010U);
    msg.setSourceEntity(182U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(173U);
    msg.value = 0.211095566836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.906596012792);
    msg.setSource(13300U);
    msg.setSourceEntity(21U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(92U);
    msg.timeout = 18207U;
    msg.lat = 0.454324602753;
    msg.lon = 0.475089711408;
    msg.z = 0.153918518668;
    msg.z_units = 212U;
    msg.speed = 0.300301177063;
    msg.speed_units = 194U;
    msg.roll = 0.981762366655;
    msg.pitch = 0.347469532796;
    msg.yaw = 0.396289176416;
    msg.custom.assign("VWJFWPJBZAMHVRLUIATSUOUVVTTQPIMRDMCJKFBKUZVXENNDZWTSQPECBERPVBHKESZLKMETFECHMUWXDPBJKTOKXFPZAVWGNTUBAXVQWAZGJAQNXUSOFJGIHGUALRHDIOIOFJPSCMAXIGGQPBXAFAQWEICKLOLHBJYLEZHRVYHNQFJCDNDCNIGCJCLUGYKSRFWSOQKYRDBSGOEFPYKLXXDYIMIGCSMWMNQYNZBXQWTYLOZTTVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.0438394155612);
    msg.setSource(42373U);
    msg.setSourceEntity(249U);
    msg.setDestination(10032U);
    msg.setDestinationEntity(242U);
    msg.timeout = 3075U;
    msg.lat = 0.675547912137;
    msg.lon = 0.214397379933;
    msg.z = 0.448549778436;
    msg.z_units = 52U;
    msg.speed = 0.924379910353;
    msg.speed_units = 118U;
    msg.roll = 0.652319683468;
    msg.pitch = 0.82980551236;
    msg.yaw = 0.319362479184;
    msg.custom.assign("YYKMINHMWCLSIBEGQAZLPXONHFVGQMZQQHNTKQCHKXHPSCCXWCJKVJWPWAZVLDGZUMJKPAUNFJOCWGIHMSGKVHIRPTUMEMJIAYBKVNYLIJUIFVVPLOOJJTOAXKBHRTNTAFQISYRZRKHQFWTJAWQPVFBCAFMEMSSZAQTDBDSBXEYYBSDYBFRINOSLRWRPXUOOGZEXRUGDZUDPXEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.696838352979);
    msg.setSource(62838U);
    msg.setSourceEntity(224U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(203U);
    msg.timeout = 54778U;
    msg.lat = 0.313903858304;
    msg.lon = 0.198185944661;
    msg.z = 0.506106430393;
    msg.z_units = 95U;
    msg.speed = 0.851129580723;
    msg.speed_units = 183U;
    msg.roll = 0.0939042915278;
    msg.pitch = 0.667058866828;
    msg.yaw = 0.344708512151;
    msg.custom.assign("QIFVLEZZXNXWJVXMFBAZCFVCORCMZJKRGOUOVLVWIWGWYQYADQEGSRENTLNNZAYFHQBJMMUCHFMZXXZEJNBLLGYHPMHHUSAEBTAZQGTCDLZDDOSIERCCRRZIUPKOQMONNWBXYPBHJDJYELKOPSKSUUHDGMPWEIUBDHFLHOJTSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.354274352329);
    msg.setSource(3641U);
    msg.setSourceEntity(112U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(131U);
    msg.timeout = 23573U;
    msg.lat = 0.455882249643;
    msg.lon = 0.00789632658997;
    msg.z = 0.648424724133;
    msg.z_units = 123U;
    msg.speed = 0.799503719506;
    msg.speed_units = 46U;
    msg.duration = 12445U;
    msg.radius = 0.695136410013;
    msg.flags = 186U;
    msg.custom.assign("DZPYEXKMSAOQJNMJYHXPULGIPZZPBHHSCZFSCJELZBDYWJUINSWGUVZFDCFNTNHERCPHSNIRYGMNTGUKUVNHWZLVBKRATGKMWSGLSGEDAEQFIBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.104931342582);
    msg.setSource(53897U);
    msg.setSourceEntity(67U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(172U);
    msg.timeout = 12620U;
    msg.lat = 0.133781008625;
    msg.lon = 0.185892297654;
    msg.z = 0.573369623268;
    msg.z_units = 15U;
    msg.speed = 0.672721187273;
    msg.speed_units = 250U;
    msg.duration = 45511U;
    msg.radius = 0.50197746059;
    msg.flags = 167U;
    msg.custom.assign("BVEDQCXKYIFLNGLOHURTVYBUBCOBURYORMIDPUWNPKOZRTZJPCRONJOZKDHMWWIUWGVCINMYTEQBBXAKSHCKLSZTYNCZIOYMDNVFXPEVFEPGAXFPBHGSVSTWYWPAFIRYADLJMTZUNLHAEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.698929522945);
    msg.setSource(17730U);
    msg.setSourceEntity(160U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(12U);
    msg.timeout = 23862U;
    msg.lat = 0.760487259364;
    msg.lon = 0.876057263785;
    msg.z = 0.110444646639;
    msg.z_units = 12U;
    msg.speed = 0.452014597902;
    msg.speed_units = 20U;
    msg.duration = 16693U;
    msg.radius = 0.624605832813;
    msg.flags = 107U;
    msg.custom.assign("FTWSDHINVVOYBPEDNZBLTWAFXYHXTLOPCPWGCOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.359240223396);
    msg.setSource(28731U);
    msg.setSourceEntity(116U);
    msg.setDestination(27015U);
    msg.setDestinationEntity(95U);
    msg.custom.assign("FYGUAEXPQJFKVYHJKNHNPWBIEADLEJUNIBOFEXOLQMYZSBGZRYIADPCRGUUZTWKRZOVDVQKMESTMXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.331316811118);
    msg.setSource(11534U);
    msg.setSourceEntity(113U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(234U);
    msg.custom.assign("IZLXNWQPTVHYMZDTDJPFRKTNMXEBAMSFYORAVPMIVFISRITIRJVOFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.567987887113);
    msg.setSource(23097U);
    msg.setSourceEntity(17U);
    msg.setDestination(12890U);
    msg.setDestinationEntity(170U);
    msg.custom.assign("TCDERFJVAZBVFNGFLBQFGJTGVQJMRUWNGHAWIRMTBCKAYAZCQGKKEZKGKYISAKHHCEMZUDIYDOEMWFGFMOQXOXOBFNUUIZBFBCSVNFYPNPMBTSDPLNEAPVVQXAIZQUYKRGXSMHYWVTPSJHEBWYBCYKUUFQHQSXOPRKTYNRWOCWDLTAUPSXNZLHAPJLHOPXUXMQIHLUZMTWZLDRRIKILXCNHXDJSJLVDDCYRVOVLMWASEWRSCDJOTJIIGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.15025339866);
    msg.setSource(64000U);
    msg.setSourceEntity(92U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(12U);
    msg.timeout = 56802U;
    msg.lat = 0.699026649228;
    msg.lon = 0.624131631434;
    msg.z = 0.267376289088;
    msg.z_units = 110U;
    msg.duration = 30600U;
    msg.speed = 0.601941457154;
    msg.speed_units = 89U;
    msg.type = 98U;
    msg.radius = 0.837684526228;
    msg.length = 0.0250584005609;
    msg.bearing = 0.642476119035;
    msg.direction = 205U;
    msg.custom.assign("VAWDGOXUTPRWIHTIYXXEWVTYCUUBHYABPVLWEOWVITAFKSPOMLJIVJQWKPHAFVARLSGSZYOVEYXLYMJDETHTQGVXLORVMAWSMIKSHCDOGGJCUCWFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.280465472978);
    msg.setSource(58163U);
    msg.setSourceEntity(165U);
    msg.setDestination(1216U);
    msg.setDestinationEntity(3U);
    msg.timeout = 35242U;
    msg.lat = 0.693436999413;
    msg.lon = 0.622728658131;
    msg.z = 0.870112052346;
    msg.z_units = 89U;
    msg.duration = 6282U;
    msg.speed = 0.0660554079646;
    msg.speed_units = 147U;
    msg.type = 56U;
    msg.radius = 0.475445315377;
    msg.length = 0.381335812373;
    msg.bearing = 0.921217947233;
    msg.direction = 236U;
    msg.custom.assign("XZRIDRPHLIBSDKRPNPLNLUZNTREWUVWVRNQYJNHHINPYLYOQIMAKHZLVLPEALWIMGXEACGFPOEVVKULRHBAKFTDJVBACOSZTJGBXTQPIWXWECYXSRQKHKMGZUVOKDNHTFZSLAIYJXAOSUCBJXUYNHPSCCEUNQJMJVFCBRTCDGFFTEMOFSTBIYXKBFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.593975791887);
    msg.setSource(436U);
    msg.setSourceEntity(248U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(63U);
    msg.timeout = 12769U;
    msg.lat = 0.449515000566;
    msg.lon = 0.993682559412;
    msg.z = 0.596498263888;
    msg.z_units = 172U;
    msg.duration = 59034U;
    msg.speed = 0.646777247218;
    msg.speed_units = 200U;
    msg.type = 149U;
    msg.radius = 0.740014403929;
    msg.length = 0.309294816583;
    msg.bearing = 0.309321285563;
    msg.direction = 182U;
    msg.custom.assign("NDVCUOKYICYEGUTRJZHOEXYFHEKTJKWIQQCKYMPXEKVNHGOEOPGWVDEUQVMFHHBMGRJZKUAJHDALVQDJNAWBDTZOZNPNVXRSDPESLPGWBIXPYINBJDLAWRABMPRCQTZMTFUXNOMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.744716469351);
    msg.setSource(37479U);
    msg.setSourceEntity(153U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(119U);
    msg.duration = 6221U;
    msg.custom.assign("ZHVAWUDMRWIRGVAFLSWEXFHUTWMPHFLRSRERIBGNWGVZXFKJAOBIWLQCJCVELBXUQWIMKFOPINLPJQJXRTEKMFAYYNIDNDIIXIKQOVYHXFQYYNGFLMTHTJTDRKQCDHBZVHAPTMOEJOEJUZBUSGOIJGCLUONPYCKBTOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.290203884019);
    msg.setSource(17526U);
    msg.setSourceEntity(50U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(26U);
    msg.duration = 36484U;
    msg.custom.assign("JFSOOUKGLAWGMWJZRYQJDRNOIBFYILARFNCUATVQRIQXGHPGQLRAXWBYKRVZIFPFRVFHPACCGWBTUQIJFDKONVKVABBHSMUQKPDCXREHYCBNTBPVYLHUHB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.12607059926);
    msg.setSource(56672U);
    msg.setSourceEntity(157U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(53U);
    msg.duration = 63075U;
    msg.custom.assign("LJKRFBKMOUUIEGJRUHSRMUQLUFVCGAFFCVIOUVFGDPZABFMWDTNURPAZQVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.481225954777);
    msg.setSource(11384U);
    msg.setSourceEntity(5U);
    msg.setDestination(37203U);
    msg.setDestinationEntity(206U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.154311729325;
    tmp_msg_0.speed_units = 40U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45578U;
    msg.custom.assign("OGRAIBBXCOTCZJFQXEAAEKCGZNASZVGJUNQRXQXVTYIHDPRDPKVZAOGMWVGXIYYSJQVZNXKAWHAUNTOJEPYQRXIBZTKMRLIUETSSLSWIKKVYCIJHPSTDWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.197127413295);
    msg.setSource(54786U);
    msg.setSourceEntity(39U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(132U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.372738450818;
    msg.control.set(tmp_msg_0);
    msg.duration = 32903U;
    msg.custom.assign("HGCMRDVEYNPUMVPSBTFXTEOHUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.474908042804);
    msg.setSource(14451U);
    msg.setSourceEntity(153U);
    msg.setDestination(57866U);
    msg.setDestinationEntity(229U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 634279809U;
    tmp_msg_0.start_lat = 0.33327723181;
    tmp_msg_0.start_lon = 0.0527480914695;
    tmp_msg_0.start_z = 0.000691190892071;
    tmp_msg_0.start_z_units = 224U;
    tmp_msg_0.end_lat = 0.826996130262;
    tmp_msg_0.end_lon = 0.297142842885;
    tmp_msg_0.end_z = 0.218205303461;
    tmp_msg_0.end_z_units = 8U;
    tmp_msg_0.speed = 0.931937696671;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.lradius = 0.157762504727;
    tmp_msg_0.flags = 137U;
    msg.control.set(tmp_msg_0);
    msg.duration = 59777U;
    msg.custom.assign("NTAIZWMFIXGWYOXQENBGZYTKFVQOPHKPLTIVGCJEJQCXBYQFCPTPZKNHZTKHQDATTJBRJNOGAPFHBFUWYVIJEVZUQSTYGINFAFSRWCUPLSCSRUDCGZVEMEGLJBAHQWPVVDSKQAGPXESJUKWDRVXMZOPCSJDYLNAWMYKPALOUVEEXMZMQOWBMRUIBWIOAHICXDNBSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.372554387111);
    msg.setSource(65016U);
    msg.setSourceEntity(92U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(100U);
    msg.timeout = 46223U;
    msg.lat = 0.298317102757;
    msg.lon = 0.277915343826;
    msg.z = 0.751452360867;
    msg.z_units = 217U;
    msg.speed = 0.304429327938;
    msg.speed_units = 242U;
    msg.bearing = 0.575682006639;
    msg.cross_angle = 0.954658740927;
    msg.width = 0.00121571149276;
    msg.length = 0.305556295736;
    msg.hstep = 0.97965417346;
    msg.coff = 189U;
    msg.alternation = 238U;
    msg.flags = 180U;
    msg.custom.assign("JBMKKUDZLNSQIVVUEZOZQQHYULTPXGYZBBTMJLJLWNUWUAOITPHEVLADJTCLFHGZMJRNFIHLHAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.432695720372);
    msg.setSource(32890U);
    msg.setSourceEntity(211U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(139U);
    msg.timeout = 13076U;
    msg.lat = 0.127410774616;
    msg.lon = 0.846788356209;
    msg.z = 0.508119333127;
    msg.z_units = 10U;
    msg.speed = 0.618916110133;
    msg.speed_units = 144U;
    msg.bearing = 0.776762141141;
    msg.cross_angle = 0.782923553552;
    msg.width = 0.575637990334;
    msg.length = 0.521011518759;
    msg.hstep = 0.0701395859521;
    msg.coff = 81U;
    msg.alternation = 97U;
    msg.flags = 228U;
    msg.custom.assign("NXTTHVMDXVYPVZARAJVLGDGJZNTHPRAWTEMXKQZPAWWLKOCDJEUJJTEJKTIPGDRWZEMMTTZNFIAMJEAKVRCPYXOQCAOQCUSYPCEOWNHFQFYRBWUOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.703209494002);
    msg.setSource(2143U);
    msg.setSourceEntity(131U);
    msg.setDestination(38252U);
    msg.setDestinationEntity(80U);
    msg.timeout = 3934U;
    msg.lat = 0.108074523729;
    msg.lon = 0.543503509343;
    msg.z = 0.0655184915281;
    msg.z_units = 246U;
    msg.speed = 0.843195283326;
    msg.speed_units = 12U;
    msg.bearing = 0.587308969218;
    msg.cross_angle = 0.956256327301;
    msg.width = 0.422596255755;
    msg.length = 0.392783969986;
    msg.hstep = 0.52621664858;
    msg.coff = 101U;
    msg.alternation = 177U;
    msg.flags = 210U;
    msg.custom.assign("ZMSFXXGEIONWQXGDTAMIPGCQSORMKVYYOERORLUSDXDNLWFVTWEIJIFXAIIHWSDGJBDPRFJHAEJZETCLPHOSRFMNYZDALROJCQVNGZTCUKBETYJQSGUCZMCDOWNQSKGECMHPZBKXWYRXPDCZZFBYTGADUNVKVLYAHPUMHGQPKAWRSLWUMTNLBRPJSCTHQTYVBJBIIBOFUDYKEKJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.646795845201);
    msg.setSource(30510U);
    msg.setSourceEntity(126U);
    msg.setDestination(34457U);
    msg.setDestinationEntity(241U);
    msg.timeout = 12854U;
    msg.lat = 0.880050934385;
    msg.lon = 0.839527548415;
    msg.z = 0.587888026915;
    msg.z_units = 234U;
    msg.speed = 0.19695142116;
    msg.speed_units = 182U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.287515994384;
    tmp_msg_0.y = 0.534517242333;
    tmp_msg_0.z = 0.0916322751966;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FUYLFIQTDCJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.348079316797);
    msg.setSource(31477U);
    msg.setSourceEntity(100U);
    msg.setDestination(59871U);
    msg.setDestinationEntity(34U);
    msg.timeout = 28210U;
    msg.lat = 0.11886901186;
    msg.lon = 0.486121783362;
    msg.z = 0.426809510972;
    msg.z_units = 0U;
    msg.speed = 0.274310723635;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0438908031203;
    tmp_msg_0.y = 0.752425483083;
    tmp_msg_0.z = 0.0155289847826;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VEHJAOXBMEUGZZSAHABHWVRFORKBYTWPNTQFEPVPCIHLZGSFGRHLANGIUFDGIUOUBKMJUFLOKGXZBSRBRNPLTSXMRKQUGXLSINOQZAEFRCQTAYNNNCMEOLORKDVTCTXYDMCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.984495428153);
    msg.setSource(41338U);
    msg.setSourceEntity(68U);
    msg.setDestination(53764U);
    msg.setDestinationEntity(75U);
    msg.timeout = 47101U;
    msg.lat = 0.49422642618;
    msg.lon = 0.945748553229;
    msg.z = 0.633956899374;
    msg.z_units = 129U;
    msg.speed = 0.977644917697;
    msg.speed_units = 141U;
    msg.custom.assign("LXJTSETTIYDGFZXLRJSHNPNSGKSGGLNHYQQJBWJYVKVPJLCAMBFCETOBGBPFFTIFSCFPTOZLCZWLIRMMDTVXJNXUZQDECUREZUSWRZXQASMLEVZWBHVWDXBKGIHTUYNARIZGRHRWEHOZAQAKYKLOHJPVBOMLXEMQMGYDJQGUACABKJNUNPHES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0146929987687);
    msg.setSource(50997U);
    msg.setSourceEntity(75U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(230U);
    msg.x = 0.290207453261;
    msg.y = 0.197596671731;
    msg.z = 0.778877097911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0149628302487);
    msg.setSource(31241U);
    msg.setSourceEntity(25U);
    msg.setDestination(22142U);
    msg.setDestinationEntity(222U);
    msg.x = 0.25140750851;
    msg.y = 0.765634351726;
    msg.z = 0.215789771215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.783996846525);
    msg.setSource(52331U);
    msg.setSourceEntity(14U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(243U);
    msg.x = 0.6300005072;
    msg.y = 0.214397687122;
    msg.z = 0.103799027931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.998208273796);
    msg.setSource(11211U);
    msg.setSourceEntity(243U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(18U);
    msg.timeout = 43011U;
    msg.lat = 0.212186280365;
    msg.lon = 0.223039921716;
    msg.z = 0.608866921682;
    msg.z_units = 119U;
    msg.amplitude = 0.605988575592;
    msg.pitch = 0.00880557330456;
    msg.speed = 0.00507380594216;
    msg.speed_units = 57U;
    msg.custom.assign("FMBTXDWGUABOXUQIRLQSCJHZIBQCJYDFKLYJQAQXSRZOYIKGBNAUXFHGOKMVZJAFSUNIVYGYWNYNSQPENXOWZCPPAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.28877884659);
    msg.setSource(51484U);
    msg.setSourceEntity(15U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(26U);
    msg.timeout = 30136U;
    msg.lat = 0.398481857171;
    msg.lon = 0.702494868688;
    msg.z = 0.25146551915;
    msg.z_units = 39U;
    msg.amplitude = 0.901648383488;
    msg.pitch = 0.742614234932;
    msg.speed = 0.560691491394;
    msg.speed_units = 52U;
    msg.custom.assign("AJQLGPTLQGSMSHGYQBFMNKSXAWMZNWUVSZWDWMLDIFWRVENSAQBTSMHANFOKXPNPUZBJQLXVIQYVXCHZQWFIMJEIHCFUBJRORNOLSEONUTGDWCCKJZJKFLDFKHZCVUEOGIVEKZAOPXESHMDOLRTBRWTXLNRPGCILXERGPTQXBKUIXAUNYIUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.734116576088);
    msg.setSource(15029U);
    msg.setSourceEntity(117U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(218U);
    msg.timeout = 51253U;
    msg.lat = 0.7218215585;
    msg.lon = 0.478504735983;
    msg.z = 0.189634755392;
    msg.z_units = 163U;
    msg.amplitude = 0.224688619527;
    msg.pitch = 0.951201522123;
    msg.speed = 0.32728201727;
    msg.speed_units = 155U;
    msg.custom.assign("FPPKFJALNBKEGYQKRRZWUOTLWZOWPRMHVLZTBVUNMOXPEBIZKNIFTSDJFWGCIQZXGKBGMXGCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.420808937354);
    msg.setSource(8614U);
    msg.setSourceEntity(232U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.438270221894);
    msg.setSource(54070U);
    msg.setSourceEntity(109U);
    msg.setDestination(59674U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.355835327486);
    msg.setSource(25630U);
    msg.setSourceEntity(216U);
    msg.setDestination(60297U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.534539721691);
    msg.setSource(21964U);
    msg.setSourceEntity(57U);
    msg.setDestination(40927U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.243131305521;
    msg.lon = 0.511942505701;
    msg.z = 0.0253894412078;
    msg.z_units = 88U;
    msg.radius = 0.663487227719;
    msg.duration = 15787U;
    msg.speed = 0.222469695344;
    msg.speed_units = 137U;
    msg.custom.assign("VAXBNJNTOVFVBDOCRMVFIAMTAQYGXPZIIZONTWCVKNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.663030408028);
    msg.setSource(8777U);
    msg.setSourceEntity(91U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.284506403104;
    msg.lon = 0.712373602993;
    msg.z = 0.803446435166;
    msg.z_units = 95U;
    msg.radius = 0.701266459379;
    msg.duration = 23268U;
    msg.speed = 0.27758098497;
    msg.speed_units = 198U;
    msg.custom.assign("IDIKDFALJNYEAWGAOQLXPEDJSWYASURJLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.536865936086);
    msg.setSource(3131U);
    msg.setSourceEntity(38U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.983673425941;
    msg.lon = 0.136253369136;
    msg.z = 0.695317668332;
    msg.z_units = 79U;
    msg.radius = 0.825746065642;
    msg.duration = 57095U;
    msg.speed = 0.401246036545;
    msg.speed_units = 205U;
    msg.custom.assign("RPPISRYUUQMGCBBLTHIKKOOFNWDRHNTOGCKPWYDMSDLWOQPPTEGJVWHSFEOGIVUCHPMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.969484945113);
    msg.setSource(21587U);
    msg.setSourceEntity(188U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(33U);
    msg.timeout = 37046U;
    msg.flags = 94U;
    msg.lat = 0.856228522974;
    msg.lon = 0.188209917008;
    msg.start_z = 0.530174561227;
    msg.start_z_units = 74U;
    msg.end_z = 0.43305142856;
    msg.end_z_units = 242U;
    msg.radius = 0.068468306693;
    msg.speed = 0.99905556287;
    msg.speed_units = 252U;
    msg.custom.assign("KNVPIEUFPLABXMSQZGTZUJSPUOBNCJCCRWPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.0366221168169);
    msg.setSource(44626U);
    msg.setSourceEntity(91U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(231U);
    msg.timeout = 58346U;
    msg.flags = 145U;
    msg.lat = 0.0145483224771;
    msg.lon = 0.670967457973;
    msg.start_z = 0.287415615397;
    msg.start_z_units = 188U;
    msg.end_z = 0.317975728476;
    msg.end_z_units = 84U;
    msg.radius = 0.759458706428;
    msg.speed = 0.132970485627;
    msg.speed_units = 43U;
    msg.custom.assign("VZEPEGOVISISGONPKCKCKPNAPBJXCAGRXXUQYJGVUTLRNQIXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.253975539192);
    msg.setSource(32721U);
    msg.setSourceEntity(75U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(17U);
    msg.timeout = 33674U;
    msg.flags = 137U;
    msg.lat = 0.355912314846;
    msg.lon = 0.734934684779;
    msg.start_z = 0.195339636278;
    msg.start_z_units = 139U;
    msg.end_z = 0.0808909342224;
    msg.end_z_units = 126U;
    msg.radius = 0.946734044234;
    msg.speed = 0.240445510799;
    msg.speed_units = 224U;
    msg.custom.assign("EFUPCVAWXQBHYQQJJIDBOBDPGNGWJBNHZLQEANYWUVMXHRSMHKYXTKPGGLDISHYBXGBLNHKZGTUQSRDTSFZVDWXSLCOEIVOSJIBMGSMUHWNYWECRTZJKRCEFZVLPKAXCANJRFDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.83130069883);
    msg.setSource(24641U);
    msg.setSourceEntity(21U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(3U);
    msg.timeout = 36638U;
    msg.lat = 0.454918860244;
    msg.lon = 0.499379900052;
    msg.z = 0.039506033603;
    msg.z_units = 56U;
    msg.speed = 0.805102262112;
    msg.speed_units = 1U;
    msg.custom.assign("XROKUTQSKBMOQGLVFYKQYCEIGWYTDBUVBAGLERZUNDPJVJSXTIZPOSEDCUTXCWLGYSEJRYGKEQSIPZJMNRHLADNQXAKWIPUIOYMMIRVUTTDGVMVBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.581015550079);
    msg.setSource(13182U);
    msg.setSourceEntity(0U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(123U);
    msg.timeout = 53105U;
    msg.lat = 0.131853075024;
    msg.lon = 0.180138739236;
    msg.z = 0.10295785094;
    msg.z_units = 135U;
    msg.speed = 0.131879016881;
    msg.speed_units = 45U;
    msg.custom.assign("UYAYFTXEGTFRDTQPBAUGVXEYHMRCYPBICGEQIXJZYVNYOONEBMLMPHYBUOKRWNILTHILLTLNLKFBYFPSWGKRFJGEJJSMSJDWAIQNAXBHGQXNDBRNEDRZDPVCEQIUDCCECAZSOVWUOBTDLHDLIZWADAYUFNSSOVFUFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.981236934327);
    msg.setSource(5373U);
    msg.setSourceEntity(97U);
    msg.setDestination(62918U);
    msg.setDestinationEntity(158U);
    msg.timeout = 41727U;
    msg.lat = 0.929071684902;
    msg.lon = 0.0672766036224;
    msg.z = 0.265907711021;
    msg.z_units = 76U;
    msg.speed = 0.34199763263;
    msg.speed_units = 167U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8085496362;
    tmp_msg_0.y = 0.97795445806;
    tmp_msg_0.z = 0.831351787056;
    tmp_msg_0.t = 0.880707529306;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZJSMJUVXMHJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.743702850936);
    msg.setSource(14812U);
    msg.setSourceEntity(242U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(232U);
    msg.x = 0.435174339593;
    msg.y = 0.255463700618;
    msg.z = 0.0160245997399;
    msg.t = 0.134314768794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.298238621419);
    msg.setSource(9706U);
    msg.setSourceEntity(22U);
    msg.setDestination(39387U);
    msg.setDestinationEntity(221U);
    msg.x = 0.848615272328;
    msg.y = 0.715522158941;
    msg.z = 0.0752291572543;
    msg.t = 0.0110078971621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.440468209316);
    msg.setSource(36890U);
    msg.setSourceEntity(189U);
    msg.setDestination(51296U);
    msg.setDestinationEntity(80U);
    msg.x = 0.884620279561;
    msg.y = 0.989461580599;
    msg.z = 0.294782013362;
    msg.t = 0.635147790624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.9973770683);
    msg.setSource(27739U);
    msg.setSourceEntity(4U);
    msg.setDestination(43854U);
    msg.setDestinationEntity(27U);
    msg.timeout = 38374U;
    msg.name.assign("JTUUHVFLEYDXJTQCWGJLZKSGICKEFDNBYTGJLNMKOKOTTAXQZXVDNHHEKJGFBQWOSWZGVMIITQCRARFBNPZCHXMZGXCUOCVYDIHSPKQWVARWDPWZDUEKEQBVRRHCMUPQGRUCFYSZAIIQDREW");
    msg.custom.assign("SPTDEOYTREBKBJHRUQLCGKITFFRQHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.044856007494);
    msg.setSource(15743U);
    msg.setSourceEntity(238U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(114U);
    msg.timeout = 4604U;
    msg.name.assign("WJHZNUCQGJHLJDTVWCMDGLMLRBZCKCYTGMUDSKCGGOOVMJMXDUVMBVVYIZZZZESSPGUNWJOWNKQAKAYBSTTBVEXWPGXCHRFBFMWPMENFX");
    msg.custom.assign("MLFODVWPNDWKJZMBQWNXQOIRCQJPUOPTKAQNFRRRNBCLEYVYLOQJADIYJXGXLXEZHJAGUAWIFPXKOGFTDVKHMAJJITSNBULCWGVNUSSHMUVVCSCRKHLLAAEPXFKHPADUNPRCLASKZTYLMBDHSMUQCSWBZINEKSHDUGUEPUNJLYSYMESMOTWIZIWBEGOFHFETXNBMQMBVQXOZEFFPOGVIYJHWXVDWRQADGKZCQTTGJTGZEYRYRTIHXVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.331671980651);
    msg.setSource(2842U);
    msg.setSourceEntity(77U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(233U);
    msg.timeout = 42092U;
    msg.name.assign("SIPSUFKRYIYYYOOYWLQWTRGNTZDHLBFJPGINOPNFCIBNXVTLOXFZGXSJXRNWGQDCMVMYYMUHWAMOAUDXBJUQPTEPIDBWKADKKVCMRCAARXHWULCBTOEOIANHVQGJFCBDPGKSAKWGEABYZKGDJDVFHRZEXRVRFITTL");
    msg.custom.assign("FPKFJQWKTYWYNRHGDWMJQBLQNGJURMBZBZMRMRTFPAPRHCKINRMXRKGZDTAOMLSFWDOQKVFVDJUNFAJNCJXHTEZGBVWOBHZAYUQPSKGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.0047213177323);
    msg.setSource(8893U);
    msg.setSourceEntity(20U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.879594353193;
    msg.lon = 0.20045716167;
    msg.z = 0.757092542399;
    msg.z_units = 61U;
    msg.speed = 0.614216359145;
    msg.speed_units = 126U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.393074979107;
    tmp_msg_0.y = 0.976421582157;
    tmp_msg_0.z = 0.0146900090476;
    tmp_msg_0.t = 0.046430893307;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 23218U;
    tmp_msg_1.off_x = 0.593674102992;
    tmp_msg_1.off_y = 0.749325759137;
    tmp_msg_1.off_z = 0.980940303072;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.879781811014;
    msg.custom.assign("DQRERHVLVUGSWDIJDPXUSBTTYKNPWUBLNOGUHAZPVQPOALVMEMBQTNRUOCWIOPNLXGIUYJQAHFXAOYCMAGSONHQRDVBBGJCVXXGVOFMERKHXYEZKUNWRUYJRFNVHZMEGKQLAXMNBYZEFRHNSYVMWXGSDKJBYDPCJWDLLTOZLJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.734581136946);
    msg.setSource(23368U);
    msg.setSourceEntity(82U);
    msg.setDestination(59630U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.414291662239;
    msg.lon = 0.358073791882;
    msg.z = 0.495612680338;
    msg.z_units = 251U;
    msg.speed = 0.987699105491;
    msg.speed_units = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64956U;
    tmp_msg_0.off_x = 0.564401717232;
    tmp_msg_0.off_y = 0.551577111765;
    tmp_msg_0.off_z = 0.975738403161;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.357945731206;
    msg.custom.assign("VAHCZWYAAOVHTPGFENGWEEJQMNLDYNZXIKYGUKDSRIXTOWNGMKFHBPRVWIPAWAPSTEJGXRZIUQIVEHIICDFRGUCVNHGWRKSQBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.763097070728);
    msg.setSource(34473U);
    msg.setSourceEntity(228U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.269629521642;
    msg.lon = 0.272465293816;
    msg.z = 0.65604978823;
    msg.z_units = 20U;
    msg.speed = 0.75817412036;
    msg.speed_units = 172U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64857U;
    tmp_msg_0.off_x = 0.559586521893;
    tmp_msg_0.off_y = 0.678404158455;
    tmp_msg_0.off_z = 0.223034844795;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.343953930143;
    msg.custom.assign("QGZHBPUAZZVCCJERIMCSTLHWAQJJRLWUWUDONTECCBYOMDIXGWKZACDNUFAULJZSGXDUPEHKZJOFBDTIKRNPDSOREJEOQYLERCUVIVIDFBRQLNRGYHXXQJMYOFXHCQGMFAAKFJVRVDZPFLKQSLPAATIVSQGGHSIQBMSXOVYTSOJBNOPKGGNTPFEGWQBRNNWYEBKBWYOBDLZLIZCVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.150738126634);
    msg.setSource(1201U);
    msg.setSourceEntity(114U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(72U);
    msg.vid = 53289U;
    msg.off_x = 0.190142620433;
    msg.off_y = 0.349149561191;
    msg.off_z = 0.705167844748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.800762758496);
    msg.setSource(32384U);
    msg.setSourceEntity(137U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(187U);
    msg.vid = 14229U;
    msg.off_x = 0.298850415835;
    msg.off_y = 0.690537497836;
    msg.off_z = 0.029879391998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.324803057258);
    msg.setSource(53999U);
    msg.setSourceEntity(67U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(207U);
    msg.vid = 48291U;
    msg.off_x = 0.631850797305;
    msg.off_y = 0.918280272038;
    msg.off_z = 0.756803879105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.916027276118);
    msg.setSource(61817U);
    msg.setSourceEntity(46U);
    msg.setDestination(35316U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.150460265223);
    msg.setSource(56960U);
    msg.setSourceEntity(47U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.187054123311);
    msg.setSource(46836U);
    msg.setSourceEntity(184U);
    msg.setDestination(26912U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.635496137306);
    msg.setSource(58076U);
    msg.setSourceEntity(56U);
    msg.setDestination(24658U);
    msg.setDestinationEntity(157U);
    msg.mid = 46519U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.318615766319);
    msg.setSource(33894U);
    msg.setSourceEntity(140U);
    msg.setDestination(4554U);
    msg.setDestinationEntity(2U);
    msg.mid = 50047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.10009268982);
    msg.setSource(202U);
    msg.setSourceEntity(198U);
    msg.setDestination(32671U);
    msg.setDestinationEntity(74U);
    msg.mid = 16741U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.327526537509);
    msg.setSource(52578U);
    msg.setSourceEntity(43U);
    msg.setDestination(56195U);
    msg.setDestinationEntity(54U);
    msg.state = 188U;
    msg.eta = 44015U;
    msg.info.assign("HZESTNLEURMRZEXIOVGHFQUYIWGUFRTLBBUOBEJTXXMIHAEXHSYAVOOHDUCQRNGGCQTNDCLXJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.295521679844);
    msg.setSource(9263U);
    msg.setSourceEntity(250U);
    msg.setDestination(20984U);
    msg.setDestinationEntity(133U);
    msg.state = 40U;
    msg.eta = 47862U;
    msg.info.assign("RUMDUCQQWYDBVZGADGPSLFFYPWJPTZVGSPZLMDDIJOHTIHAFVBEXCLVQTZVONKOCOTNEBZBXOISHXWNKIEVYAQAUXTYTMPZNHALRSBXNPJMSBJMVJGEQDXBTUFBDCHAKQRUYQQCKLRBCEGIFCXQKJIVGNHDKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.169378738127);
    msg.setSource(64511U);
    msg.setSourceEntity(213U);
    msg.setDestination(16945U);
    msg.setDestinationEntity(250U);
    msg.state = 0U;
    msg.eta = 5103U;
    msg.info.assign("KTFWROIMCGLYXVTZPHKESTYLMETZYSBQYGXXAJHDBMIWCACEGFFPVMERUUCFGHGNZIYDHQEMNHKAIYHOJUIPXBPWIEOVNRLQQFBFOXXKJTQAXNKURUKSORBAAESMWMWHTBRGWPPYSPBPKDQICGZGCIVSZJWVTDAGJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.0255060296602);
    msg.setSource(50253U);
    msg.setSourceEntity(194U);
    msg.setDestination(4266U);
    msg.setDestinationEntity(56U);
    msg.system = 23723U;
    msg.duration = 52965U;
    msg.speed = 0.428773236272;
    msg.speed_units = 185U;
    msg.x = 0.779968526336;
    msg.y = 0.724000917483;
    msg.z = 0.990142140973;
    msg.z_units = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.147099267751);
    msg.setSource(14860U);
    msg.setSourceEntity(135U);
    msg.setDestination(65405U);
    msg.setDestinationEntity(138U);
    msg.system = 26636U;
    msg.duration = 41027U;
    msg.speed = 0.364493627918;
    msg.speed_units = 231U;
    msg.x = 0.456129862361;
    msg.y = 0.51496005478;
    msg.z = 0.650823535368;
    msg.z_units = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.231009198436);
    msg.setSource(48644U);
    msg.setSourceEntity(160U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(210U);
    msg.system = 22117U;
    msg.duration = 58514U;
    msg.speed = 0.891710220501;
    msg.speed_units = 48U;
    msg.x = 0.699699742064;
    msg.y = 0.34030083686;
    msg.z = 0.125151655184;
    msg.z_units = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.887376566191);
    msg.setSource(54124U);
    msg.setSourceEntity(120U);
    msg.setDestination(36005U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.909080859704;
    msg.lon = 0.543126154112;
    msg.speed = 0.528402891092;
    msg.speed_units = 121U;
    msg.duration = 11325U;
    msg.sys_a = 52363U;
    msg.sys_b = 29145U;
    msg.move_threshold = 0.860526029848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.835131100704);
    msg.setSource(1544U);
    msg.setSourceEntity(149U);
    msg.setDestination(46372U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.158641773745;
    msg.lon = 0.200041529279;
    msg.speed = 0.74035825854;
    msg.speed_units = 127U;
    msg.duration = 41690U;
    msg.sys_a = 47540U;
    msg.sys_b = 9922U;
    msg.move_threshold = 0.22384373114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.470601094456);
    msg.setSource(58878U);
    msg.setSourceEntity(11U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.0629593280254;
    msg.lon = 0.799578406147;
    msg.speed = 0.0820615716668;
    msg.speed_units = 123U;
    msg.duration = 55496U;
    msg.sys_a = 39576U;
    msg.sys_b = 33436U;
    msg.move_threshold = 0.800999019322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.430944565939);
    msg.setSource(47579U);
    msg.setSourceEntity(172U);
    msg.setDestination(44864U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.781969121496;
    msg.lon = 0.544420324354;
    msg.z = 0.92676541594;
    msg.z_units = 82U;
    msg.speed = 0.340267799131;
    msg.speed_units = 97U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.163680496453;
    tmp_msg_0.lon = 0.106872426556;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HLZTQWIDBSMTDRNRACBEDXAIIHXCPTGONNFOFPKEHQWKJGSAFZDWYNHKHKUFSKTFQRLVUPVETEOURUYBDQIQGGKAEXYZWBRFTZKXENRUTAHNCGEWYDOVLMSZAUOYMBCXQJFWHXUGJPGROEKLSDYIZUGIJQMFJWSYIYRZYCXJQHDVJPJPPONFVZEVMLAJNTCCULVVAUSXMHOFKZVLHQMOVZGNBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.63501176018);
    msg.setSource(25791U);
    msg.setSourceEntity(14U);
    msg.setDestination(33697U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.428421933874;
    msg.lon = 0.913150528166;
    msg.z = 0.867899256187;
    msg.z_units = 49U;
    msg.speed = 0.246516738655;
    msg.speed_units = 149U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.571747317436;
    tmp_msg_0.lon = 0.309380284872;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UFXXNGIHVYQRMTWERDDSOLYXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.834369590198);
    msg.setSource(53546U);
    msg.setSourceEntity(101U);
    msg.setDestination(46346U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.307775106927;
    msg.lon = 0.0969619106547;
    msg.z = 0.915763292434;
    msg.z_units = 98U;
    msg.speed = 0.878983017813;
    msg.speed_units = 147U;
    msg.custom.assign("FMYJCQDKUOPRUMWCLYFUSDKHXUZXFVRWKLMMPJYSNDLSFMVBHZBRPOITJCBTNSDIUBAMWKBACJUGUFIJHPFUKDSXINYPVTPQWPTZIEABVLTYVMGZNOILKNMDYUIJYGLQFHWFTIQPBFNXGSNWCBJRZBADQS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.588703458455);
    msg.setSource(19561U);
    msg.setSourceEntity(41U);
    msg.setDestination(27141U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.0683063635009;
    msg.lon = 0.758344932279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.476925534226);
    msg.setSource(31405U);
    msg.setSourceEntity(98U);
    msg.setDestination(55897U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.87030692573;
    msg.lon = 0.986340501537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.861517918898);
    msg.setSource(61652U);
    msg.setSourceEntity(100U);
    msg.setDestination(19466U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.790346103374;
    msg.lon = 0.574108921837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.441553168281);
    msg.setSource(58059U);
    msg.setSourceEntity(139U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(213U);
    msg.timeout = 56428U;
    msg.lat = 0.163392190092;
    msg.lon = 0.906151581394;
    msg.z = 0.40586188809;
    msg.z_units = 68U;
    msg.pitch = 0.458200460548;
    msg.amplitude = 0.317800836658;
    msg.duration = 11324U;
    msg.speed = 0.126139394519;
    msg.speed_units = 126U;
    msg.radius = 0.487658785507;
    msg.direction = 131U;
    msg.custom.assign("TXSNGJGSVVUQLKYAPNTEAHRIOMKOPFODHCWZBNABRNVSMEAVXJLLGNDDUQZEDOHQKCWROYNILCBGUULFDBDMGVSQAUOHUBCFDCUAGVHFIMIIVKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.207239334584);
    msg.setSource(22157U);
    msg.setSourceEntity(129U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(187U);
    msg.timeout = 15366U;
    msg.lat = 0.749549308342;
    msg.lon = 0.863039479059;
    msg.z = 0.625151340473;
    msg.z_units = 190U;
    msg.pitch = 0.362970782473;
    msg.amplitude = 0.664201342173;
    msg.duration = 41767U;
    msg.speed = 0.155405718691;
    msg.speed_units = 57U;
    msg.radius = 0.920724312232;
    msg.direction = 26U;
    msg.custom.assign("LLHPOCINJZQVALIVKXRYJRRUEIOKCOSPDQRNXQWMUSDGBAWBUGCDCIKLRHJKRFYMSIEKBWSZMYWXGNGDXZOXNJSVTZKGFNAHEHITXQBYTPVFBMETCMUITTUVLAILCRCXSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.0734030066041);
    msg.setSource(31820U);
    msg.setSourceEntity(23U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(193U);
    msg.timeout = 146U;
    msg.lat = 0.645343454343;
    msg.lon = 0.856567501507;
    msg.z = 0.136462210091;
    msg.z_units = 51U;
    msg.pitch = 0.609999222282;
    msg.amplitude = 0.122039992984;
    msg.duration = 16825U;
    msg.speed = 0.644264684644;
    msg.speed_units = 32U;
    msg.radius = 0.179468608481;
    msg.direction = 214U;
    msg.custom.assign("VHLQFBYWHXONKCALRFYVFGQOINWJSFAYMEUEQNRTUMTGLBYCNZCGLXVYPLBYGZVSDKNIFODWLZZDUPAPJUJOTJTKAFEMDMEUQRMHDSXSRLEFTJVAPJCENRIUXWPQYSKYGEFLZLKWUBKIIBDMAJKQXUZEOYNZKVGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.184253262986);
    msg.setSource(35143U);
    msg.setSourceEntity(193U);
    msg.setDestination(31543U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("CBFCGPWETEHFAJNLJLHZIYZHEMEFFPNYNRTZANCYUZXMPVYRJWIIOTQOLFLBXLWCVKPXJFACSPZTRAUDQLZDVGMTJATRQGO");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29029U;
    tmp_msg_0.off_x = 0.445317157446;
    tmp_msg_0.off_y = 0.843429565746;
    tmp_msg_0.off_z = 0.0995813175842;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KNYCDSWHIYQSHQRFOFUIVFGUXAMHMVKZKODOXCLKLTSATZVYDPDPGTRHWZUNDOEWIASSYWGVTGHHFBBZMVMXQQVWXKKJZRBLGIWKSNOAMGUIBAUXARJQVPEGJTPJFPQREBMTBIQNJYXMCCJKIRDGMCCYOOQWINSAAYWUTHLLAFYQJREELPFNNRRJDSGUSDXZNCKZFQXKPOZJPBUFALHJEEYOCXZIYBTWXTMVIFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.654037629503);
    msg.setSource(53666U);
    msg.setSourceEntity(8U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(3U);
    msg.formation_name.assign("HYZTWCHCRLXWLUUIYZLBDPDZBTSQOATXEDISQVNPQUPHOPYSUZBAFKRVVWGXCSJZXMWQIRJXEGCRNKVWAUTZBXFDWAIAYGJVOBPCVYHOOZLNPANGKUMJHJBMQLTCSXMCEQEDDBESUPOVLOKEKCPNUYRFKFKRQTNDAQQCNGARAPRTFHGHXIIBFHNASLOKLFSREVZWIXUJSLNTMFDBXVGVHETGKJMGYMNZRIIYOPDBOMUMJZG");
    msg.reference_frame = 52U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21883U;
    tmp_msg_0.off_x = 0.0693604509857;
    tmp_msg_0.off_y = 0.526484602781;
    tmp_msg_0.off_z = 0.594172898703;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NLKIIKHDGTBOXPIUHOEXRDEHHUKWUSSRAZGMDQOTUCYTQNXEGNEPGJWRASTIAGIMUWFYFDYXUZRATGFQGQDVQMYPJZNWBNZZQLAPRLSLPBCVMFLALKXBCOZHKBSAZNCOFYTJGIMRLAYCCFBEIWCDRHZEHSRGDKBKOXVNKPEEJGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.921137534434);
    msg.setSource(30795U);
    msg.setSourceEntity(245U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("OSYXLOLWIVUIZJNEGWKHXHBCRABNDCHEYRWTTHXGTHDHYJNFZTGCLIOVTQJBLGVTMTMKNNDQNVZZDCJUSY");
    msg.reference_frame = 189U;
    msg.custom.assign("DMNIIAEMDPVZFOKOVONGCBHUVXTPTUQSFUTRCLOEHQLWGDNJFMHXAZFUHTYQVEYIMZUAWFBWRPRLTFXESTCIMZSGZMASNIXXPBBZJGPKXRYIGYLALDBWRCEAMDSSROQDJPZUWLRBJNBJOHFSDJHWVSUWFNOKHGQHXYUDDWKXUCURYCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.691122354747);
    msg.setSource(61574U);
    msg.setSourceEntity(96U);
    msg.setDestination(4397U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("GSBDEHXEWYKNXCALMMIECIMKRHYTLLPIWBVEZHMREWLQRHHWNSIQYHYFUVNJMGUUGXFIKUMBAVBDGJSDSWATWGPGTJLJSY");
    msg.formation_name.assign("XQOGWPXFLFOELVOYDTWFMZCUADDYKYOVCGHCMLBGYTAPWAWMTKNPCSIZSRLKORCHTXUSRWCNBFBLIVOMEJMVOQBNHYGAYSSXVAIIUBOIQQUKDJRJUNWEMTDNNPEYPXXHVDVJKXEYZRSVLPHCSTWGBNMFYIGHKQWJJZFJYKMCZATJZEMHKBLJRDGGSCWPDXUQFUCNRRASXHXABEPLLZAGQZQUZGHRNTEBLEBNQIS");
    msg.plan_id.assign("QBYCMKQNWJHIDNAABCDURZEZSKGDBEFUKSBWCAORGBHYPSXEOUEQTKPCHYHCWORNDETWJKVWLUJPZXFMTZDTXZSDMOYGYOUGFVZXYABVRDQIUPOWGTKIXSPGOTZVPLRBRVWXVNQVPQREKZUKCFEWFFTRJIIJISVYARRDULMMLPLONTULYFHKQXULBNFGHYGD");
    msg.description.assign("HRFUSZZNHREHPXQQETSUQKMWWYJAGWMJGDH");
    msg.leader_speed = 0.140309313157;
    msg.leader_bank_lim = 0.671422171077;
    msg.pos_sim_err_lim = 0.181243108759;
    msg.pos_sim_err_wrn = 0.469094594247;
    msg.pos_sim_err_timeout = 11702U;
    msg.converg_max = 0.297592098262;
    msg.converg_timeout = 62689U;
    msg.comms_timeout = 43929U;
    msg.turb_lim = 0.43409265563;
    msg.custom.assign("OEFYXTUMWBSIPKKSURSQXEGYEXNYRKWJMDVAJDPGRKLLATPPNPLZPHIUEOOJAHKYEUQRRWINJZVAOIQPVFKBHLMGRGEKQSVSGXWYAMQJBADZECTNDHUFOVLBPCICCQGOXBNZIWQUFMXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.302541328321);
    msg.setSource(62945U);
    msg.setSourceEntity(184U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("UDRATEIZPWNWWURHNRQEUUCJOXPEBEMFCUCJGFIOSIQXKVVANKPOXFGRKIACWMXQTSAZDJHKJTSSJODOMYNUTRQLOLBBFSZWKZNHIZTABPUGWZFULLKIEJLWECNDMYVDNBSGBWIRXEYVXPNFOYKQLTVSHJCDIGHGCXNOF");
    msg.formation_name.assign("IPLQOHBXIXWGLZPDLHMOAHYMVWRTTBOCIVMOVHHWRKKRCNUQKDWXSYILKVANFTRQGWTYNNBMKVKUV");
    msg.plan_id.assign("ETCSWIGCCEXLPOUXVVBYNDUJKGWNFPMQJCVJDTMNOPOUHTCWDFHODXMGDFJNSKDMBZNIBXDODKEZRGYBRVITEGIVKJ");
    msg.description.assign("TFKKOCKLIQWKPUEUEMCMYUZWUQNFNCKVERAIBIYISFXCUXYJJFDBBVGLFJYZSDTKZQRLHRBZIPLYWMADONOGWNEGLTXPHWCWMTSNLXPUWDDUEPGBCCD");
    msg.leader_speed = 0.340400027558;
    msg.leader_bank_lim = 0.0627592501445;
    msg.pos_sim_err_lim = 0.580115006301;
    msg.pos_sim_err_wrn = 0.603376622665;
    msg.pos_sim_err_timeout = 10327U;
    msg.converg_max = 0.990322815535;
    msg.converg_timeout = 37294U;
    msg.comms_timeout = 29993U;
    msg.turb_lim = 0.288617679588;
    msg.custom.assign("SRMMOHHTJGAIGEIHQVNWTARVBSMBHUIBSLITOMJXRJPEVERGXFGRICVLWFYFXGGPMLXBQFQWDUTVJKYENEIZDTQFJUONSWPVALX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.453784791952);
    msg.setSource(40026U);
    msg.setSourceEntity(113U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("LBJSCDBLZXZLUWEWYILHRJZDTJGOCDTTCSAKAEQATUYKPZWUZKGVR");
    msg.formation_name.assign("GCZCRIDTTSAEEKONMIDKLGMPGAOYROFHVXPAUVLEPFALDGMHLIVDZSQOJWYRIAENBCFFYJCGPFWMZEAKZUVPQTBBHPRONPHTEGJUSSANQQSGHYXTTRVYR");
    msg.plan_id.assign("SWVYEZWABFISRUDOBRHWBFCIYXZOWHGIOGYGSUSZBMTNODSFMHMMXTV");
    msg.description.assign("PKSZVRNRRCYYXHVRVZYKXGPKCSTHLR");
    msg.leader_speed = 0.803207153485;
    msg.leader_bank_lim = 0.0143655382296;
    msg.pos_sim_err_lim = 0.939241052775;
    msg.pos_sim_err_wrn = 0.329882031387;
    msg.pos_sim_err_timeout = 64918U;
    msg.converg_max = 0.403406866443;
    msg.converg_timeout = 62345U;
    msg.comms_timeout = 52984U;
    msg.turb_lim = 0.160250852534;
    msg.custom.assign("KMVTYTXIXLPNIJIDVVEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.952079470379);
    msg.setSource(422U);
    msg.setSourceEntity(80U);
    msg.setDestination(39694U);
    msg.setDestinationEntity(152U);
    msg.control_src = 17591U;
    msg.control_ent = 61U;
    msg.timeout = 0.303913717424;
    msg.loiter_radius = 0.599902930614;
    msg.altitude_interval = 0.810948119337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.123112507054);
    msg.setSource(63981U);
    msg.setSourceEntity(188U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(58U);
    msg.control_src = 64673U;
    msg.control_ent = 233U;
    msg.timeout = 0.344375357136;
    msg.loiter_radius = 0.43912732954;
    msg.altitude_interval = 0.642487184734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.392831019485);
    msg.setSource(4842U);
    msg.setSourceEntity(217U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(18U);
    msg.control_src = 21054U;
    msg.control_ent = 209U;
    msg.timeout = 0.69019999121;
    msg.loiter_radius = 0.786969468957;
    msg.altitude_interval = 0.502227492537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.641203123194);
    msg.setSource(14795U);
    msg.setSourceEntity(225U);
    msg.setDestination(32102U);
    msg.setDestinationEntity(134U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.505262698819;
    tmp_msg_0.speed_units = 131U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.268167831313;
    tmp_msg_1.z_units = 199U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.376645998508;
    msg.lon = 0.705236419245;
    msg.radius = 0.199760741795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.210560857355);
    msg.setSource(14233U);
    msg.setSourceEntity(148U);
    msg.setDestination(33380U);
    msg.setDestinationEntity(217U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.463703498196;
    tmp_msg_0.speed_units = 149U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.776419666717;
    tmp_msg_1.z_units = 239U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.595917343501;
    msg.lon = 0.480981242414;
    msg.radius = 0.851107813286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.736081979248);
    msg.setSource(36596U);
    msg.setSourceEntity(240U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(158U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.989523517039;
    tmp_msg_0.speed_units = 25U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.804129980968;
    tmp_msg_1.z_units = 81U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.645824853043;
    msg.lon = 0.599429865329;
    msg.radius = 0.551154208117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.288892470846);
    msg.setSource(30123U);
    msg.setSourceEntity(19U);
    msg.setDestination(38136U);
    msg.setDestinationEntity(232U);
    msg.control_src = 52245U;
    msg.control_ent = 70U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 70U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.574839312059;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.741506169173;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.846469204238;
    tmp_msg_0.lon = 0.748635858611;
    tmp_msg_0.radius = 0.269096196708;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.972427518889);
    msg.setSource(39918U);
    msg.setSourceEntity(34U);
    msg.setDestination(60167U);
    msg.setDestinationEntity(204U);
    msg.control_src = 48854U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 93U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.516217825469;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.447996240523;
    tmp_tmp_msg_0_1.z_units = 211U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.970927017978;
    tmp_msg_0.lon = 0.568647948352;
    tmp_msg_0.radius = 0.988761780173;
    msg.reference.set(tmp_msg_0);
    msg.state = 57U;
    msg.proximity = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.527117583573);
    msg.setSource(39739U);
    msg.setSourceEntity(161U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(124U);
    msg.control_src = 5587U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.44674735996;
    tmp_tmp_msg_0_0.speed_units = 249U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.616321143264;
    tmp_tmp_msg_0_1.z_units = 124U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.486961458357;
    tmp_msg_0.lon = 0.0219666152135;
    tmp_msg_0.radius = 0.482228544372;
    msg.reference.set(tmp_msg_0);
    msg.state = 23U;
    msg.proximity = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.863314952934);
    msg.setSource(31220U);
    msg.setSourceEntity(106U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(120U);
    msg.ax_cmd = 0.533586524092;
    msg.ay_cmd = 0.809285491368;
    msg.az_cmd = 0.182312729744;
    msg.ax_des = 0.0366706634312;
    msg.ay_des = 0.811041160437;
    msg.az_des = 0.425235528134;
    msg.virt_err_x = 0.681692646584;
    msg.virt_err_y = 0.213942749159;
    msg.virt_err_z = 0.562282729441;
    msg.surf_fdbk_x = 0.32428293928;
    msg.surf_fdbk_y = 0.905852467335;
    msg.surf_fdbk_z = 0.736752710086;
    msg.surf_unkn_x = 0.0834974497257;
    msg.surf_unkn_y = 0.422672946057;
    msg.surf_unkn_z = 0.908141341453;
    msg.ss_x = 0.616869276998;
    msg.ss_y = 0.352052406594;
    msg.ss_z = 0.642064991616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.330431614286);
    msg.setSource(11613U);
    msg.setSourceEntity(38U);
    msg.setDestination(33488U);
    msg.setDestinationEntity(145U);
    msg.ax_cmd = 0.931297094523;
    msg.ay_cmd = 0.692040635372;
    msg.az_cmd = 0.63868230587;
    msg.ax_des = 0.439217002599;
    msg.ay_des = 0.884317091883;
    msg.az_des = 0.23216725555;
    msg.virt_err_x = 0.228781349527;
    msg.virt_err_y = 0.618020129247;
    msg.virt_err_z = 0.754228719192;
    msg.surf_fdbk_x = 0.68935467123;
    msg.surf_fdbk_y = 0.695111899874;
    msg.surf_fdbk_z = 0.663171801421;
    msg.surf_unkn_x = 0.412333607712;
    msg.surf_unkn_y = 0.061394482912;
    msg.surf_unkn_z = 0.989863587442;
    msg.ss_x = 0.0939684805874;
    msg.ss_y = 0.788367899484;
    msg.ss_z = 0.750790943172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.940889866593);
    msg.setSource(13458U);
    msg.setSourceEntity(30U);
    msg.setDestination(23170U);
    msg.setDestinationEntity(146U);
    msg.ax_cmd = 0.715192670472;
    msg.ay_cmd = 0.707809287124;
    msg.az_cmd = 0.20205164422;
    msg.ax_des = 0.121598625082;
    msg.ay_des = 0.388130273709;
    msg.az_des = 0.222918212107;
    msg.virt_err_x = 0.722913950305;
    msg.virt_err_y = 0.949675435041;
    msg.virt_err_z = 0.708036341614;
    msg.surf_fdbk_x = 0.516638515084;
    msg.surf_fdbk_y = 0.106269188997;
    msg.surf_fdbk_z = 0.21390659634;
    msg.surf_unkn_x = 0.827902699492;
    msg.surf_unkn_y = 0.662935042698;
    msg.surf_unkn_z = 0.853579382353;
    msg.ss_x = 0.193824425958;
    msg.ss_y = 0.299300214455;
    msg.ss_z = 0.70968719552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.792634143875);
    msg.setSource(4982U);
    msg.setSourceEntity(165U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("YBHYUTENGSVDSPQSFRPUKHWNWRTGMOUXJTZXIPG");
    msg.dist = 0.973292922548;
    msg.err = 0.960137850318;
    msg.ctrl_imp = 0.720562511362;
    msg.rel_dir_x = 0.14145585289;
    msg.rel_dir_y = 0.0649129008479;
    msg.rel_dir_z = 0.280915276455;
    msg.err_x = 0.531219376109;
    msg.err_y = 0.946976020944;
    msg.err_z = 0.524101563102;
    msg.rf_err_x = 0.705072018141;
    msg.rf_err_y = 0.91999953093;
    msg.rf_err_z = 0.814334488513;
    msg.rf_err_vx = 0.624602982311;
    msg.rf_err_vy = 0.0648518840848;
    msg.rf_err_vz = 0.0222119371437;
    msg.ss_x = 0.217371496885;
    msg.ss_y = 0.545946839428;
    msg.ss_z = 0.674239873836;
    msg.virt_err_x = 0.0850094498711;
    msg.virt_err_y = 0.983059124349;
    msg.virt_err_z = 0.854863162001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.399221655041);
    msg.setSource(6398U);
    msg.setSourceEntity(196U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(50U);
    msg.s_id.assign("DYQVYTEZDIRVZVJMJSBNNOYEBTFNMKQPCBGGKABEORJNOZONAURATASUAXFZBPHBUHZLOETXKNMCCJCWGPEAZYRHXHXTUZVYMBFEQYWYWQKJMLFPPLOMUFJDOPUUUKCVVFAWTMEGNOKRQCKRKQITVOIPHRWPSRNKKJFMSWIDRSJLRISDDICICXVIJEGSZQLALDO");
    msg.dist = 0.516754938238;
    msg.err = 0.275508116907;
    msg.ctrl_imp = 0.665396239215;
    msg.rel_dir_x = 0.953845923754;
    msg.rel_dir_y = 0.826210707532;
    msg.rel_dir_z = 0.424612076994;
    msg.err_x = 0.345949408274;
    msg.err_y = 0.0982714652668;
    msg.err_z = 0.591279271987;
    msg.rf_err_x = 0.461015217693;
    msg.rf_err_y = 0.601053025606;
    msg.rf_err_z = 0.165019694925;
    msg.rf_err_vx = 0.992043918946;
    msg.rf_err_vy = 0.555459831002;
    msg.rf_err_vz = 0.542276846786;
    msg.ss_x = 0.836276518203;
    msg.ss_y = 0.795423594409;
    msg.ss_z = 0.301391838107;
    msg.virt_err_x = 0.611837693684;
    msg.virt_err_y = 0.362342890138;
    msg.virt_err_z = 0.0268051826232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.633465306034);
    msg.setSource(22212U);
    msg.setSourceEntity(252U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(33U);
    msg.s_id.assign("SMBYUGTGIZRVIASGSHHKDRQXRBYSFUKPHMKLLTAOGYQFAWISBZJQJJMNCCUYNQTXXXWPBRSILPJYNXBADDXCWVDKM");
    msg.dist = 0.6949950716;
    msg.err = 0.42090875273;
    msg.ctrl_imp = 0.228344739753;
    msg.rel_dir_x = 0.462841607971;
    msg.rel_dir_y = 0.901262970547;
    msg.rel_dir_z = 0.475527170263;
    msg.err_x = 0.563034654955;
    msg.err_y = 0.548954677342;
    msg.err_z = 0.670281290639;
    msg.rf_err_x = 0.193083274777;
    msg.rf_err_y = 0.111315421004;
    msg.rf_err_z = 0.0647340327299;
    msg.rf_err_vx = 0.667895034355;
    msg.rf_err_vy = 0.193566729444;
    msg.rf_err_vz = 0.526877273508;
    msg.ss_x = 0.949208538075;
    msg.ss_y = 0.914388447189;
    msg.ss_z = 0.150938359528;
    msg.virt_err_x = 0.392262968412;
    msg.virt_err_y = 0.575830307212;
    msg.virt_err_z = 0.083948317442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.431756013808);
    msg.setSource(21646U);
    msg.setSourceEntity(197U);
    msg.setDestination(54094U);
    msg.setDestinationEntity(37U);
    msg.timeout = 3532U;
    msg.rpm = 0.1784061577;
    msg.direction = 214U;
    msg.custom.assign("YYHNIZMIFOXWCBGMXWPOFGNLMJJDBNAKVBWZJVNPEXNULMKQFJLVASLSPIWZHONZIQQXCEOYPHAVBRLFTKSFXRXQUCFPMHCANGYCZNHRJXYEUWWFPDSMRTRBSZTUFPXHIQKYLADVTQILOYGSUJTAVHOIZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.833362046876);
    msg.setSource(17246U);
    msg.setSourceEntity(156U);
    msg.setDestination(35776U);
    msg.setDestinationEntity(168U);
    msg.timeout = 15342U;
    msg.rpm = 0.705227679373;
    msg.direction = 235U;
    msg.custom.assign("JUEXXDEOOMAZBUYHAPIFOTCMBUYVQJOVUPSCXTIQYLOYYRPQXOUPWJOCZGDHFVNBQHKGZEISTRLEMGOFRGUMVJISXXZNPZATRMFAFVVEDNLXSAWLLHGCYHPWLFKHPJNHTAKDMMKYDUZIDWZEKFNQSKHQKVAGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.1720794542);
    msg.setSource(24084U);
    msg.setSourceEntity(37U);
    msg.setDestination(45126U);
    msg.setDestinationEntity(210U);
    msg.timeout = 26045U;
    msg.rpm = 0.88595392394;
    msg.direction = 90U;
    msg.custom.assign("DEMPNFGZKYCRXJZPVCLREFWLLSUUESIEZONVMFOMWTCJZYNGEVBJPMRNTGQTQQAVVHSABOJGFNCWTKWYLGSTLBBLWHDBQIFAPFSORXCGHHDSOAYIHCRNUAOGIQKXQRUOHWUNLTLVIIEUPDCXMDJNPZUZJGSYLWAPDDSNTXHWMPEVKZGKJCDRBPHMYMHDJXMBAIKVIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.230852933192);
    msg.setSource(10385U);
    msg.setSourceEntity(149U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("UEJNIVNGSURTJYOAKXUPFPZGTVQELURVAWDIVBYJWPUODIMMVBTMYGVCNYOJFVRSQDCMXLZSUNVYHDDLMTLHJCHEXMGJXPKSNWRWMPQBYHBJCPYSQZXGPOLBFKUOSWTAXZIXEPLKFRYGPEZTABKDCALBLTCYKAJXOMWWU");
    msg.type = 57U;
    msg.op = 224U;
    msg.group_name.assign("JAHGEROQMPYBXEUIGMFKKOXTNNNFNLRQCPHOXUNVROIUDWAPRCSNUGXWRB");
    msg.plan_id.assign("OJGTYICHSFYLEQRAMBEVKOGXDZRNOBUNKMHFQBURJRAPPQEBQNHSY");
    msg.description.assign("RDBBFYPPEFSUUILDVUSNMIJBXDGXCQGAMNIQLZQGRJMUYHYLAGEZIKJRTAUFFMWIMHSIMYJNGXVPVEEEXJJZNQKVHONEGXDWWDOVBLWCTXYPTSTBRWQOGFRMDMAULNCYTOPWQCXQPEJYLFAARZFUSHSKFRNVWTH");
    msg.reference_frame = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3212U;
    tmp_msg_0.off_x = 0.0577487838686;
    tmp_msg_0.off_y = 0.986823048681;
    tmp_msg_0.off_z = 0.0405057963907;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.458318879642;
    msg.leader_speed_min = 0.782299898528;
    msg.leader_speed_max = 0.756322571073;
    msg.leader_alt_min = 0.0820870486918;
    msg.leader_alt_max = 0.695892401725;
    msg.pos_sim_err_lim = 0.173745048463;
    msg.pos_sim_err_wrn = 0.856804583256;
    msg.pos_sim_err_timeout = 2603U;
    msg.converg_max = 0.689057262684;
    msg.converg_timeout = 4122U;
    msg.comms_timeout = 50381U;
    msg.turb_lim = 0.234627982663;
    msg.custom.assign("EIXLZSPLUGPGODTPKMWKDSHGOM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.205521356206);
    msg.setSource(13814U);
    msg.setSourceEntity(160U);
    msg.setDestination(60524U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("GZPZWXFBEGGYYVNLWKPUKDXGCQPFPCMLUFRWNKZLVKGNBEZRHMOBDSHIKWEKSTJLMJCRKDAKJHOSXIJQXXRWVHUKAWPRKUGNYVWOVEPXUAZFUJTODWTHIMQAUWZAIYLSTQJXENLSDZYUCMABMTCCHGIXBQRBPOEMJROFQ");
    msg.type = 12U;
    msg.op = 130U;
    msg.group_name.assign("RVFJCTZZAYUTQFINEZNFRAYJSQZOORPETZNOMLWXQVFSLWVHHQXRCFDJYMLBGKAFLKLKQLMPDFNDCJVISTIBNHGUXYRABZMEYCMNRPHXDKPXGGXEUCGJSEMMWOWGAXIPKBDELDUVAYJDPMHWZUKWGHGLFIPWQVOQJACMXOUTVRAVJVHIIIEOCQ");
    msg.plan_id.assign("XLBHSOVAPRTCOXSMJAVQOUTRJKDBZFRYXALNDEJPHXKMTIDRRQYOPE");
    msg.description.assign("XLPJMNTCFDQVTGPNBOESXUGKKRECWQVHQHSTYUNCMTESVNQAKZCWIFTJCNHCTMBYVEQUVOFPJLPOUEIHKJDSXQIBRKBVHFLGEIOXFBODZGRGDBQMVKYLLKTOAMUR");
    msg.reference_frame = 145U;
    msg.leader_bank_lim = 0.829799790127;
    msg.leader_speed_min = 0.612084632101;
    msg.leader_speed_max = 0.0790549912094;
    msg.leader_alt_min = 0.218542338212;
    msg.leader_alt_max = 0.900232728561;
    msg.pos_sim_err_lim = 0.824373246427;
    msg.pos_sim_err_wrn = 0.0987840745288;
    msg.pos_sim_err_timeout = 34565U;
    msg.converg_max = 0.835699296281;
    msg.converg_timeout = 7222U;
    msg.comms_timeout = 49750U;
    msg.turb_lim = 0.0398746284049;
    msg.custom.assign("YWGWIXLMOIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.624218176708);
    msg.setSource(9379U);
    msg.setSourceEntity(9U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(225U);
    msg.formation_name.assign("WQPFHBLOATZDMZBDFPWREYINVUEFCUDOOKSXMUFBCLACAHQXLSQJKQYYXJUTSKNIWYMTWZGXGAPYCCKLVOFFTMIFKJMBZAXBJNWGIXNTKJOVNZZCFHJWVEILSEKBVRLJHNOOQABGITLTLVUAWEXCXRMRTGAROAFUWDNPGKSPMGTQJLRGSJYVMIZDZXTOQSBHHEIBNADVBYOGKREXWUWCM");
    msg.type = 128U;
    msg.op = 1U;
    msg.group_name.assign("PRBDNCRHUQOHDZVGLWBVMRGFZOZYRNPQRCEFUGFKFFKEXEASFDJNOAYTZLIWDEEXMLGPWLMIZVZCGGUDTOQAKHBGSWCCABZYJQLPQKSSUYIXOCHADOIGCJGTLAWOBBEIMYYSFNTFNKHKICLOUYHHBBTVHETAVQUPPRWMWSXRMTIDOWSEAKLZXSLNPVPFBVWIMXPTEYVULRZJDQGJQTQDRUXZMJSACTNPVBKKFKONJMHIWMEXJXUAQX");
    msg.plan_id.assign("YXMMTATYQNYVYBCGDGFOLUCNLKJFJVZDLPMDDUYVSBHQOYKLSWPXZHLDCWNTQTTGPTLMMNRAVLIFQXIMEAVASZKGSKLIFEPVCZHXXDVFVYDKANRJFTASJKDETWCIWHQEOMCJNZJHMXQFHGKRJSGZOWYTEBMYIANZORIHGZRLCNODZKXPPFJ");
    msg.description.assign("DWPZEUXDZEFIVYRUIEBTUXVKOQYRRQDHDOOZSGNTHXIAVQJNXIUKWWUDJEPGAGXLVMZFFJYKJXMOGUXOZLTEWEQQUBSVKGKTJSBNMCURKEWLAWXNLBIEDAICGRJSMFCNDGATGLZIYZL");
    msg.reference_frame = 97U;
    msg.leader_bank_lim = 0.579215596888;
    msg.leader_speed_min = 0.431565842443;
    msg.leader_speed_max = 0.198114188052;
    msg.leader_alt_min = 0.28781113089;
    msg.leader_alt_max = 0.529823883265;
    msg.pos_sim_err_lim = 0.489837280955;
    msg.pos_sim_err_wrn = 0.963806365578;
    msg.pos_sim_err_timeout = 37792U;
    msg.converg_max = 0.585575610543;
    msg.converg_timeout = 57002U;
    msg.comms_timeout = 4658U;
    msg.turb_lim = 0.302316023671;
    msg.custom.assign("IBUEDGTHBSQXYWRJIFLJZAFGKHPCAWADTJAFWVSSOFLXOJIJCZQWNULUTTENHMSVRGNUNCTNLYODIIBIRXOOFUSPOYRJTFQVPPBDLERQVVLSIZXYMTHGXLVMYNSPPCKBACHKDBEGTQFUPZVFLXWVXEACITWCEQKGHGRSXDMRCJRAKHMEHZSLTJLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.195944717223);
    msg.setSource(43713U);
    msg.setSourceEntity(159U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(216U);
    msg.timeout = 49603U;
    msg.lat = 0.571889846176;
    msg.lon = 0.422503736081;
    msg.z = 0.641108806299;
    msg.z_units = 142U;
    msg.speed = 0.260519317432;
    msg.speed_units = 60U;
    msg.custom.assign("CLLZNEZIKOZFTSJUTODTFEIJYXOTDPVQCWQBBEHEHQSSTXAUQWSXJYISKXDRECSIJQWYQLPYJWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.298274497606);
    msg.setSource(21539U);
    msg.setSourceEntity(35U);
    msg.setDestination(13061U);
    msg.setDestinationEntity(145U);
    msg.timeout = 13950U;
    msg.lat = 0.888034832124;
    msg.lon = 0.570314481137;
    msg.z = 0.655284452792;
    msg.z_units = 214U;
    msg.speed = 0.627394837971;
    msg.speed_units = 97U;
    msg.custom.assign("PAWGNCUKYCKGSBKGBYAIBROEHKLPGXAYOZBCHROFLLCZJFATUYQRUZIFJZMLOBIPXTPSMGBDIXYACIUVMUJKXWLNHPTOVLPRVNTGPDWMWEVNDACNOYHUZQRFLVHRDMPGLDIDYZKETNTMFHEYJJJFTJZOGWCHFSTFSESDBSWBPHJAQDVSTPEGUWSXXEQRDCQHWJDNNILFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.579756522535);
    msg.setSource(25790U);
    msg.setSourceEntity(8U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(1U);
    msg.timeout = 136U;
    msg.lat = 0.967251219793;
    msg.lon = 0.418449699547;
    msg.z = 0.560898611901;
    msg.z_units = 2U;
    msg.speed = 0.159285597377;
    msg.speed_units = 87U;
    msg.custom.assign("SHZNPINAFPVHCFMTRQXSKVQSMFCCXPFRAXPJIHBDIUTBZSIEJSMPAAYTGCBZPVAPNLGNPLOQJEBNRUXGUQNINDLGEGXJXUVBYTHBHCEHMTOJWKTTRYWNSDZEMMNKCWWYJYLBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.656944070105);
    msg.setSource(26530U);
    msg.setSourceEntity(93U);
    msg.setDestination(15813U);
    msg.setDestinationEntity(217U);
    msg.timeout = 12574U;
    msg.lat = 0.744357741736;
    msg.lon = 0.303814477218;
    msg.z = 0.596515365969;
    msg.z_units = 183U;
    msg.speed = 0.168715632519;
    msg.speed_units = 234U;
    msg.custom.assign("TDKEPUMWZDXRGMOMJJSKCBAWQKMQQNIMBRASEWSNRYCFSRWLTXQGLWYWNADFXULLOYVXDTCSOWTGLSGCIEYEDQNGZTUPTCZSJIAEHNZZDTHUJLWBUNVHTAGKFCJQJKTIRZHPZXOXOWPCYKSUYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.926560559358);
    msg.setSource(28364U);
    msg.setSourceEntity(242U);
    msg.setDestination(44182U);
    msg.setDestinationEntity(120U);
    msg.timeout = 11727U;
    msg.lat = 0.282588203897;
    msg.lon = 0.279660378393;
    msg.z = 0.190737198425;
    msg.z_units = 82U;
    msg.speed = 0.987677656176;
    msg.speed_units = 142U;
    msg.custom.assign("AQRUTSYLBWNCGKGPKNODSTTZLBZMVXDNVQNIIQUPARQRNQWAJYQFWCJOCBNMTLSIWEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.0487787889242);
    msg.setSource(52564U);
    msg.setSourceEntity(246U);
    msg.setDestination(58286U);
    msg.setDestinationEntity(248U);
    msg.timeout = 4350U;
    msg.lat = 0.194749432417;
    msg.lon = 0.287278805702;
    msg.z = 0.453868339729;
    msg.z_units = 39U;
    msg.speed = 0.361472786436;
    msg.speed_units = 123U;
    msg.custom.assign("REVLXOVZDEZSNPIRZLDUFJPRHSZQTRIKWCSCMQZBRBMETRYZJNMUEMTJLUDUQHQUKWIDJPTBMBQGDRCMXACPBCNCRSHOTYXNAPGYOOFWTVQHZSKJGIDXIYMBRDCOGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.527436839161);
    msg.setSource(51980U);
    msg.setSourceEntity(243U);
    msg.setDestination(8863U);
    msg.setDestinationEntity(210U);
    msg.arrival_time = 0.220679739445;
    msg.lat = 0.53032588562;
    msg.lon = 0.116193127654;
    msg.z = 0.50664534887;
    msg.z_units = 186U;
    msg.travel_z = 0.493054321284;
    msg.travel_z_units = 82U;
    msg.delayed = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.534542360258);
    msg.setSource(42017U);
    msg.setSourceEntity(23U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(176U);
    msg.arrival_time = 0.84405736329;
    msg.lat = 0.614744723558;
    msg.lon = 0.915532930999;
    msg.z = 0.848354865924;
    msg.z_units = 154U;
    msg.travel_z = 0.16694790322;
    msg.travel_z_units = 152U;
    msg.delayed = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.327665773986);
    msg.setSource(9696U);
    msg.setSourceEntity(90U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(101U);
    msg.arrival_time = 0.196179809287;
    msg.lat = 0.390274874581;
    msg.lon = 0.867250781537;
    msg.z = 0.77252347913;
    msg.z_units = 3U;
    msg.travel_z = 0.343220040585;
    msg.travel_z_units = 100U;
    msg.delayed = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.457447563273);
    msg.setSource(22994U);
    msg.setSourceEntity(37U);
    msg.setDestination(64685U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.246916539826;
    msg.lon = 0.91809163283;
    msg.z = 0.636532572029;
    msg.z_units = 162U;
    msg.speed = 0.500014681878;
    msg.speed_units = 12U;
    msg.bearing = 0.517378436643;
    msg.cross_angle = 0.277431853776;
    msg.width = 0.717932786398;
    msg.length = 0.266301212969;
    msg.coff = 81U;
    msg.angaperture = 0.764611759164;
    msg.range = 61864U;
    msg.overlap = 169U;
    msg.flags = 19U;
    msg.custom.assign("QHZSKFLPFXRIIOGSJMXSTYBRZXLRIWNZRWCQUMBKYNJBXTTMORCYLEXTGLHATVIEZEDDLFMQQJVGFGDIZKFTMGLODJPCOZQANAPSYEKFHWDGYTAEVPMVVNLHBXROUXWKECAHTIVMSWYHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.985090547552);
    msg.setSource(37671U);
    msg.setSourceEntity(14U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.153800031133;
    msg.lon = 0.208266387616;
    msg.z = 0.375362368393;
    msg.z_units = 22U;
    msg.speed = 0.239256312251;
    msg.speed_units = 206U;
    msg.bearing = 0.833407839521;
    msg.cross_angle = 0.920350062451;
    msg.width = 0.986497083733;
    msg.length = 0.511590982037;
    msg.coff = 48U;
    msg.angaperture = 0.0783692055719;
    msg.range = 64979U;
    msg.overlap = 85U;
    msg.flags = 86U;
    msg.custom.assign("UNKAILDRDLNQVLXRBYFBWIOENCMPAKQCHVMFXBSLZXOYWEMOJMEDQBEGXAAEDSWOEKFTCZGLJQFGOBJSCLWPSWXPACEPVZCTIYUIXLLNOLPPDFKCQCSTFQXWKDIYHPKJYDHCSRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.484153564654);
    msg.setSource(56669U);
    msg.setSourceEntity(161U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.841089307985;
    msg.lon = 0.982026020702;
    msg.z = 0.0740177706772;
    msg.z_units = 178U;
    msg.speed = 0.307601694494;
    msg.speed_units = 172U;
    msg.bearing = 0.417731184894;
    msg.cross_angle = 0.527905236196;
    msg.width = 0.72067134352;
    msg.length = 0.0536826600637;
    msg.coff = 157U;
    msg.angaperture = 0.648671495696;
    msg.range = 6991U;
    msg.overlap = 49U;
    msg.flags = 110U;
    msg.custom.assign("ABFVMLUIEJLTBUQPFFIHBPECTJZJYZYDVDDMSYIHCPNBXTPJHELAOZKMQAGGGVUHLESROZAFEZWFCOMKHJRVXXSBCHMNNVPOXQBNSRKXITQYDVBSNWWQWLYNIPVACSEWPHXAKREDOKBXIMOLWWRBRKZOEIRTQVAMCGGEGDJFQEDYQWDSFTXTORXSUIPTDTUUOHGVUNYPRYJKUGKAHMFLCJIGQTFNCZYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.442257487476);
    msg.setSource(63267U);
    msg.setSourceEntity(179U);
    msg.setDestination(49226U);
    msg.setDestinationEntity(226U);
    msg.op_mode = 61U;
    msg.error_count = 90U;
    msg.error_ents.assign("TRKZRBVBJSUBSGNOJSOZRZTVPHCGDKKXAMTRQWGEQATBGMPNQIJDUWGMDUVQYIRHJOVHVRYVIDJATJCEBSNTSBSSGJWIDXO");
    msg.maneuver_type = 13016U;
    msg.maneuver_stime = 0.943720837999;
    msg.maneuver_eta = 26065U;
    msg.control_loops = 595291299U;
    msg.flags = 54U;
    msg.last_error.assign("NLYRMVAAVFBIOIZQHAUTMPCPOXSYAZKDIWCHGIKRDDDDWAROSOJXYFJXETTNHQCWEYDYTIMUQUFZKFCTBKEGIKBAEOSHRGJAUMKSGOXGBMTKRLNNWPVFQJENIBBOMSRBCQYZZBFJNSFUJMVCPHSVLTZDJEPRJUZDPPVWRHFLNATUAYEXTWHVGVQXKLUEWOVPLNYCPGXHJBCTG");
    msg.last_error_time = 0.576385910629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.327180443558);
    msg.setSource(38806U);
    msg.setSourceEntity(248U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(107U);
    msg.op_mode = 200U;
    msg.error_count = 176U;
    msg.error_ents.assign("DPOOJVKSUTOZSQPKLAXWGTIRMAZVQMVYYXNVXQUXQGBNDPIFAOKLDPWFTJLJINDLEASQBNDHUWUIQBMXOVIXCCOUZAKFHFWVSNAHUAYSYNCKKRTSUGEZNZUXKAECBZCPSHMVPJDLVRRPIHFCEDGQRWGMLMYAQSWKMHTROVJMSMFDLFGEHJTRFJKBHEYNTQZJIXPGIIGECZWCYCEGZZERSNMWRUBBBOLCTBWHDKJYJYBXIWXTGRAOPPEQVODT");
    msg.maneuver_type = 10527U;
    msg.maneuver_stime = 0.117623457989;
    msg.maneuver_eta = 37146U;
    msg.control_loops = 1173973711U;
    msg.flags = 181U;
    msg.last_error.assign("QKXHDRCAVTNDYOXUGAPNVBURSCVMXZPBDAEQYNZTMBRSTMZLYIPAUIOYZMFNIMDJGUJQUWMWEGIWKSWFYRBVCHFEXHVDBKLNMOFQOJEWWSEBXABYFDILHFFUPXDDYCOMFLODSGPWZEUNXGSPDLWFGJSMRCHJSE");
    msg.last_error_time = 0.928945611709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.42673930241);
    msg.setSource(62608U);
    msg.setSourceEntity(203U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 117U;
    msg.error_count = 13U;
    msg.error_ents.assign("JAZNGPGXNGGHBRVQYVOJAWLDTLYPTOUSEVIGKPDOBCYUWHSDKYMOSRWQMDEDNELOQVPPEUSXRJQJETIVFMVSBRGZAZYFPECXCAPWYCLZASZXYQTCRKVIDFFNBSUQBJEDCGUDJHUTHSVNWYGGABRJJLTWINFTLOQUBQXXMHHEUMHKLXNQREOXZYKPTIDRJOLCIKFZLJWICTQUOSPHKNAVNTWBHAZMKXWBXNRCVIUMBWOYLMAZZDFEP");
    msg.maneuver_type = 767U;
    msg.maneuver_stime = 0.300785768557;
    msg.maneuver_eta = 37443U;
    msg.control_loops = 4169680325U;
    msg.flags = 18U;
    msg.last_error.assign("DSHVUHXDSXTPKWSOTIFLXLNBIABQGCHNTDFHNNLVMBQWZRKAJFPPGLXXAFMYGAFQKRYMXMQRJGEHREGT");
    msg.last_error_time = 0.476571364987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.28032495318);
    msg.setSource(63038U);
    msg.setSourceEntity(124U);
    msg.setDestination(54086U);
    msg.setDestinationEntity(100U);
    msg.type = 160U;
    msg.request_id = 60625U;
    msg.command = 66U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46326U;
    tmp_msg_0.flags = 251U;
    tmp_msg_0.lat = 0.779392834519;
    tmp_msg_0.lon = 0.769289657348;
    tmp_msg_0.start_z = 0.0729003101425;
    tmp_msg_0.start_z_units = 198U;
    tmp_msg_0.end_z = 0.214797322595;
    tmp_msg_0.end_z_units = 59U;
    tmp_msg_0.radius = 0.809514264746;
    tmp_msg_0.speed = 0.411470713561;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.custom.assign("IRHXFUKVSTBAZECEWAFBGQMEGHMVDBMR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53620U;
    msg.info.assign("PGBAFYQVWLLFGZKDJRPSVOLANOHNSVTNATBPWUJPMYGOPNSWECFQSJEGDGVLKUSDXOYXCMHDWBZWPVIJEVAJWHJTUIGXBQZXAUYCGDCNVZYYFUYLRHODSKVKTVARIGXKZAEKPCEPTOJZZSEHUIJXHSYNNWMUNBKFTBHMTXZLRYOEDRRTPYMQFMDRWJERIWDFEHGRSJBOQQPLZCVFXAFINQIBMKRBIAOCFCMGXCQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.7147651683);
    msg.setSource(35853U);
    msg.setSourceEntity(42U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(92U);
    msg.type = 104U;
    msg.request_id = 9022U;
    msg.command = 161U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 17456U;
    tmp_msg_0.custom.assign("XOJPCHOMWWGYELULARYPIIRFEZQGKYOSULUATSPFPVZEWNDADMEMUVAVNXJVMIHNKMZWHPHEIBQTRYQQBIBMJU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19630U;
    msg.info.assign("GGMNSNBAFGJRHDWCPWQIZMZEBUHFFYUSOLEUSKPLUCVHXAYNTVOJYTSDAAVHUFIQWSIOVIQTWVLGYVIOQQGMWXOZQAGOXIWKKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.889788919232);
    msg.setSource(4756U);
    msg.setSourceEntity(95U);
    msg.setDestination(29420U);
    msg.setDestinationEntity(31U);
    msg.type = 63U;
    msg.request_id = 53601U;
    msg.command = 159U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.625745395537;
    tmp_msg_0.lat = 0.234008959369;
    tmp_msg_0.lon = 0.193420134541;
    tmp_msg_0.z = 0.942048084489;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.travel_z = 0.0310322094794;
    tmp_msg_0.travel_z_units = 37U;
    tmp_msg_0.delayed = 167U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9634U;
    msg.info.assign("RQONNLCIPYHVEFUGWZVRKXDTEJVDTEKZOEOIGPWUXLBDTXRPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.566990559286);
    msg.setSource(13231U);
    msg.setSourceEntity(77U);
    msg.setDestination(32548U);
    msg.setDestinationEntity(234U);
    msg.command = 177U;
    msg.entities.assign("PRLTJHTMRWBWGWATHWFXUSWJVPVKGKRFBRYQJSQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.404571622739);
    msg.setSource(10149U);
    msg.setSourceEntity(189U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(111U);
    msg.command = 31U;
    msg.entities.assign("NLJEHJBKSLGVFTXUXHEVQPLBYGMOIQORIODOAUVSGFJSAYGZDCLDQHXGVYUFIQDIMLMLOAIWVNHWHMNXJRFOITJAXSFSNKDQZMTXCICQMYFSYRGZWNMCNRJZVVKOCBJPRABCAFVGFGRQCWDHKZWLPEURIILTKYWKAPNWTPEBPOODXQAEAGUMXLLCTBESRXERBGUQHVBTMYUPRNZJKFFZWHBTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.0285423001948);
    msg.setSource(1501U);
    msg.setSourceEntity(204U);
    msg.setDestination(7075U);
    msg.setDestinationEntity(171U);
    msg.command = 56U;
    msg.entities.assign("TKLPGEMIKAFNPQGPCKRAAXNDCEGCIZEOSNJXCJZPKGIYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.301803463042);
    msg.setSource(43410U);
    msg.setSourceEntity(57U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(194U);
    msg.mcount = 128U;
    msg.mnames.assign("ZGMGTJDMRXSGVYXXZWFTAVCXKESJYPAOEYGGFAKCMRFLNTWYQBMMXGBOLUGBATQBFFNEKOSDHOXQNEHECDXVQNQGTFMHGHNEWNMLPFJRCIVRYHBMBYSPGPULJUIKJHQLKOBPAZHOBUUSRZJIDPAOASRVQWTKZFSDQEVEDBPFLVHULZOPVYACWRMTOWNCXCKMQNRSFJXQYLYPDZUTIPSJOHIINLIERZZICAKLATZSIHDTEUDVNKWWXJVUKDUC");
    msg.ecount = 245U;
    msg.enames.assign("XVZYAIPZIGOIVPMEIXPDTXRKIUOLQTOBJGSJOHZMTWCNHEWDKHDYSSFYBXBSALUTKRYJABQVMBWBNPKHVFHKSDOGWJISPLJRRONUCADEFXAKBTMCQWFJORQHGAURCKQHMQCNORLVZLNGENFTMQPKUUMCWGHEQELDPJIYTSOCXIUREFRIVKZNMVSGFBWLLHUD");
    msg.ccount = 129U;
    msg.cnames.assign("XTRFAJCKAWITBJJXGVYYPMGLUPBUGLFEICQYEBORHFVSEUHGBQDRCGXDKODXBZIEQDAJIDFKQOOAPLMSPJHKZBZCTVETCVSVFDGCHQQPGXNYYRS");
    msg.last_error.assign("JDZSVGWDLNAUQFMALPJMRMITHOWXZS");
    msg.last_error_time = 0.347358418348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.560255222826);
    msg.setSource(15471U);
    msg.setSourceEntity(192U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(227U);
    msg.mcount = 204U;
    msg.mnames.assign("QCEVRVOOGQPSPKGJFUKBEOLFBZQJLXKUKVIGTBGPWVDPQHWAYXCKIHSLDOPCABJXHKEKDRNYUSOSIYADERXDITPEYZMHUILRGAYNFCXAGLWFZBZQAAWQJNGLPSGMJUBBMWIZTWXIEQOVRVKHCKZNAXTOTSPH");
    msg.ecount = 212U;
    msg.enames.assign("CAOJHKZEFTCNUAMSKGOYTWRQWAOWJNQECVJEOWFBFMNPHWLNNJLDDXGRRBBHQUUWXDVPYJVQKIMZBXDLZERBYJBEBWYTFQDPNYLYUUBFSVSQGONOTNYTOPWGRXVKOKJZSLKCPDNSUZDDPVCAMIXCRPIVHMFYHMGTMUULEHMXPASDIXI");
    msg.ccount = 153U;
    msg.cnames.assign("PYBIGKIMMHSERMTJQDNQHLCPMVUIORCXXOZNEPDSSVGLAJJFLBYVTPBJLTSYDPNONNWNCQYJRKFWUNRAGKESTVUBJMIBNATXXXUWYILBXCGIMTEA");
    msg.last_error.assign("DWWBVTNPHBDQDDSHGLKNIXZFAOXMAUSOVSUQKJYCELZOPBXCHBSAYEWVOEDPSEXXMUJNCRFFFWCWPVZJNKTDLJVGIFBUZ");
    msg.last_error_time = 0.322566021216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0392706081167);
    msg.setSource(60582U);
    msg.setSourceEntity(57U);
    msg.setDestination(61975U);
    msg.setDestinationEntity(102U);
    msg.mcount = 2U;
    msg.mnames.assign("HXXFJDTIQYRBSCKXDCQMVEXFHVIGRUSCWNNGSJHKMXDOJBVIUROKZOSNKWOSJYLIZUXE");
    msg.ecount = 102U;
    msg.enames.assign("IXMTLXJWXPEKHRZKBRYTDPODQYICGFWXBVYUDCRSYDLSZFUKEZDYCJRPSRRBHCOIPWCPRGTEBSMSFKGZPNAGSLAYCYVAJXNCKJQBTEKTGXBINQLWOOAHDNLZXKIVGJEVMIUNGHUATGZFSPTFZLJHWFIVOKQCEOUHYSSTVBNGBWBPOIOVAWUXQAEYQKQDZGUJUQFLWDJVPUREZNRVAEV");
    msg.ccount = 7U;
    msg.cnames.assign("RFSVJOYZXLLFHDSFVEUHYBTVLIMRZVTDWDUDGJFRIIVBKBUZYIMEPCGYXXHEQIOYMLAOFKBJQKBZJHFPXQFAPPTICZWWSSEGGMXSEZEAPKRPASJGLEOUQNPVMNDJIPHEBIAPTDMVQBZSEZNAYJHGHTYFTSOMKDBQOGXWCCOPUGINTOALWWNCRKUNJBXYSGAWMWNNINFHOQSTLJKDVE");
    msg.last_error.assign("FMVQTOYVYMQTGLGINXJKEOGHWQPRQWCYA");
    msg.last_error_time = 0.64147487277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.00573333256892);
    msg.setSource(49558U);
    msg.setSourceEntity(223U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(137U);
    msg.mask = 9U;
    msg.max_depth = 0.401193888396;
    msg.min_altitude = 0.490920726923;
    msg.max_altitude = 0.124526707447;
    msg.min_speed = 0.309027060261;
    msg.max_speed = 0.351833873188;
    msg.max_vrate = 0.513832217232;
    msg.lat = 0.0994117707103;
    msg.lon = 0.105373608035;
    msg.orientation = 0.674249702808;
    msg.width = 0.232118398508;
    msg.length = 0.774904777105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.673884233985);
    msg.setSource(1431U);
    msg.setSourceEntity(42U);
    msg.setDestination(41266U);
    msg.setDestinationEntity(187U);
    msg.mask = 216U;
    msg.max_depth = 0.755655587062;
    msg.min_altitude = 0.172014212769;
    msg.max_altitude = 0.297680125296;
    msg.min_speed = 0.893922314411;
    msg.max_speed = 0.122222334209;
    msg.max_vrate = 0.438578112177;
    msg.lat = 0.83595457646;
    msg.lon = 0.343518204131;
    msg.orientation = 0.514709664364;
    msg.width = 0.749603818519;
    msg.length = 0.442585150603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.647028537845);
    msg.setSource(9202U);
    msg.setSourceEntity(52U);
    msg.setDestination(38308U);
    msg.setDestinationEntity(228U);
    msg.mask = 24U;
    msg.max_depth = 0.474708108979;
    msg.min_altitude = 0.179191683499;
    msg.max_altitude = 0.744389342549;
    msg.min_speed = 0.691456367119;
    msg.max_speed = 0.927612177009;
    msg.max_vrate = 0.26676475243;
    msg.lat = 0.589140141298;
    msg.lon = 0.323306378896;
    msg.orientation = 0.37277114461;
    msg.width = 0.434110355087;
    msg.length = 0.538724938046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.603143247795);
    msg.setSource(1580U);
    msg.setSourceEntity(42U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.554442088095);
    msg.setSource(42436U);
    msg.setSourceEntity(231U);
    msg.setDestination(47488U);
    msg.setDestinationEntity(161U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.168089860341);
    msg.setSource(30641U);
    msg.setSourceEntity(127U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(161U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.568447361003);
    msg.setSource(25040U);
    msg.setSourceEntity(167U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(138U);
    msg.duration = 22030U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.899579331339);
    msg.setSource(29772U);
    msg.setSourceEntity(176U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(67U);
    msg.duration = 701U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.508422858022);
    msg.setSource(51059U);
    msg.setSourceEntity(233U);
    msg.setDestination(44082U);
    msg.setDestinationEntity(229U);
    msg.duration = 5058U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.737123658229);
    msg.setSource(56920U);
    msg.setSourceEntity(197U);
    msg.setDestination(24064U);
    msg.setDestinationEntity(217U);
    msg.enable = 50U;
    msg.mask = 2122017514U;
    msg.scope_ref = 3542955846U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.116562878747);
    msg.setSource(49697U);
    msg.setSourceEntity(141U);
    msg.setDestination(18447U);
    msg.setDestinationEntity(93U);
    msg.enable = 78U;
    msg.mask = 1636585513U;
    msg.scope_ref = 660707191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.199953448996);
    msg.setSource(12581U);
    msg.setSourceEntity(240U);
    msg.setDestination(12855U);
    msg.setDestinationEntity(47U);
    msg.enable = 72U;
    msg.mask = 3273989404U;
    msg.scope_ref = 702294475U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.70646022817);
    msg.setSource(32034U);
    msg.setSourceEntity(212U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(2U);
    msg.medium = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.339126936279);
    msg.setSource(25445U);
    msg.setSourceEntity(253U);
    msg.setDestination(35205U);
    msg.setDestinationEntity(190U);
    msg.medium = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.458014666586);
    msg.setSource(47067U);
    msg.setSourceEntity(102U);
    msg.setDestination(48208U);
    msg.setDestinationEntity(241U);
    msg.medium = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.837314727946);
    msg.setSource(13971U);
    msg.setSourceEntity(157U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(46U);
    msg.value = 0.789158939611;
    msg.type = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.418609284656);
    msg.setSource(39694U);
    msg.setSourceEntity(240U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(60U);
    msg.value = 0.329617653435;
    msg.type = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.49704004636);
    msg.setSource(49205U);
    msg.setSourceEntity(1U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(74U);
    msg.value = 0.829520501271;
    msg.type = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.369576508368);
    msg.setSource(769U);
    msg.setSourceEntity(219U);
    msg.setDestination(53577U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.135710090277;
    msg.converg = 0.366479627035;
    msg.turbulence = 0.832059655475;
    msg.possimmon = 27U;
    msg.commmon = 254U;
    msg.convergmon = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.620867851079);
    msg.setSource(49927U);
    msg.setSourceEntity(215U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(82U);
    msg.possimerr = 0.0350311119398;
    msg.converg = 0.0829360334493;
    msg.turbulence = 0.542040871474;
    msg.possimmon = 83U;
    msg.commmon = 41U;
    msg.convergmon = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0882297499927);
    msg.setSource(8664U);
    msg.setSourceEntity(253U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.820501990987;
    msg.converg = 0.203407740752;
    msg.turbulence = 0.754985457849;
    msg.possimmon = 76U;
    msg.commmon = 194U;
    msg.convergmon = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.64465954378);
    msg.setSource(59405U);
    msg.setSourceEntity(199U);
    msg.setDestination(48836U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 136U;
    msg.mode.assign("PLHRGMPVFQGGKEDAKWQITZOUWBLILNJFQARKALSHZUIFCLTCPQFKITLGHMTNBXIOOPXRKONXVIMJSAVNCSUVEIOFBHADDGIAWFELZYHEUVVMINSBNYMJPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.586816352117);
    msg.setSource(4967U);
    msg.setSourceEntity(183U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(36U);
    msg.autonomy = 45U;
    msg.mode.assign("LIVKHLWGBYYSCAWVVVWZTWYHKFOOUMTHKPFKECN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.104728764177);
    msg.setSource(47491U);
    msg.setSourceEntity(175U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 47U;
    msg.mode.assign("VDXCUHTVGLPURQWFSSKYJSLXDEDJLJDLSKLTKMJMARCKBXBFXUPIEUOVCZHFLWVEZDWZBUAIZNCSXEQIOYAFBARZWAPGCVUKAHTPITOMUMGTXESZEYPEQGOFYQBDJZYAGKWSPHMCPJQQIHDWAZLBPIOKOVAMMGBMTYGHNMGALIONUDYIXRQCSNTOERCKKUVYKHNYNMPGBQVBZWEXNUFWEHWJJHVRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.244857206133);
    msg.setSource(11961U);
    msg.setSourceEntity(91U);
    msg.setDestination(7650U);
    msg.setDestinationEntity(239U);
    msg.type = 35U;
    msg.op = 244U;
    msg.possimerr = 0.0213969302446;
    msg.converg = 0.0301136619584;
    msg.turbulence = 0.170147538991;
    msg.possimmon = 83U;
    msg.commmon = 250U;
    msg.convergmon = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.452013865555);
    msg.setSource(21611U);
    msg.setSourceEntity(20U);
    msg.setDestination(47087U);
    msg.setDestinationEntity(6U);
    msg.type = 0U;
    msg.op = 11U;
    msg.possimerr = 0.318219948044;
    msg.converg = 0.73351664501;
    msg.turbulence = 0.284651099884;
    msg.possimmon = 100U;
    msg.commmon = 243U;
    msg.convergmon = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.148628046331);
    msg.setSource(227U);
    msg.setSourceEntity(76U);
    msg.setDestination(48667U);
    msg.setDestinationEntity(239U);
    msg.type = 33U;
    msg.op = 34U;
    msg.possimerr = 0.643401772276;
    msg.converg = 0.879840096374;
    msg.turbulence = 0.29479621567;
    msg.possimmon = 16U;
    msg.commmon = 2U;
    msg.convergmon = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.14031922406);
    msg.setSource(54601U);
    msg.setSourceEntity(48U);
    msg.setDestination(35286U);
    msg.setDestinationEntity(45U);
    msg.op = 80U;
    msg.comm_interface = 70U;
    msg.period = 17538U;
    msg.sys_dst.assign("VFWBNXPNJRUEJDPNFFZQEATQWFISFCWVTHKYLYRRDNAZEDMBOOYMEZPTBIELLBGSMKDVOKGACBTMWMOLKGGVWMQCYZAWATIDGKJXGHUUCQNRWAHEOQUGIEHRGQUBVPSEZFQBIYLXXRCYVAOPHSPNMTSYUZCVHQIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.968679852918);
    msg.setSource(38119U);
    msg.setSourceEntity(81U);
    msg.setDestination(60328U);
    msg.setDestinationEntity(200U);
    msg.op = 246U;
    msg.comm_interface = 218U;
    msg.period = 1131U;
    msg.sys_dst.assign("RNWZEJPICZCYYEJCOGMLXQCLDBWTUGEKJYFXEHBSXTTXGGRAUFZKYRSQWUMNWOIPCBPSRUCDSENMMDRXJEVGRLWDGUCYIZYKSIZNSJNRWCALIPCOODZYIZJLYAQVAUAOZJTYVDDSQXFUDXNSZTQDSFXWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.861841066642);
    msg.setSource(35423U);
    msg.setSourceEntity(54U);
    msg.setDestination(59179U);
    msg.setDestinationEntity(192U);
    msg.op = 4U;
    msg.comm_interface = 156U;
    msg.period = 38506U;
    msg.sys_dst.assign("BVTKBILCJNMACEBEIQRROICZZHYWCSDUJFMZAIRTCUELNZDPOEUPJOUEPHQHNFMVFGQKASSRZWTQZPHNCZHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.351667302656);
    msg.setSource(25004U);
    msg.setSourceEntity(47U);
    msg.setDestination(26575U);
    msg.setDestinationEntity(229U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.0992529146085);
    msg.setSource(24485U);
    msg.setSourceEntity(55U);
    msg.setDestination(37109U);
    msg.setDestinationEntity(119U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.81076105028);
    msg.setSource(52606U);
    msg.setSourceEntity(27U);
    msg.setDestination(34054U);
    msg.setDestinationEntity(75U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.888628594997);
    msg.setSource(48135U);
    msg.setSourceEntity(106U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("ATQPGCWBOCNFSRITZLVOZFSNITQOFKNBGHGAQORVEJUATRWXQYHLZCOOIKUFKKKFQQVPGVMJCHVMYSDERYDAANYJYVXSNWDPUAPEYGWUAXZOBSSOVKHPZDDONFFEYNIKXGVVMCDPCDAZEWGPS");
    msg.description.assign("GQEUEINTLZMMKGJGHFJNYBILKDUISLADOLZX");
    msg.vnamespace.assign("FAPLCMFUKJEVYVXGVQGFZPGHWIDEHHHEHJSKULYOWVNKTC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PTYHEMPXEYIABMRLHSVXKSBEZXQLEISFGPLJIHONTXKQKSGCUVGQHLWJZYHVQS");
    tmp_msg_0.value.assign("ACGNRBAGODWTOGMZDETRYSAJLIJPVNE");
    tmp_msg_0.type = 104U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CVDHOFABKGILYUPSETSAJNZNYBIFEEVUITQGQFVDIPLNZTHNMSXKTLXBBZQOEOIZKGQYCXDGRQXJNWUTNZHYBTLEHADDTDWBKMPBMXREOGILDFPJSNOFHNPJCUXLRCVCLBMRJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KOVESQOPXSSTJAGAAZHLYGVCWFPGJQCMWNXYCCVYHQCGWDMGXIPWLYJXXQZHLLNDRHBRNBIYFRKHQCEXTPOLDHBACNPSQWUNFBKQPXBNBUMTISZNDSECSMGEZUYUWWAZRYUPTZEPEYLCTVKBRTGTGWAXVSOKIUVDFLRIWKOBQRTAAIMNIFZMHNJGGMKJUDOEVBZDQYBO");
    tmp_msg_1.dest_man.assign("IGIEIPSRFXWIDHCSTEBJOUZLPQLYCLECIYXPZQKFJFHUCOKXGKQZWWQBMXPMAJTEZWZMYTBNXQABSPALJEJUGSFPPUSUCOIKIYGTMTZJFSCICVMRNRHJMHZBGHXWUVBAGDMNFWVZWOYZXXPUTFJLDFTQFDSSD");
    tmp_msg_1.conditions.assign("HYELJLHKUBOHJFGVBKORFYNCVYOSMUDXDGISEANIHTHIUQJPGRMGMFBOSNZALVAFLSGSKYWNETGFWCTCEJWXIEBKQSZNLIPAVQPTELXJKVWJNDIUSIBTKRROACQMXZHWTICNFOEBFSUHPQELZGDBDIWYGYRLUELKDQHHSZQRRHCOKRJUSAMQAYYQTAZXDGPDWXCXMPNVWVZWGNOQOCZBTZVLYFDZKFUV");
    IMC::AcousticMessage tmp_tmp_msg_1_0;
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.360709628178;
    tmp_tmp_msg_1_0.message.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Launch tmp_msg_2;
    tmp_msg_2.timeout = 61624U;
    tmp_msg_2.lat = 0.16832895671;
    tmp_msg_2.lon = 0.426308149971;
    tmp_msg_2.z = 0.921306520661;
    tmp_msg_2.z_units = 116U;
    tmp_msg_2.speed = 0.0584521186396;
    tmp_msg_2.speed_units = 129U;
    tmp_msg_2.custom.assign("XPQHGNSDROWRJHELUMAPODZAJJTJEYHDVRFTUXQCZADVZAFGDLYBS");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::GroupStreamVelocity tmp_msg_3;
    tmp_msg_3.x = 0.562177274738;
    tmp_msg_3.y = 0.823416914512;
    tmp_msg_3.z = 0.835948154447;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.724792798446);
    msg.setSource(21822U);
    msg.setSourceEntity(180U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("YQSILXBIEDGJXEYHAQPYLOUJAVKDXZIEGIPSKEFKFCLTWIZUMGSFVSVMZMLMHNUNETFBSKKZPBGKQFBDBKUOLBLHDZDYPECJEHDJTCAFJVTXCJTWVBRVQNPOQGZWNTUREFMMMDNQF");
    msg.description.assign("YAZOHOEMOWONXIDZIEBIKKEJLFPVFLQJCIKBZAFZQKXVZWJGOXDCFIDRAKGVNQCLKFWUZYWQCLNHIVCHWHUPEOQUZTELCNSLZGCUHDABESGNQYYPGHMRYMMLGSPGQROBGTYEQJBUWXGJXVDTFCNFAOF");
    msg.vnamespace.assign("DMMLOAZIIJGBFXIKFKMJGXXKWIERQLXZPXELTIZNYNXHWNFLFEWBZSBNTHDLTDSCWUVYEPJOMRRJMYEAQEGVGVURXCFMUUVTEBUATCTFVWLRADZHYWDJPPCKWTRPNZXIJYFZQQYUKSUSHCVOFGUYYMSYSTWKIAMQQUPUXIJVPBGEDOLKVOTYMCHWBKACORAOSDHHCVJB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZSVEWTUJNHOAUCNOYKDRBEOZTHUUSQWTDUKLAVYDOMNKHQWRJRANKLFOOFLWRZDMFBOURVPVNCKDMLFNHUQLAGQKTSGSLCNBHKMLXASEZSKGZPAWFTFIOEFGLIAPAPSQHXYBQTTPWWEZXUMMVTFHZZBIIARXIJUSOIHVXJGXEYVWWGBCJIHBTXYCHJDYEQIP");
    tmp_msg_0.value.assign("CDULQLYRIVYQEXIUKTSBIAJSWFVTUABXMSWHWUOYLZXVQFFCBIXLDDSNWRVBQNUFQHBTPSHSUENQTLVPQSWTRHDNIHFTNDAFXHJKHXGGWMVCBFW");
    tmp_msg_0.type = 126U;
    tmp_msg_0.access = 10U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MMARNTTUQUOPGGAXAEXXTAVVRXXXKMDVTOXPAWOPYSNBRZDEENYVKHNWXXQZFIZTEPLUCADGCVRSCJUQRBMTVAGYZQKRSHIYHEUKLKYLPCCQQJWPJJIINRPOFLNFVUYVMFHVIYGKHBQJECYN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AKWTXAOKTYUPWENXZQHANJSFNMRTKSZUQSCCPCRKAPJGORBZJDFZHIMLGNIBBFSDUYTENYTX");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 65282U;
    tmp_tmp_msg_1_0.lat = 0.595631410359;
    tmp_tmp_msg_1_0.lon = 0.882071445403;
    tmp_tmp_msg_1_0.z = 0.0178649454273;
    tmp_tmp_msg_1_0.z_units = 13U;
    tmp_tmp_msg_1_0.speed = 0.630643944409;
    tmp_tmp_msg_1_0.speed_units = 109U;
    tmp_tmp_msg_1_0.bearing = 0.291773951069;
    tmp_tmp_msg_1_0.cross_angle = 0.238033111758;
    tmp_tmp_msg_1_0.width = 0.57536126347;
    tmp_tmp_msg_1_0.length = 0.719903799988;
    tmp_tmp_msg_1_0.hstep = 0.878069584801;
    tmp_tmp_msg_1_0.coff = 138U;
    tmp_tmp_msg_1_0.alternation = 175U;
    tmp_tmp_msg_1_0.flags = 248U;
    tmp_tmp_msg_1_0.custom.assign("ZKJZKWBXIQWVVGGYXTMLJIBTWTOVFQYSUHDNYXXUMLHBDRFOBFHMYOGEUVBUEDQTGNVWPIUXIGUESVKZDSXOZFILQNJKHOCTKYBRKKJAVZAMJYZUDGFCOLWMWTMROHDPNLCJFZPCPCTOLDYYHBCRHZIJQYDCPIAGKVADYGSH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::GroupMembershipState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.group_name.assign("UIJMPDQEQBVVLLAWZPFGGKZTUJKTFNATMWMDCWRGRBHFNSDWHCSBUVRAGBNDMOZYTYMSZVJQLGHNTBXIGKERZMCQFJVSPFDNETYJQUTSFTJNXOWVOUAGUDRJLCYCCZRHORTGOYAZC");
    tmp_tmp_msg_1_1.links = 4209867790U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::QueryEntityState tmp_tmp_msg_1_2;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DeviceState tmp_msg_2;
    tmp_msg_2.x = 0.572628250134;
    tmp_msg_2.y = 0.650514091673;
    tmp_msg_2.z = 0.678276863623;
    tmp_msg_2.phi = 0.694082235242;
    tmp_msg_2.theta = 0.249524402549;
    tmp_msg_2.psi = 0.0794300796407;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanDBInformation tmp_msg_3;
    tmp_msg_3.plan_id.assign("YIZMVPCPOUCMQLEWPOOXALPTTSPOUNBRIYSFCGHCDTYTTVAYBHAMJGEMBUFFI");
    tmp_msg_3.plan_size = 61318U;
    tmp_msg_3.change_time = 0.798684878834;
    tmp_msg_3.change_sid = 6044U;
    tmp_msg_3.change_sname.assign("JAVMVBZMHURXZOSKURBJGIKMNLGQEZTQWQARDIVNMMTCGFZVAYTIHHCQFVKESSNUQPHEYTKMLPSXTDWKEYVLBUEUWYSISCODWONLXWRPDXFARGTFQJZXJCJTQBICATBDAIFYMADRHSOISLQFUCTZGBKGCXKIXGOWEJFNGSDLBYEAAHPIOEZMGJOLLC");
    const char tmp_tmp_msg_3_0[] = {-120, 72, -77, 44, 119, 49, -6, 5, 21, 13, -76, -68, -3, 103, 116, 91, 69, 47, -99, -60, -5, 25, -83, -121, -123, -72, -27, 109, -1, -8, -127, -124, 48, -52, -120, -58, -39, -90, 124, 9, -93, 65, 100, -17, -63, 93, 95, 100, 100, 92, -77, 47, -49, -100, -55, -71, 115, 38, -4, -94, -85, -75, -114, 36, -33, -77, 38, -10, -21, -106, 57, -5, -58, 71, 54, -41, 38, -38, 66, -14, -127, 119, -72, 9, -7, -121, -109, -55, -86, -102, 8, -3, -55, -26, 99, -80, 126, 54, -52, -29, 97, -63, 85, -31, 124, -123, 27, 39, -22, 97, 12, 107, -31, 118, 23, 90, -57, -107, -31, 124, 107, -84, 29, -116, 21, -81, 60, 4, 66, -7, -122, -70, -1, 101, 62, -23, -7, -90, -66, -115, 50, 51, 101, -28, -11, -37, -34, 25, -76, -65, -21, -42, 42, -107, 11, -31, -108, 110, 1, 9, 93, -38, 2, -93, 102, 125, -94, 100, -33, 102, 19, 18, -7, -68, -44, 80, 58, 14, -44, 72, -84, 54, 50, 125, -100, 71, -64, -126, 122, 37, 96, 103, 44, -121, -94, 37, 34, 33, -53, -104, 100, 89, 55, 8, 102, -103, 10, -116, 64, -8, 89, 121, 58, 14, 0, -59, 60, 107, -113, 96, 118, -124, 107, -54, 43, 70, -46, -87, 84, -1, 2, -20, 126, 46, 110, 66, 46, 82, -101};
    tmp_msg_3.md5.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.858797121931);
    msg.setSource(41322U);
    msg.setSourceEntity(187U);
    msg.setDestination(57353U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("UGTFPONKWDNGTTGAKILHZKWVKOSFNK");
    msg.description.assign("GHPMXIXRWQADMWJCQZMWJLKUNUTLRPOVIWRICSJAYJDIONKXBYTIBWZVYPYDJNFAELEKYRBTZZOVUNQEOXHSHLZQFLUUWPBISNGJJCKFBVZMCHGMZYWMWSFQDQTJYRXOENOHEIKONQNOSXYTPUTQTHTCGBKXQAVDLFAHPOGGRVSZDE");
    msg.vnamespace.assign("EBWCZCZTFTDHLSKGXSMDNFOGJZQPGAKQSXAAAVVIZHTLFHCZIHKUEPSBHOTEDPYUAYWNMPJZGJTOCLEJNRBLMIMISSSDGCMPOHKQAY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JEXBFKWSHLKJLCTWGOIACHKZRUYLITPLRSLKBOPXQHYBHAVURPQNVMRWJUMVNFGQDARF");
    tmp_msg_0.value.assign("KESQQCSCOTWNYLJJVDIRXUHGDKQUUAFUTCZGJXETHOHNZZVSKTPAPELGVVBAPLFDTHJEHCWEXVZHACDPMIVBWIMDAFUPZRYTBROTRMGLGIIXLCJQMNFKGBYCBXQKDUIBXVRQWSYMSELDZUHORYFNPWEWHIONUFSSBCNKRJAPKXFMGTTEKBVIYXYIHMSGPLMBJFIJHOJLGDYOVOMRRKNEFAXZQWPLVUPDJEXDAWSWLQKFZCOZZY");
    tmp_msg_0.type = 179U;
    tmp_msg_0.access = 166U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GORGSPMWAVQBCEODXHEIOCMUBJSUZVNOJLGUQTQBRMQWIIYEIUXXKYYKRJTBBVQLBAQPKPJXEZVFMZCVPWGPNAQDNOSTLMMPMULMCFDXPIGYRXZ");
    IMC::UsblModem tmp_msg_1;
    tmp_msg_1.target.assign("EGUYXPBHWHNHFNQLITDSFCHBFSJEMRDJIXAYQHVAIIYDEMSKCGFYQNXAXKFYPNMMXXTGZFQBCKJUUPWTSXYYSDAXEUWO");
    tmp_msg_1.lat = 0.382600147425;
    tmp_msg_1.lon = 0.900836942541;
    tmp_msg_1.z_units = 226U;
    tmp_msg_1.z = 0.864008492507;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.417045712703);
    msg.setSource(22434U);
    msg.setSourceEntity(51U);
    msg.setDestination(29819U);
    msg.setDestinationEntity(72U);
    msg.maneuver_id.assign("GAOLHHXSIOECYSHIAGPWMIKESLVEXBRUBQJQSDZJMXDWZXNLWLUFTMSNOKZHMLGIHLXYPCZFLOQGEYNFVZOBEKWELKZOQRMEUXFFURDCKVJAHOCSPTKNTDVXUZDYVPRGKNSVKHUZJAIUAGWQZSYGUCZQYAWWCPOAPOFLFVCUPMJRDYHNJPDWRNXIFSNAXEUMBHMTWEBFQVJJDPLRPSNIBIR");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.770000571605;
    tmp_msg_0.lon = 0.81101554874;
    tmp_msg_0.speed = 0.707089147609;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.duration = 40169U;
    tmp_msg_0.sys_a = 35554U;
    tmp_msg_0.sys_b = 16684U;
    tmp_msg_0.move_threshold = 0.287945919455;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.520503445629);
    msg.setSource(27149U);
    msg.setSourceEntity(177U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(18U);
    msg.maneuver_id.assign("CBMURETWURSKWUGXOWRHPQCNIPQSHPJQIDGSHCJKDYHGDKMQDPOECHXPFVXYXFLLVKLZCZZYAMXBKOQFVQJHEUTPQZKEDLOIHBAMPEZSASGDUNTFOAZVJZJIPTAQBE");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.182247868736;
    tmp_msg_0.lon = 0.00262675611937;
    tmp_msg_0.z = 0.508960172313;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.speed = 0.270237592525;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.bearing = 0.188110614797;
    tmp_msg_0.cross_angle = 0.446474514442;
    tmp_msg_0.width = 0.185271621224;
    tmp_msg_0.length = 0.127015944395;
    tmp_msg_0.coff = 137U;
    tmp_msg_0.angaperture = 0.396705660681;
    tmp_msg_0.range = 41906U;
    tmp_msg_0.overlap = 180U;
    tmp_msg_0.flags = 191U;
    tmp_msg_0.custom.assign("QSAICLUXGLOEYUESJKADTJUSXZNRUJDMYJVAKFXQHQICBZNGOEPFOLAHFITCDNYVOJKPZUXIMNPADQKHNJZDGUWPUMCYKVRISKEDOLLSOFTIOHDEWGYTAXRO");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.150103152395);
    msg.setSource(30904U);
    msg.setSourceEntity(103U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(208U);
    msg.maneuver_id.assign("MXCDYIZAQMIXPUXGDVETYERQRJCHMWGYOCDYPJSXPNLBYYAELUZMOVGD");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 10591U;
    tmp_msg_0.lat = 0.782598938006;
    tmp_msg_0.lon = 0.402841833506;
    tmp_msg_0.z = 0.54866113407;
    tmp_msg_0.z_units = 116U;
    tmp_msg_0.speed = 0.810359561664;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.custom.assign("KSVGXWMKISFLDRRRABCBUFEDLKTTLPHEVTFOWYKTJUDQJIMWSSHXPVDIJFWRQHAEEJXZIYLMLQXOHYPGZWQWAJOBBIWZIENLCPFENAAMFOKNOPZNWXVGUTCLCYLMOVYHBRTHDU");
    msg.data.set(tmp_msg_0);
    IMC::PowerChannelControl tmp_msg_1;
    tmp_msg_1.name.assign("GRWMXVERVOWTWPSB");
    tmp_msg_1.op = 18U;
    tmp_msg_1.sched_time = 0.933801247339;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.256412221382);
    msg.setSource(28635U);
    msg.setSourceEntity(62U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("MAEQERCQEHJVDNFDYRCMZKPCGIZUTQRIUWDTNUFKJQEAWHSSAUWMSMTLXUABXHFMMINETLQFUGCZUWBISHKAIMLILWFRTOXHPRBSWMZFBJQQHLTPGZAUMLXJYVZKJOXPKZLOZDXUHJPCNXKVRLPNWRVODWQABWYIYODCOEIUGYCXBNRNHMEDCETASJFOTVFENKDZSVOOYSAQYYVWSGYJHTRZTIPVRFNKDG");
    msg.dest_man.assign("TLTSLLJPBNYUCVUPITUMEWNVADTUDRSXQFIHQWPMNCDHYRURBZQHCXFXGWDNJCXMWCKZPEQYBLAZHEFXIGRABFSXOPAPWOOHQSQAJKGLNGXAMTEKVGLGCJFJPXOGMVLBJIUNFERJZICWXAAJGPHZQNTTWEFYBMJTKSADZKCFRROVUKEOZRDIKKYNUEGDY");
    msg.conditions.assign("KKHTJZJHZSELXCMALQHWAUCPPIMTDKXBCMRBNCQRSGDVYQJAXPDCUVOCIHCWZSQQLBYKVWSMXNINGOAWCGBUUUWULWEYGRUIRXHXORAWYYMFNETVPWKJFDCVFLVOFKMYSLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0965351825832);
    msg.setSource(38381U);
    msg.setSourceEntity(80U);
    msg.setDestination(28073U);
    msg.setDestinationEntity(220U);
    msg.source_man.assign("VEQBIVFQGLKDLRWR");
    msg.dest_man.assign("KEYYBEPGPILVVVHRYMSOAXPLQINKQDQKIBETOFNFHMZHMBAWIXTYPUSAVFAUXLMYJLCDASAKGNSRSPXNBSPIJTIGSBEXDOWEUHECCDTYNRNFMFAQJZXMINGZODTJBKJOZCZPYDCGPOWXWCGUXERUZAJHPKOSGHQVLMXIKCJGJQQMFRNFJLV");
    msg.conditions.assign("BOFCEYUTUHVLARKQNZTQQRWPCJAZAVRNPEDTZKOBBVOAIHMMGAPCGJTNAIYYWDWBREMWXSRFXHTPBWHRLJZDCETKQJJFBBRSOACOEXJGRDUICAGQMESJGLBDIXVOPXMSYUHHIGOAHBFKDMHZSGIRKDWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0683034128591);
    msg.setSource(56470U);
    msg.setSourceEntity(38U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(198U);
    msg.source_man.assign("OVNMPHCIRYSPKQQYTXUXXXDBTRYNZLJGGEZELHUHWBOSMNTITOMTFGDIRPIKWZQVQNLCDGBEMJLCAHZNOVDOREJGQDEXLVBYIBMJRCJMYPKXDJGRMHNZOAUJOAPOVTFBAEFKPJPLZSXBFWLPQSMCUCHAEPMMSZEWNHRGKGZIIRACFIXKSDYXAUNDHWUJGFIHQDGFWKIACVVQYFULWAQBSZNE");
    msg.dest_man.assign("AMLAQCVPYSEHJMRKIRKTIEUYUFJYFZAPLBSILSCEUNZJGWBZSXMVLTBTROGYTWAYLXLXPFQCHNXBMNVDVHKWOHJZTSCWEEGRWYFIJPWHHKQMZMTCGAXRWQIKVNEQPJWYVUONEULJOMQPEOFFRDVXNIUGQOIRYDZQIOGDS");
    msg.conditions.assign("PEUXVSCHOUAOWQVNTSSNJDDFXKNIJWGFJGJPEMCMZFZAULUBMPLJLNDEVDZSAAOAIYKQDGJCIPEUHLYJZLWHOTEKKKIXHWBVGSUZCNDPBRZXBMTGCLMYYWIOYVS");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 112U;
    tmp_msg_0.error_count = 61U;
    tmp_msg_0.error_ents.assign("MSMXXVNZDCGPOIXUYVQSCCYMTZTCSWSHJFKNSXHHSLFKGDJFRICWJEAZSLLTBQQFFYHGZCKVRBBAARNFHYLBWMSPLXFARODJJJIKBVEZBPILET");
    tmp_msg_0.maneuver_type = 16575U;
    tmp_msg_0.maneuver_stime = 0.468688093851;
    tmp_msg_0.maneuver_eta = 49831U;
    tmp_msg_0.control_loops = 2493801269U;
    tmp_msg_0.flags = 83U;
    tmp_msg_0.last_error.assign("KWTLWUKSMEHPQDZDMKZWVQUGBEHAXQIFJKLVASMHAOXNX");
    tmp_msg_0.last_error_time = 0.459639058767;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.169223633873);
    msg.setSource(54660U);
    msg.setSourceEntity(43U);
    msg.setDestination(47409U);
    msg.setDestinationEntity(30U);
    msg.command = 186U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ASZPKNFRVMUQLPYMFJCGJKDFCPZUKNUSRPWYTQQZIKEXHSABAJVEGNQHQINTLHGVTJMGXHBUZPXUHFXKRDRJRATJHKONEYPBPSVCZSWESWICTFGCKIGMJDYFNAUDVTAOAEVOXYCEPDXPMUMXFBGOIDBYOLNMYIBRJCJTOMOUYLRQAEEIHFMDILSWTKVVWBCXQHLODMOJYSQLPLNZ");
    tmp_msg_0.description.assign("CQPESQKESXEPCIQUWFHBUBTVXVGJWBBIZWZKLWKOIMZWAFNRJHIKQILHNMBNNECTDVRYGOCQPNYFMJPLLFKAAPFCCATAFACJVMDQQBFZEUGDNUTPGIRDLZGCYWXEGSYVBMXSBOKRXVCZMFYAIMUNSAHHTDVIXPDGOPUTTGEFXYLPXWLZ");
    tmp_msg_0.vnamespace.assign("EWDNRTOAKJBWAXIZUVEGDEZVKXRSJUAXZCFPIENLCSSLMGDTJQLFTHBRVGRINIZ");
    tmp_msg_0.start_man_id.assign("WTFLROWXFUEYIZIRNCVWRHLOOACGOBFKFMHHUHFPMQQTQUPMGXHSARZQJWSAMVCSYNBZELTMDDURKEWNEDLMLQDPQDBEUVJPJWPZPQBQIJUBGTNJHWNVIEMGEJSXSKTKMIAFYTQOGNCQESUXHJDMLNSRKPSKNVRBLFCXZUYUOJCOUTYFKODJXFKDAJYPZRGLYEYX");
    IMC::NeptusBlob tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.content_type.assign("ICZCJHYDSSTXBOXDGLPREBOMSQEGAMUVHBTGAJKXEQLSVQPNRIHOFUTWKVYOKULYIIUPZWQNXARZXTPMWIVXHFVNCGHNJEXNZRHUICUGWQHVUPYFYGQFOECVLDJMJROJOASPNPVSAGIEOHKQHIKVEMLWHLDDQTKMKGBLKZGZJWCRYBXRMMKTOSPCUJRPAICTERFSDFCN");
    const char tmp_tmp_tmp_msg_0_0_0[] = {71, -25, 50, 9, -9, -10, -102, -55, -56, 40, -82, -44, -68, 7, 72, 14, 70, 92, 114, 59, -46, 118, -93, -49, 65, -120, 35, -116, -53, -53, -110, 50, 29, 53, -28, 94, 108, 76, -69, -1, 58, -65, -65, 122, -108, 85, -30, -118, 120, 37, -42, -119, -68, 29, 112, 31, 64, -118, -40, 72, 73, 83, -73, 22, 120, 25, -32, 42, 16, -76, -72, 113, 89, 117, 37, -1, 27, 53, -120, 94, 38, -92, -111, -22, -125, -45, -57, 123, 70, -88, 20, -90, 93, -63, 44, -48, 92, -33, -9, 18, 27, -59, -16, -47, 64, -3, 8, -42, 40, -38, 110, 122, 34, -7, 97, 20, -117, 20, 95, 117, 50, -95, -70, 116, -23, -40, 70, 29, 22, 100, -20, -116, -37, -38, 114, -2, 102, 20, -37, -37, -116, 20, -10, 23, 6, -33, 33, -65, 86, 67, -48, 112, -49, -35, -58, -3, 114, 107, 124, 5, 12, -118, -126, 72, 4, -1, -101, -88, 79, -6, 91, 105, -105, 70, -17, 109, -74, 30, -25, -99, 125};
    tmp_tmp_msg_0_0.content.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::WaterVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 95U;
    tmp_tmp_msg_0_1.x = 0.454431860662;
    tmp_tmp_msg_0_1.y = 0.338072429375;
    tmp_tmp_msg_0_1.z = 0.00854714503851;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.886863172595);
    msg.setSource(21239U);
    msg.setSourceEntity(246U);
    msg.setDestination(22171U);
    msg.setDestinationEntity(160U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YFGHCDHMQVCBKUUVGPWIEKYVXCQROKRBSGXGFSETPLGSFEWZEMRHGULWPJINLPNWNOCJCPSIKYVUKYHAFFQBYNAXDRJACONUKDLDARTXNNPTJQBLIBATNRKVJUGHCOWPSNIYZMIRSRDJHZHXJEABFWZLFTZEMHZQDQTTWFTIMCOKMSJOBPZYXEUZIUJXQWMEXAGSRLQDELJDXQVNZDBZYMMUOXHYTAMICVGPGLISWOBAOEKCAKBWPSVVVUFDT");
    tmp_msg_0.description.assign("LRCSCTTAZFSRSXITVGQCPMUMRHAIBZBUQVFSVJYZDFTJMYMFJVDMEYVNCZZQQOKYZPWOGUXDTIXWOPIKGQUGKGSVMXIPWNKUVKNRFQACTTYKHKBDNCRBCWPTWAOQNGEOSRVPAQNSZJHYBTJFHIHUCWBJIFEAODAXWPMELLLQESHSOJOBNXXALCRLYPNNXYBUEGJGUMKPETWBUWHFGMARIROHDXEEQJASKORHEWGVIKLDPZYLFCZBDVMXLLHDU");
    tmp_msg_0.vnamespace.assign("HFGLZEPGFKSPNJMDVAGUZAAWQRSIFSXBTJQRRPZPCFKATXWUKFBUVYKDVDYXLOOQPXNQNQRCISKMFYGOVDHOBUWWMCBZCOLLWTTIMIMTXYDZDTOSJALCYDXSASRTZPQZPGANO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SCQWFRVKPEMMEYWAGAIMBAPRNMIQPTZOYUIKURFXCZKLONEN");
    tmp_tmp_msg_0_0.value.assign("WCTSYRIZIGUSCYQLYXDJKICXVBQWPXCURXRMBRQOLILETSNRFBULJIFMZBOOKUFXWIUDHXYORQFKUAAMKWMJJCKKEYBEPZZXAKBGOALLFZQFZHXVBREHNYSDSWHGVACGTDMANSVNNQGCTYJNTFGVBVQIEPDTUJBMPDDOTXESIEWKJVMEYVZPHHDMSXEWUANLRNVOIKHAQKPWGTHHUIZLZPCOOMLYCEJDJVSBNPUTGJ");
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.access = 113U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QZEWSCGLYGVIDPDBCKTJUQKBRPSHRIDUBTHOQXYEGWMWTLFGHLPNCEGVKXYDWJRZVTQZHHBSPBNQORETEKSGPXDCSLNTUXIPTSOJGGFXIOKYKNBIPTOVWJHTKJCQRWCQVPNQCRMMUOABZUMUFAADPOMJFEZUVUIZWYFJEXXFLAZBKYCMCNRMVDSVMEFOROPFJZLTYUHHAICJVZBSNSFDENWQAGWUIVNO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JYNNHRJLAOAZFKFEHASKOUZXFPCFAFWWEYFIHXZWEBGHRDLSAATELXPOHSOQSBBOVZWUIQORDQUMUPPWDKHVKILBPIGXTEICCYYCEQGLTLMNIDNVQBNSUGCYON");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 39302U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GUGWIAXNOLVVDZEJUYJIYCKLOTJSCBAERKECBYOKCTPKBHWBDTAHZPELXBHTILAVVZWXJIHGYZZXWUJNVTLCRIPSRJRIALCIIVRRSEBPVKOJPUFQNQRMQRQDWMPOHQYZLXMERMYVMSNNJKMDEYXQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id.assign("HOLGUKADVU");
    tmp_tmp_tmp_msg_0_1_1.sensor_class.assign("NESMCPVDJNRUEIAWFRULOIOUYLXCFZEUZIWYTCCUBIDUNVIHQVVRDDWWRNSLEJQJVOKNKZJXNFOXWBNVXIGGNROGWQRCWBATLSVOHSAMPAY");
    tmp_tmp_tmp_msg_0_1_1.lat = 0.427342650303;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.644867055155;
    tmp_tmp_tmp_msg_0_1_1.alt = 0.753256610865;
    tmp_tmp_tmp_msg_0_1_1.heading = 0.66214202591;
    tmp_tmp_tmp_msg_0_1_1.data.assign("XCKSDZUITYFSICYQMQEEXTARIBIEAVIXDHSCLGRFAKEKMASLLRUDYEPPTECRCYCULNJMGJQETOHNEJZAVNDFMWDCESGSMYJILJUFMDOJFPWXFTKPVNPGNIOAKXDXYAQWYQPBPRNUBKHWGSQVLTQBLNTTYMWHIOAUUIZVHRAOKQAMLFZQDJJKVHMZRF");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("NJSWFZDKZXHKHJOAYXOWSPDKPEZULNLAIEDTIRVFKDVJCPZTTDIBAYCOURBQUXRBQBSYJQNPTWFVCQYGKUJZRZHXGAQGLRMMEUIMACOTHKDYPZPAENSCTXLOFILSKHUOIDEJDMGHNAWXOOYCLIGH");
    tmp_tmp_msg_0_2.dest_man.assign("NUXTJTIOYBLQVJHRSYKRLZHRSFVXXXOHWVFTIXXMGZUWJZGZBJTTDONEZIZVBNMVMENRBNCGQMSSGBCRLTCYJWVPOIDLTEASQKGSRDPEHKYMPWWPSFOLAGHSCRHHKUEPBDFDXCDNFYQIQRTQVFGNIQYABECNYFEKJJRZHLYMLEDAUTPNOWSWFIMSJCEJKLRXCBAIIOCPQPJZOKQYUQKNHMLVCKUGUA");
    tmp_tmp_msg_0_2.conditions.assign("BTIPSZOPRRZYAKOHIUNPDDXCQEISCQLSFDXXTLZJAYQGVUBRGEEPOOGTBMFEDSICKWHCXWQJJCDROWERLKMMZVDMAHMGLLIFUADLNRQPPAOGRAGCYFNZALAKTFWVYGGNSPUVKFHZZUHNDRBBKS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::RemoteActionsRequest tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 214U;
    tmp_tmp_msg_0_3.actions.assign("KHYFIDKDDRLDJBMWMRGJAHDXXWQVMYYNCFEVGKHWAJTLJHOPXAOFEMFCXHIVDTMWTNAOEGLXTNFGECRNVACYBKAHPBECPKZYZRNTYEJSIPDBOJWPUMAZKSVROFSLHXMAEYZQEZHUGPSCJFTRUBSNGNIXFVWAXDBQFZGSSBWBTWPZDMLDUIGSOSQQKBUIWRVCQNURKPOXUPQQHZCMVJUHIEQWMUICLC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.812733293259);
    msg.setSource(12756U);
    msg.setSourceEntity(31U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(27U);
    msg.command = 133U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VXHPCQDNQGDKJHGWECWSKUIZJYKZOULOKTHQVVUAJDPAGPWAJCWEXNVRUOMPVMYNHBITBORXQSARBBANNHLCEUZYCZSZEJDBWRQGIMUQGFGXIHBZYWGSTAFYPXMNEKDSVANFDGKRPBEQETLCPTHAOMHNKYYSOZISUNMCHFOUXXJJMRDLIJOCYDWPSFZ");
    tmp_msg_0.description.assign("ASBMYAATXPNRDTECLAGZKBPMUZSFMFPVHJGGQREJYUWCNLDOXHKDXYAECKVYXVNMZOWEAIAGNCDIVLQHKWDSLTPZJMDSUDINBMPKIQFCDNDUSPACIGXSUOJOEHJUQGCOJTHCTEJMITEWXVBVOPHKQDZRQQITKNOSFIPOUCVRIZG");
    tmp_msg_0.vnamespace.assign("LUUXAMFHYROLQRUTFUEPKTESWDJZWTXANIYBJXCTFBIOZULURHQYSPBHCGDYUKRWAWSVMTDWEBIDJOXSASZBGRPCFCPANVILGXKYFIMFHMZBCSTXSZSLMATPJEKDZKRJPWJJQNQCFZIROEWVYOINALDDHCYXUYYGURPZJCXFBKOFWLZGADETLOIRJVPQWSPHVOENVGHQEVULDQJPMIMCOKBKQKREFWMMLAQSHBVBXH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("USJNFATHTLXCGELWZVOXYOZKWWSFODAWNRNXPZWEEVMTWAHXWQYSFBTJYCALRBJYSRXZDOQNO");
    tmp_tmp_msg_0_0.value.assign("ZFOCQVTKIFYLGHQPMZTVCBVBCAKIYNIDHSXLNYNAXRODBEBHZJJKZCANZOJTPRPIXAFEKXBUETEHXAWONQKFGJGOHLUAMEPADVNNDDDPFXGCXRKERMWIXWQKWCGRCIQXPNCRGUZCYMYRQETGSJMWSTRUSVJHYFLBISGSWGMMHLVVQUHPPWLEJZYSZQKVAEIDZUZIJUSKVLMTSFALTEOQFDRVHDABMNPSUKBOLYNWGXJY");
    tmp_tmp_msg_0_0.type = 205U;
    tmp_tmp_msg_0_0.access = 14U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PPDIBWKWFOZXFTKMITLSEAGLEMYQVASHJGCTAIVGWKJXONNDRWICEFRWZSDFJELCWCELBCXOAKQXMZFMVQHCBJFKGGHJWLVHNPZUKRMYFXAEFPIEGYUQJTQPAAISJLZBMOFODCXUDONMEHEXBQJGPVXKRYUSLROCPTRFAYZYAVUZONVLUQZZMNUOKMPIBOYJUUTVRBBTHVQLCBTBRCRHAI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PWDJAYRCWHNZGNIARYPQXXUKEIZFJWTOZVJUXPUT");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.658274095203;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.043509348637;
    tmp_tmp_tmp_msg_0_1_0.z = 0.240610849773;
    tmp_tmp_tmp_msg_0_1_0.z_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0943688769552;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 154U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.502696434604;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.565114026396;
    tmp_tmp_tmp_msg_0_1_0.width = 0.626165376893;
    tmp_tmp_tmp_msg_0_1_0.length = 0.835888769099;
    tmp_tmp_tmp_msg_0_1_0.coff = 171U;
    tmp_tmp_tmp_msg_0_1_0.angaperture = 0.63733810873;
    tmp_tmp_tmp_msg_0_1_0.range = 14483U;
    tmp_tmp_tmp_msg_0_1_0.overlap = 125U;
    tmp_tmp_tmp_msg_0_1_0.flags = 182U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VFKMRSJDHIRZPOJOVZUUBHSBXWJLDJBSH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 60359U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.719021603284;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.854162661645;
    tmp_tmp_tmp_msg_0_1_1.z = 0.989044001037;
    tmp_tmp_tmp_msg_0_1_1.z_units = 118U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.982287136803;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 201U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("UOLUGOOBMEOLSNBYLVPSPTXALDKGDGWMADKUFJZHFQFQMOCKHVNONJTVCCPYVXFXKPMSJTVLIPJWWPRSCBYISRGLCUVPTZRKIXBQPMYRZJFDYHIHPOZYZZBKBRENUOKWJTTYKFRUJADDHLAPTJARUVNZWAXMZWEIAECLLQODLMBYUABZYQBVUWXQ");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OOKUHHYGUVOBYQHMYDVWNYDELNA");
    tmp_tmp_msg_0_2.dest_man.assign("SBQIGSCSDHXXMLWIEKEPQDNGQJFFHRHAKTMNVLXLFEYBJAM");
    tmp_tmp_msg_0_2.conditions.assign("EDVTWSXYITYLBOHPJLZQLYPGNMVJDEOFUKASRBDKQLNUIQTISSDFCUNNLFMQVVITWRKWYOHSBMQXRGSMWWPIKNLJUSECMLHQORGPQAREOHYVYHMEPFQBKYHPQGYDMJXHBTDTZNHAMTVDBVZSBXOUGDDANIHJUFCXNRNJVHGWREPOAJRMZZSXABZZEKZKGABIAFLWGWY");
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.969845964359;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.137476670633);
    msg.setSource(51756U);
    msg.setSourceEntity(4U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(54U);
    msg.state = 26U;
    msg.plan_id.assign("PXIOSQYYRMOAALUYHTLMSIJZFVLCUHICOVILKTCCNAPGRWIEDJJQTJAWQOLVXLYEQMKSNBTPKWZUBHSYQDNDSPWBEDSUMRNBRZDTOWWEESFFJKZYNUZKOSCHODEPWRNERGTWGGGRFBXRXKFHMHTTQFGKBHUVGPAVEFOXMKQACXMQZRJMULQJEJXXUFXDAFMINQUONTXOKZHZCCNEIHVKVITBNDBDVVYBFI");
    msg.comm_level = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.619226472243);
    msg.setSource(31225U);
    msg.setSourceEntity(87U);
    msg.setDestination(53743U);
    msg.setDestinationEntity(220U);
    msg.state = 35U;
    msg.plan_id.assign("ZOCGBACTXEFFADNCIVGGNGHPIJDVVKKKRZOEXUOUSQYSYPUDTICXTNBNXROMZCSMTWYVKTNHFC");
    msg.comm_level = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.00100226829481);
    msg.setSource(35415U);
    msg.setSourceEntity(1U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(202U);
    msg.state = 227U;
    msg.plan_id.assign("DHPEENCJQNRYXAOXNFBOEBJYEQQJCHMTH");
    msg.comm_level = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.607570403906);
    msg.setSource(2138U);
    msg.setSourceEntity(229U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(154U);
    msg.type = 182U;
    msg.op = 7U;
    msg.request_id = 62983U;
    msg.plan_id.assign("ZSIECKYKQYOEAFAVROZTRBLUSBJMFGCPZBAYVNWXPHNPZQXAVVXCQVUUH");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("CYIALPPTYOZNTEOSWFSCKRMKDAHRHDHIQUUWSATWSWPGOVXUKVEJXQEMBCYKWQJSTQNIDFLCOQSOLXUOGENFYDSCDLTXDVINJCAZYZOYBHSJPDWHZQYPLRPMGAOQJRFMLGRNRBIHYETIKKMNEHIPIUBFXVLAWCFTCZWTWBQNZMGNISUZMRSFDZELVOFJXEDLUZAPMFXJVXAFVLVKJYMRQKGOGBBGKAXBJUGHHUTZEVBJIYRTHEQ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("TLRVNYLAFCYOTCQFJDRXBBGIFRWWWVBJKSUIEWESMKMZPMFEADEDCNOOYLBENVZTXHWWTDJHBPSSHOMUFBMXMJQHATZSJZFROUKSQIKPWOSXGGZPDGIUQSAYYVVRONAHR");
    tmp_tmp_msg_0_0.sys_type = 232U;
    tmp_tmp_msg_0_0.owner = 16177U;
    tmp_tmp_msg_0_0.lat = 0.114200395952;
    tmp_tmp_msg_0_0.lon = 0.937851950252;
    tmp_tmp_msg_0_0.height = 0.934267145982;
    tmp_tmp_msg_0_0.services.assign("ZPFJAQVJDAQIUIDNTQSXJMENXZHRCXGHXYDDYURKTVTAAZUNIEVJSPIINZIRCYCCVJYGHGWMQNNFSUEZBMLARZHWWOXMGKMVQNXBPYVSKCYUSBREKTCFCMBLPOJIMARGDZCUNFKKZFRAPUPUEYWHIFDSFOOXHEWYDTJQOAXVDNYXKLLQQHKPPZPSWVHFUQIGJCHSRQBBVO");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SBQUEWGXPQWTMRCOCAJBFCHLGTSCHMTSDKIGYYTWLKCNZFPIHJLMIOWPKPJMFWEOOAYOKQDIZROVWCEUTNXNWYVXVJLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0129176265684);
    msg.setSource(33354U);
    msg.setSourceEntity(56U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(37U);
    msg.type = 242U;
    msg.op = 87U;
    msg.request_id = 29994U;
    msg.plan_id.assign("IUZQYAVVMCAVSOLCOZRBGSWFGQWSUQKJCNTXUHDNYBCOXTPHQEDGWMNBTLESFKL");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 219U;
    tmp_msg_0.quality = 240U;
    tmp_msg_0.reps = 226U;
    tmp_msg_0.tsize = 28U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HDHUDRHFOJKEGXBLCJVBYIJZGWZRCJYROXTPOIUCDFAEANSHHEHFLWTMQGINEIOQITHYXGAKDQWDWZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.906707236329);
    msg.setSource(31505U);
    msg.setSourceEntity(40U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(228U);
    msg.type = 34U;
    msg.op = 206U;
    msg.request_id = 33072U;
    msg.plan_id.assign("TUEDAOFBRURHEKOIHUPBRVCNHLMARHQIZBNSIUTZKDXPKUIDWSLLRYXALVIKGQFXKCFAZNWHLDFRFWJCXCVSWPDOTXMSTHMIGWNENJUBFUEKYCOBZCAQEJULVYHPYLXTWFOJXRVSORXZKGGHYUDQFVCOHDIUPKNKXNSSMWOMDNIVYMXGGRGZTSJQPTBDALAGQFWGYTMVDJZCZSCBZWVIJQELLBGJYYRJPMAEEQOCMOS");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("EYKXALDNWNQCYWQFBFKUNDGFBQSYPIEDUCAXIORLGBLVFKLYLUQBUETJKOSXHEZNPTDAUKDDVOJMGHEJQBWQVBKYEJOOWCYARTWGUSAXGMRVGVLCNJCNZUMZGSXEUMSHVZMNPTMSKOBODJSVEAZDZ");
    tmp_msg_0.state = 254U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GUFUGGGKHJMYIIZKHOAXFIPSUDFVKNEWSTWPJMTYZHKBCSXLZFDRBJDVLJPRBOZTAQGKVKBSODUWWOZCBSMEDEUEAKWXHMPULCVSDFQPSAOXRETSPQXIOGPWAEDJNRMWAGZSQPRWXEFYHHBNVQRWYJJUQVIGAFRJCDKOFLITIHLKCCOEMAYNYCIFLZTYTJEMHHTKZMVUCHXJBZFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.352268520365);
    msg.setSource(13394U);
    msg.setSourceEntity(40U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(134U);
    msg.plan_count = 55832U;
    msg.plan_size = 2657569566U;
    msg.change_time = 0.0414456775392;
    msg.change_sid = 50497U;
    msg.change_sname.assign("QMXRADEDXFMKRLNNUCIRCJQTHRHKOQQCZZODRLYKMTMVRBKLVICAWEXDKJM");
    const char tmp_msg_0[] = {-62, -121, -98, 4, -108, -3, 12, -12, 92, -30, 32, -83, -105, 96, 61, 32, 33, 71, 125, -30, -80, 77, -48, 39, -107, -21, 24, 81, -41, 26, -23, -37, 24, 78, -19, -47, 46, -92, 50, -42, 56, 46, 52, 89, -69, 84, -82, -116, 72, -115, 46, -79, -110, -24, -23, -86, 92, 69, -8, -59, 48, -6, 81, -88, 65, 63, -110, 109, -62, 26, -70, -125, -114, 56, -96, 112, -80, -66, -51, 57, -92, 114, -88, -68, 84, -10, -9, -12, -2, -98, -97, -102, -121, 110, -20, -64, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZLJRBIREEQP");
    tmp_msg_1.plan_size = 1119U;
    tmp_msg_1.change_time = 0.914518062922;
    tmp_msg_1.change_sid = 24170U;
    tmp_msg_1.change_sname.assign("ZXGAMKIHGAQULTQVZYGNKMJNPVCHFTSBXBIGVIQHFAEVOYCXNSHPYHWBAQRXIMLKVIZAJCPWCJDAPEWRWPLSRFOEYYNFZEUTWMJQILRFTOYZZNEJCQNSFRJLRZLSKRVBSKDVUXPYQSXGPCSHBMHRTEOEHQGZHMGWVAPZMNJYTOKNGKSOXDVBMIFFZDBDWXBUWIPXGCMAWEBUORTKXASJEF");
    const char tmp_tmp_msg_1_0[] = {-110, -52, 20, 11, -4, -100, 124, 3, -70, -117, -34, -26, 82, 126, 109, -54, -89, -110, 28, -117, 23, -10, -60, 23, 68, -67, 41, -80, 92, 95, 81, 101, -53, -43, -82, -35, 49, 114, -28, 120, -16, 54, 8, 67, 112, 91, -7, -6, 1, -106, 116, -128, -10, 118, -3, -78, 60, 38, 79};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.464946377468);
    msg.setSource(46274U);
    msg.setSourceEntity(5U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 18058U;
    msg.plan_size = 2082816426U;
    msg.change_time = 0.778513137755;
    msg.change_sid = 8414U;
    msg.change_sname.assign("VDILPWLRIWEIDMNMSOGUTRUYGUOLQVWAIFAHYSAOITXZUUDQXPXGYIPBEZIBYNSZDUZMZZEAKZKLMNQQTFNARBYYVBCOODQWEGRLGPOKTBTVTYYLFBHOTDOZFXJHQSCFLGSHCHNDYJXNTNCSSTCVWCMXGZIKQA");
    const char tmp_msg_0[] = {-92, -83, 120, 123, -119, 78, 84, 48, 17, -107, 74, 17, 4, 47, 20, 60, -62, 110, -1, -128, 24, -103, 80, 117, 40, -60, 54, 46, 94, -54, -74, -91, -9, -8, 62, 91, 108, -94, 75, 30, -73, 98, 88, 53, -22, -111, 112, -126, 105, -14, 122, 90, -77, -18, 35, 107, -75, 73, 24, -61, -43, -56, 24, 26, -121, 76, 55, -22, 88, -64, 98, -59, -63, 108, 64, -21, 7, -42, 33, -120, 80, 126, 46, 109, -79, -117, -3, 42, -74, 10, -79, 28, -73, -10, -90, -35, 41, 39, 78, 65, -55, -36, 47, 78, -1, -60, -103, 69, -62, 102, 57, 122, 49, -24, 112, 32, 30, 78, 79, -58, -3, -24, 27, -90, 107, 43, -64, 33, -21, -45, 29, 92, -6, -30, 123, -10, -108, -78, 22, -84, -120, 12, 18, -14, 33, 123, 62, -91, -118, 121, 92, 96, 78, 37, -101, 35, -66, 33, -65, 107, 105, 112, -101, 64, -30, 46, 56, 41, 102, 76, -78, -77, -101, 114, -95, -5, -102, 19, 26, 33, 46, -65, 59, -28, -38, 14, 58, -7, 8, -100, 18, -89, 101, 59, -121, -120, -113, 105, -3, 4, 71, 24, 115, -121, 52, 74, -111, 116, 120, -41, 68, 58, 96, 6, 35, -22, 32, 29, 83, -127, 24, -117, 21, 20, 0, 118, -17, 82, 101, 31, 105, -64, -68, -26, 109, -119, -123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IUEVJLLUYA");
    tmp_msg_1.plan_size = 21116U;
    tmp_msg_1.change_time = 0.926888282382;
    tmp_msg_1.change_sid = 51220U;
    tmp_msg_1.change_sname.assign("LIWRXJNTSXAWJHYFCCRPSWLKLPHJDAZIVOQCFHACGFNSPLDXYONTJKBCRQSMHRISCAJLDWSXFRXTZMOJTUGQGEGKVXZGWSZBAVENHIZU");
    const char tmp_tmp_msg_1_0[] = {-53, -3, 27, 49, -98, -24, 15, -6, 105, 21, -16, -53, 4, 34, 105, 9, -5, -102, -38, -69, 32, -75, 57, 69, -106, -72, -101, 24, 117, -105, -120, -28, -10, 40, 110, -5, 121, 61, -91, 73, -98, -44, 5, 96, 85, -20, 13, 74, 80, -70, -30, -120, -60, -118, -71, 9, 10, 96, -17, 81, -117, -66, -105, -3, 37, 7, -119, 9, -60, -102, -64, -46, -67, 36, -122, -89, 122, 73, 71, -117, -65, -49, -31, 9, 35, 26, -56, 113, -101};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.043754961708);
    msg.setSource(58164U);
    msg.setSourceEntity(135U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(168U);
    msg.plan_count = 39227U;
    msg.plan_size = 1628117568U;
    msg.change_time = 0.247971801021;
    msg.change_sid = 40871U;
    msg.change_sname.assign("XNDRGZVLYLNTCAMUFZJUDTRSLLVTBXBOOJHJUGFZQSIVEEHWXZUKJTXXHORKWQUEPIEDLNTUQZJJMGKLMFMSCOGLWVJDITVMHFAPRPFNLMCBDAZGIHSFBFBZNYZKUVABNVIOWJYGPFRMAFVXEWYHCAMRKIPULANQPMCHEPGUWQRYTSLWZCYDQRBXZKCGEBPWBCDTIIEDAONYOSKWCAFDRNSKRNJBKSXOPQYHTVHCISQQTAUOSYYOGGIEXQDHK");
    const char tmp_msg_0[] = {107, 51, -78, -123, -124, -60, -124, 7, 31, -82, -22, 56, 62, 56, 54, -72, 91, -123, -9, -108, -4, 47, 93, 28, -48, 24, -52, -86, -93, 104, -120, -7, -78, 46, -41, 65, 126, 93, -104, -92, -26, 0, 54, -23, -114, 107, -107, -107, -126, 29, 25, -124, 5, -85, -83, 26, -62, 36, -87, 59, -62, 22, -29, -50, -101, 117, 111, 62, 122, -82, 39, -37, 19, 17, 109, -17, -16, -42, 76, -86, 64, 25, -107, 121, 57, -81, 32, -47, 58, -106, 2, 96, 114, 37, -29, -65, -62, 57, -99, 95, 43, -63, -77, 106, 9, 51, -119, 1, -72, 44, 115, -6, 39, -15, 64, -99, 57, 82, 118, 118, -31, -32, 118, -85, -27, 73, -106, 89, 75, 109, 45, -24, -34, 50, -42, 121, -74, 18, -33, 88, 70, 75, -60, 33, 96, 58, 109, -10, -25, 43, 36, -71, 93, 12, -9, -61, -27, -8, 60, 3, -121, 51, 3, -35, -4, -114, 70, 48, -104, 102, 83, -112, -15, -90, 80, 21, 117, -69, -3, -47, 116, 77, -85, 54, -109, -3, -104, 107, -8, -69, -78, 107, 53, 33, 51, 71, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CFJCWNAZZTBPIREDEPBVCCKJUGQDWXLVMIAEWBAPNWTKREUASITYRAADGFFZIIHMJFSXSTJNXUXBLOHTWCWSOBGHMQGDJRFQEFLLJVMBFIOJFJOONYRUQYBYWGVIEFKOAIAXSVJMBSIGUUPUXAZRQMBTJCQCVKYNOSYLZTYWRTHNXEX");
    tmp_msg_1.plan_size = 28916U;
    tmp_msg_1.change_time = 0.812927439473;
    tmp_msg_1.change_sid = 44308U;
    tmp_msg_1.change_sname.assign("AUCOJUJAOKDSGMDTUMLMUPRKJKQCCYMNKURXXILLYQXRBLGWFPVFSJYMWNBHJSAFOVRVNHUSHJHLVQRPWTYABDRSCZKGEOERFMWYTIMUZGLWHOMQJWZZGZMSZCHALWSXBXNPXNYGYHPVTCRXAETGQQKNOQYTXZNTIVAHBBWEIO");
    const char tmp_tmp_msg_1_0[] = {70, -109, 23, -18, 19, -122, -18, -89, 92, -22, -40, 49, -54, 2, 109, -4, 96, 63, -24, 95, -73, 76, -91, -76, -95, 45, 14, -42, -4, -13, 100, 103, -26, 33, 48, 55, 83, -70, 110, -107, -10, -40, -8, -58, 20, -101, -9, 115, 93, -38, 123, 46, -67, -68, -13, -23, -116, -107, -55, 40, 3, -76, -20, -102, -39, 20, 77, -17, -91, -1, -25, 93, 80, 38, 79, -46, 71, -36, -15, -107, -103, -33, 124, 119, 58, -57, 75, -108, -17, -23, -89, 113, 39, -81, 1, -9, -38, 11, 40, -98, -112, -124, -108, -73, 58, -113, -58, 33, 38, 61, -21, -83, -43, 34, -123, -106, 31, -95, 121, -89, -6, 96, -7, 121, 37, -74, -120, -52, 71, 114, 82, -15, -71, -71, -81, 40, -92, -111, 14, 56, 88, 26, 17, 95, -89, 8, 38, 103, 91, 107, 97, -35, 18, -92, -109, 18, -117, 47, 125, 123, -84, -84, 45, 83, -81, 42, 58, 36, 113, 8, -118, -114, 9, -112, -91, -69, -119, -12, 109, 119};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.483318175856);
    msg.setSource(19058U);
    msg.setSourceEntity(246U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("HNWDNLTDPPVAFBSHIGMWCGLBBEJCKSLQNZUNMKAQXZHDRUAVHLWRMKQNRXOKKVZJPIIXAJUETJEIJJFJLAWOWQBSHZHPWSGMCIGBSTVKBYXXICOFJYUAPFOQFBQBYBXEGVVDKCEGTHPPJTMUHRTDYDRPCZNISGGDTAUGAADLCFXRYPBDTOFMKTMXCWMRMROLAUVZGNEMYNSUQOOWEHF");
    msg.plan_size = 4956U;
    msg.change_time = 0.557046028033;
    msg.change_sid = 22276U;
    msg.change_sname.assign("LVMXBHKBAPXKACNLSWTLQIZVHMUGECHEIHGJRXEMECUYUAXOFMGWXUPXXOBROFQKDJWKLUUEHHDNSYZKSATQVZJQNMWKODEIARGH");
    const char tmp_msg_0[] = {-85, -97, -69, 39, -128, -20, -5, 125, 52, -86, -97, -123, -79, 24, -63, -108, -118, -53, 91, 99, 33, -38, -125, 28, 7, -40, 113, 62, 9, -31, -5, -63, -13, -21, -95, -14, 70, -76, 105, -6, -91, 69, -29, 114, 28, 52, 6, -53, 76, -85, 47, -37, 19, 18, 19, -42, -22, -83, -56, 86, -92, 98, 80, -29, -62, 71, -96, 2, 102, -58, 36, -82, 18, -6, -118, 37, 86, -16, 8, 71, 102, -115, -48, 82, -10, -50, 7, -122, 8, 6, 54, -95, 39, -57, 100, -27, -45, 86, 17, -106, 54, 114, -120, 40, 42, 95, -73, 44, 20, 124, -118, -64, -105, 82, 25, -79, -128, -45, 68, 105, 124, -101, -126, -22, -36, -50, 88, 61, -51, 41, 73, 73, -33, 96, 24, -78, 115, -85, -91, -5, 40, -71, 114, -39, 101, -76, 82, -51, -121, 7, 10, 35, 39, -33, 30, 122, -99, 27, 11, 46, 29, -107, -14, 32, -42, -127, -92, -55, 104, 1, 109, -20, 97, -86, -34, 71, 97, -100, -55, 30, 22, -64, 117, 103, -53, 48, -61, -27, 36, 62, 103, 82, -11, 58, -10, -110, -28, -22, 48, -73, 98, -126, 86, 100, -128, -37, -96, -123, -9, 122, -57, -39, -7, 98, 2, -53, 59, -123, 119, -56, 48, 22, 121, 12, 3, -4, 32, 92, 98, 11, 90, -98, -29, -7, -52, -109, -55, -3, 7, 112};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.822492783829);
    msg.setSource(6029U);
    msg.setSourceEntity(140U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("DYCKDRITKXRTTKQCVLWQYVBASDYFPCZABBUNWWVYGVTFMEN");
    msg.plan_size = 3562U;
    msg.change_time = 0.391124565538;
    msg.change_sid = 63735U;
    msg.change_sname.assign("MHWRODNDYFFOZHOGWZQQRZYTNWHNQVKJGOECFQOCISBELLMIJVSPJHPDIUCNRABTRRNUMSIJLPTJZVUVPGIFGZMTGOHGEWWBYNNHQERBVPLFEHSIBZCQKFALFVGKSKGJWJDUEYBUXAXCCUDTHYXBOXFQMNLSSQFUKPJPOXQWCESAUUAXVVISXMZAWPLKUHEIEDBY");
    const char tmp_msg_0[] = {-102, -124, 18, -47, -40, 15, -45, 95, 34, 15, -63, 12, 81, 2, -24, -57, -52, -3, -14, -97, -121, -52, 81, -109, -37, -95, -33, -50, -62, 56, 85, 101, -29, 40, 100, -29, -115, -60, -119, -74, -113, -50, 115, 118, 8, -76, -65, -112, -6, -29, -38, 75, 55, 12, -11, -61, 115, -118, -14};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.224223290264);
    msg.setSource(7466U);
    msg.setSourceEntity(175U);
    msg.setDestination(23125U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("HSCVFFXSBJSUTDRLPMPKPHRZEGGQHYQHNUCXYIKTEKSPOEYILDWMLAFJWJBSGPFSUZTDCLHRWTPXZCISLTWHNMRKBFZOEGMAVORKFIHDRYPNNTNHXDLSBNUXJVESVUPJLVZZXVPKNTAWTUYTYKGVQOYOZUUPMIIWTIVUFFYQOEIQOFZGIDDWAZJCAEEBJLDNX");
    msg.plan_size = 51118U;
    msg.change_time = 0.653641427871;
    msg.change_sid = 954U;
    msg.change_sname.assign("MVCGLUPYFKBHYBJJRDJDSUGOVOVRKCHGKLDGISRSWWHTVN");
    const char tmp_msg_0[] = {40, 111, 27, -59, -94, 40, -112, 64, 126, 90, 30, -82, 56, -68, -65, 0, 44, -78, 63, -93, -50, -11, -126, 56, 85, -47, 87, -32, -119, 2, 112, 36, 94, 43, -126, 105, -13, -52, 103, -40, -47, 117, -127, -86, 22, 38, -92, 59, -42, 58, 29, 35, 122, 93, 19, -98, -11, 22, -104, -7, -96, -5, 70, -112, -85, -23, -113, 79, 68, -114, 75, 75, -27, 68, -50, -87, 85, -110, -16, -10, 100, -114, 118, 86, -102, -64, -16, -70, 41, 111, -122, -43, 117, 111, 41, -22, -74, 105, -108, -37, -54, 105, -73, 65, -19, -30, -98, 14, 15, -87, 26, -4, 20, -89, 32, 73, -96, 3, -114, 22, -47, -113, -123, 31, 90, -19, 6, 72, 42, -71, 121, -25, -13, -101, -103, 4, -79, 117, -55, -78, 39, -22, 50, 32, 50, 82, 73, -41, 124, 24, 14, -84, -58, -40, 21, -93, -4, 95, -72, -71, 111, -57, -84, 103, -22, 108, 78, 113, -54, 5, 3, 25, -80, -47, -11, 69, 118, 53, -122, -34, -74, -79, 72, 52, -55, 82, 39, 126, -122, 27, -128, 98, 86, 44, -96, 5, -100, -9, 16, 16, 89, -127, 48, 0, 23, 73, -95, 35, -39, 52, 11, 116, 63, -104, 105, -27, -38, -60, -64, -17, 18, 118, 1, -46, -126, 111, 99, -111, 126, 110, -127, -61, -73, 38, 23};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.678772477396);
    msg.setSource(5510U);
    msg.setSourceEntity(108U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(201U);
    msg.type = 196U;
    msg.op = 96U;
    msg.request_id = 56674U;
    msg.plan_id.assign("QNPUKFZQIZUJYZNBJSQOWFRADHSCBGRTGTMVBLUXLEMIKSZKARYGGSHVCMXIXKBEORDWDSALPMBFHPUYTAZYFCUUBZLWAPDEVYCFRPIHWLHCNARWDSOCHGTOETXBXOUQLOJZTQKKFJIHSL");
    msg.flags = 26237U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("SNLZOOASMQKCYAEJPVJNIVJTZZLBGERZZCXUTKYGFSHGIESGTULFDKZKXSAJUYMPNCCKPNFFFXJORONPWGALKKZIWAYYQQCCCVBHTZWDRVXDUOEVDFBSJMDMRUAHEWUVRHIIXVBBDHPHNEYODBIBSRYRLAJJMS");
    tmp_msg_0.text.assign("TPDXEQGVYXLBSKQNPKHOCCWJWQYHSBKAOHBALSOKRSPLZMMQIZQWOJPXBNDIKUFKQYVWHIUMDLEQTYJAWSGNVVXGAEHODJSUKADHDAJBEIYGFBBFZZNGRPUVIHGTIYOOMJKP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHITMHNOTIRAADIVPBLDYZYNBKRLIVSUBIESRVZYCGQFEQVWVKSKUNYQFOFCTKAFYGSXHYHIEVBFAGNOXMOZTGJVOTXGRLDDWZIIMPALKGJBUBNDSUJJQCPSVJXKWRZPHJZQKRXLZEPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.45061104755);
    msg.setSource(5950U);
    msg.setSourceEntity(220U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(240U);
    msg.type = 195U;
    msg.op = 82U;
    msg.request_id = 47184U;
    msg.plan_id.assign("UWDWDCWCMDHKUEZFNOFTJYEALUXUFRLYLWWDGDSBAFFPJNFHRMDLZU");
    msg.flags = 57576U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.0750838708186;
    tmp_msg_0.confidence = 0.130982504519;
    tmp_msg_0.opmodes.assign("ODDWHXZNGAKGKMHKYSLBBFSCYZXMJUKNWPTIJXTFGHQJRAXDZHCSILNMVHUTBRPDGESJNFRMPYUOEATOSLWYRSZOVKKMUOBVYTZQYEI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZUTYWWTSHFOZXVYBIPEIZQPLVNFKNZBBFSXVMQLCDQPJKAONETFPDEQWAJGDNRAADHJBQMZBKBKFFUUIODLSZJBWBYGYKSUMNTJVRRNDEKECSLWAQUYJHPCWTZXACRGQSOIMIZMOLCOMSJGVMEVKTKQLROPGCRXYVSAOHPCBBHJGHUEAWTCOHETVGVXHKKRSFAGDDLXYYXICPUHESLJLUIQFIPNRIUQZOHRZVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.669927057341);
    msg.setSource(44779U);
    msg.setSourceEntity(113U);
    msg.setDestination(52696U);
    msg.setDestinationEntity(250U);
    msg.type = 66U;
    msg.op = 130U;
    msg.request_id = 59454U;
    msg.plan_id.assign("OAVNVIANPSQZQIECKZTNVLHDOCGTOD");
    msg.flags = 47135U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.914469527982;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VLIKQBCYLPZXMAQYQQFVPPYXZDIIMHTBYKIECFADXNEMWIKZXEFRKODLOLRUXKRZNWTTXHTMCWYAQOGIEDKNZIPHAACGQMONGUHEUIWVACJVPBWRPSGRBOEAYZFLYMJRGLVMQNASFVDVBVOUSCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.63080929732);
    msg.setSource(870U);
    msg.setSourceEntity(156U);
    msg.setDestination(25939U);
    msg.setDestinationEntity(86U);
    msg.state = 250U;
    msg.plan_id.assign("CNWLIAUNNQVKHCTOFKAZWLJGHCBUQOMAOVTMPJKIYZKLAWBWKMLGWXTQHOTRPIVGDWKUCADEPGEAHVJTZGDBWPGNESLSHLBYVMOVBMFGSMRJJDXHZYSXNQYYRCFORMTPRMUPXMWFENNSEYTSXHZLQIYZHBQBDBKAT");
    msg.plan_eta = 1830377536;
    msg.plan_progress = 0.285190473697;
    msg.man_id.assign("DMKETUMOYMXVWJPSBJOFADPXUBETQKJESIIYMSDBGWSPWVLRGXRQWHOHETCAKJADBTHPOLQGPZKUWUUXEDXRELMCKXKZFNAJXLIQOADACSLPBZIIPCKZPRJKZSLASVJKCWNUHYVOT");
    msg.man_type = 22016U;
    msg.man_eta = -1164258944;
    msg.last_outcome = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.832797251674);
    msg.setSource(7693U);
    msg.setSourceEntity(216U);
    msg.setDestination(17444U);
    msg.setDestinationEntity(61U);
    msg.state = 232U;
    msg.plan_id.assign("PTSFAOMRVBKFDJJUNXIVTRKLIEBEZTOUHRTKIVEWUABHRVCKVCNDMBEZBOEZUENYZCKDDBGJXWJCMHJPYQSHVWORPSEPFIFXWPCWVPIGGFBNNQBMYQSRFIIADZUQSWJEQJXHOLKZTFMYAZATHDIIYPODLGKZJGYPYGGLXLNTOBXHCMXRJXRZSCAJYPAFLGWYXSANLQYDNSAOVFMKUTHCGUTEXCWMDQNULWKHGEBVUSUQH");
    msg.plan_eta = 253956991;
    msg.plan_progress = 0.273917072746;
    msg.man_id.assign("WSKSZDBTWBPRTSQWSKUNLTWAHCDSVCOTNLYQSSQHULCCKOHQWNHVUZTNMMTFKXMYXDPFPPGZZAHORKFCVDAYDDOGMKLWFVPRROXCCVPNZXGMCJZBEKSIJQEUATDDJHMY");
    msg.man_type = 4907U;
    msg.man_eta = 941227524;
    msg.last_outcome = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.642482293927);
    msg.setSource(36843U);
    msg.setSourceEntity(62U);
    msg.setDestination(55147U);
    msg.setDestinationEntity(178U);
    msg.state = 76U;
    msg.plan_id.assign("ZTVBQKDKAMKJYNSWCUJTHMPENQOCNQKEIILBHDFQNGVZHOBMZVOGZRRADVKTXRXOEDSAINZWLDQFPYBIXUMGYGQRPZHHFMXOUWYEDRIIVHWKGWQTSKELPINVEFTBJAGJTMYAXYPUURJACLFOKLWXJTTACQEKSTDYVMRZWUVDFCKCFBCNLWBQUSAVWJXYSYP");
    msg.plan_eta = 1212789974;
    msg.plan_progress = 0.641837620108;
    msg.man_id.assign("OEGBCYYDYHHHDTLMZVVUEWHLSTWTXKQIWROFUNOGYVSPOXOIQRBVZPAKSJDPXUCYLNQMLCKZVTMQPLVBRNJTUHLRODWWRYFY");
    msg.man_type = 2093U;
    msg.man_eta = 906597331;
    msg.last_outcome = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.864324576521);
    msg.setSource(49954U);
    msg.setSourceEntity(77U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(98U);
    msg.name.assign("NGINQOKJQMWBQPGGGFQFDDNWAXC");
    msg.value.assign("OTSDKUEOAHCHINJEXQSSRHBKGLWYHTOUTIJNPYBJAOVKNJWVVYSOJNFILXKGQRPDZFMUERAWWEGEFSCVGKHLMDWBQBPBOTSFVRSYQCIEMNWUDEAHTMIAQXDXQJRQEOMFMMBDPOKXPUAUHFCJTLGTTKUARORZGCJINVCKVYLNLIYXCMOVBPWRCLSHFA");
    msg.type = 195U;
    msg.access = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.529074793047);
    msg.setSource(54315U);
    msg.setSourceEntity(207U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(167U);
    msg.name.assign("DNBCXLMQIKXRKTJPTJEGQNHETIYXRIQDOZZHVTYDGWPYPVSQJIZBEZDOPXNSXNWZPIEQASYIDNBFQDPTSVOSZIKAYEVQUOKDELSFEGENJRFMXHNROYLBDFAIRTASJAOKFHGJGWPYYLNKWHUQFHRXIVFZUMTFCAEDMKWPUQVK");
    msg.value.assign("IEUJYLAMEDTVCYKUHRKQAFJWCDQDTMXRXCZINOECSOMHSRNMBMACLTJCJITUQQPQTHEWIAQYVXYSASPKZMBRYKCZBWETPKZJDVWRIWIBOVVXUYFYNBONLGFXD");
    msg.type = 146U;
    msg.access = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.208414587896);
    msg.setSource(10713U);
    msg.setSourceEntity(210U);
    msg.setDestination(24800U);
    msg.setDestinationEntity(74U);
    msg.name.assign("YEWZEIQQMBUNGOGNOMNHCZOYJZGSTEEQFNCPABGXJXHC");
    msg.value.assign("KNCADLPQHWBXUECGKBMZTETUWBEVWZIVWPHLSJONPBASLGJEBBAJZNYOLFHXHHBSIGXOXQVXATGKLXALRRAYYHADUDZPAOYD");
    msg.type = 186U;
    msg.access = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.856663828336);
    msg.setSource(36782U);
    msg.setSourceEntity(33U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(34U);
    msg.cmd = 30U;
    msg.op = 78U;
    msg.plan_id.assign("YSENTCWVRXSIDWRYHYQLCMXCVCRDGQAHZGLYCJXJSUBUOLRXTLRHFPXTOVOSLPINFGOWJKFKRPDQWRDNUZTMYCEZTEPKGOOYPPKSVTJMWZXFVAYRYAGLZKMAJESVAUXHNNHQXINHHQVEMZFKBBWJBLWUBWETZDBMTNIFQEWPADJX");
    msg.params.assign("AJCJFGOXZUEHZMLEQLRJOQAIHFBMREEJCXNZUPGMCONSSNSFYPQBUQDYCIZKKRDDCBGATXTXCSOCDGIAUYWUXANWYODBQJWKNVKVNWRYXIDIWTRBLFKZLKHQVSZOHXYAVMSILQSJVHOADOFASKEGPITTDSJZHLHNYKGVNUPJQQFCFMBJPEUREDLYAWNQHVRCTGXMVPBXBELMFWHUYROPFUOSLAKVTEMWNBUMKLPWFRITPCWXGGIPJBZEYHGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.145914812296);
    msg.setSource(2756U);
    msg.setSourceEntity(45U);
    msg.setDestination(52531U);
    msg.setDestinationEntity(44U);
    msg.cmd = 64U;
    msg.op = 101U;
    msg.plan_id.assign("GRQZHWYPORSZTTFIHMMUIMRIVDXFXEXPWWPBYQOYTLDGINEUQWATLCDORZMGHTZRMKBVCENFSJXXBTFFIENZQOREALWMPJYHHD");
    msg.params.assign("CEWYHEHPLRTERJGRRGAWKEUCIOLDTRBINXNOZSXSZSQJOHBSLJNVXSGJDNEEUICKMPQDCVAXDXHBYKWGOFLIGUTVBISQFMBKBQODFXKOCRUYSPHUUAMAVMYNTTTEFSAVTYFWNFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.865486156274);
    msg.setSource(31233U);
    msg.setSourceEntity(73U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(145U);
    msg.cmd = 56U;
    msg.op = 245U;
    msg.plan_id.assign("NKKBALGEPBQSIDWSTJUSHGFXFAIKRXSJTANZOGVFVJXEIPDTPZOBLWOVTMUMLNWNRBPKWIWCSTZLWUHIZVQIELJOYHXCNSCPHNKWQVMBQAEGTOWONBVWLGOZPTFDORAGBZYEXFXDMVYQYLLHENUPYSVLCQTJOQMGDIJPHDRQWPKEZJCBKUBKDYAQRYLZCYIYXHUSBTRUJJUPXSZFIECVGRYGMGUFKRTEEHFXKCDIFNMAVHMNMOFRACMDZS");
    msg.params.assign("UWUUUJNLIOIXEZLPNVFKVGBTOVFTBBDAHCKQRSFDWXHVRYTXYWAFDZYQOVNAPYJVOXYIMREKLYNZQXJFXTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.648733492463);
    msg.setSource(44514U);
    msg.setSourceEntity(245U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("NLIBJUKNYQXLKINDTEZXZADWKNCEYGTFAWNMSASUKPIDJVYKPUDQAWEWEZBZSGFGJZSJPGMTMCVGXQUMXYWATEHSUAHCPKRTPAJIABSBFEWGLCHAGDNEERCIUJKRVBLEJNRRZRDJKMZBCLFUFCUIVCYPHO");
    msg.op = 91U;
    msg.lat = 0.513568485141;
    msg.lon = 0.620993519456;
    msg.height = 0.346156958567;
    msg.x = 0.559499627662;
    msg.y = 0.290135338937;
    msg.z = 0.608503512268;
    msg.phi = 0.483271482754;
    msg.theta = 0.710312092189;
    msg.psi = 0.848653606695;
    msg.vx = 0.824085004712;
    msg.vy = 0.257137550479;
    msg.vz = 0.263864683672;
    msg.p = 0.276224993325;
    msg.q = 0.979875124391;
    msg.r = 0.98881360906;
    msg.svx = 0.9300924524;
    msg.svy = 0.394717485799;
    msg.svz = 0.464207505897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.863059632452);
    msg.setSource(49108U);
    msg.setSourceEntity(104U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("SWCLKHXCCFAVISNBTAISUBOHFXYGCBSAGDMNKXBYDNRGOPLZHAAVGRBMWZICZGFADAORFVKCLKO");
    msg.op = 194U;
    msg.lat = 0.303743821833;
    msg.lon = 0.76799535677;
    msg.height = 0.643366199397;
    msg.x = 0.792906029578;
    msg.y = 0.257639275345;
    msg.z = 0.0201612169988;
    msg.phi = 0.33245951918;
    msg.theta = 0.36477148664;
    msg.psi = 0.212292631474;
    msg.vx = 0.229914988138;
    msg.vy = 0.47278996818;
    msg.vz = 0.147142042025;
    msg.p = 0.0697886213094;
    msg.q = 0.587696444397;
    msg.r = 0.924283581029;
    msg.svx = 0.929765418828;
    msg.svy = 0.5156276186;
    msg.svz = 0.286264123176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.862298519793);
    msg.setSource(17825U);
    msg.setSourceEntity(9U);
    msg.setDestination(965U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("HXOXQQKLFOLFOUPFMMWIFJYBZQTAZSPADCCCKZGLQWTUAHAENDPTWXOYIYGXEGIENCFLWZFKUWTDEMGYUOYBPIJWZFVMSERZNDMGBXAOBGWDLSYPWBQONITXCQULANXQFDMHAHZHINGYPVFIVVJTGZVQANKVYXOKBMUCNECLVBCSEDIRYXJEBWVHKGISRDKEUKSHMHWUSUSTSPCOMREBYOFJJNB");
    msg.op = 104U;
    msg.lat = 0.0464703526724;
    msg.lon = 0.529273606373;
    msg.height = 0.133401983833;
    msg.x = 0.388520485127;
    msg.y = 0.187159071193;
    msg.z = 0.808543675847;
    msg.phi = 0.567265349707;
    msg.theta = 0.897974812133;
    msg.psi = 0.687805248866;
    msg.vx = 0.648777091025;
    msg.vy = 0.0670878499963;
    msg.vz = 0.587700540093;
    msg.p = 0.658812034721;
    msg.q = 0.858836969661;
    msg.r = 0.0821773646349;
    msg.svx = 0.777126145326;
    msg.svy = 0.0938571921588;
    msg.svz = 0.412330558322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0993362271333);
    msg.setSource(55584U);
    msg.setSourceEntity(204U);
    msg.setDestination(19360U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("FDELYGRXZPUOHWGWONCLHZJS");
    msg.type = 154U;
    msg.properties = 148U;
    msg.durations.assign("OAAJKCSUWAWEUQAHXRJIEAVWZLXERNIFSQLMTXRQRPEJKSBAMTCVPCDULAWLXODIOEXIDVZZCUNYLBQYRCIIWCWHJNTAQSMROMKRNTUNZJGWDHGSVBDMVPNFZDYFQNXSTIOSECBQIHKJXKDPLUTUBLGIYZNXWPTGGBVPBKFFHXCYGVPCUPFVRTMKKQGPEFWZ");
    msg.distances.assign("NAGJUVCNIJPTSQUHAZMFUBVGPWZOMAQWHJFXIITCILPTVTNTHDMELWXDFDWVNAYUCZRYQRA");
    msg.actions.assign("HAGZJKNZJSVQGMBVZVOQNYBWEBMZFSOVHRNILEUGTYFHEAKOLWDAIXJMIVZSMBPAUHLCZNPEXNSOXWIUDRETJEHGQBIEUARSPLBQNBTDYVYFCNBWKXZVTWYFGYSQQMNQPWPJFFONXJAAHKGYTLXFIJMCMREKNTYLHZFCRVEIGPO");
    msg.fuel.assign("JMMFKKVQNIYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.391534793408);
    msg.setSource(23527U);
    msg.setSourceEntity(101U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("TBWKVRPCIHUWZSTSOMYFJDGPG");
    msg.type = 139U;
    msg.properties = 220U;
    msg.durations.assign("VFXKZALQPASQYALUMMCUERBBXTLSNPZBRDOFUBYJPANIIWOZSNFMJNAOWCFRTVMYIFIGRHESEPGKKUWGXCUJXODTDQCPBDMSYHEENZHYREGWVJRAPTMQTBVXKLCLGJKNDZQSACUPZMQLOWFHBYQYLITKL");
    msg.distances.assign("ZRDYKPDSTCTOJVWKCQKPJBFIPATJULLNNOJNXSGYEZEOIIQOBFMYFHXKNEJBMXZPGYLTDDDLOBRIHRCIUAXIHHQBEUCTMTSFXBOOFBTHWAIFCCBEVMGUSZCUAXAWYFANNGQRJHAIRWIUFWTZAOUGJJTZRDCQHVVRHUZUERPALBOZHKIVEMMKVSSNMZWDDZHFJSGPULEVWQVKCVYJGXWPMKRWNGPQEXLMLNGFASSRGNOQMYTKLYKQDC");
    msg.actions.assign("QIVWHHQDQXEQXLDPICUZGVITCFJCADTSAZLSOEZOSJNPNZKLJIUJKG");
    msg.fuel.assign("VSTKXRLKMKQSMYDIHUOGARGURIGYXDZUWQKGYDODETZFDAQWBJWYIMNWCJYCBEFNJDPBSYEFRFTFJCISHTVLHPOFNMZJAVLOCYSUKDGXOCRPPAEOPEHNIOHDKVWXRLMBMTPISJPZGCTKLEIGBZKLPXUJRXLHWCGHNLIPCNNBORVKAZZAQUAGSQUMRFEBXAQZLBBCJWQMRUVFINVYSOWFMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.509709560424);
    msg.setSource(3028U);
    msg.setSourceEntity(0U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("XCWSAGITQEQMDXIIQQEQLYXHZKAZWOHMWXBNSMFEULKRNUIKWGYPZYPMEPNUOLTSXHMEOFSNXOMHJTPATFQYROGNNLPRCPMUITUHFLCLCWWUCOKAJCPVCRFYGWIDZXSOBINGAEQTCSUJAUFZAJDBHDWJEYISSHZUJFRLXGJDJQAQVLSGIKNPRZOVKBFRO");
    msg.type = 17U;
    msg.properties = 152U;
    msg.durations.assign("SOBTCASQUTDVNNVLBNGOWWONSGQHZHOEWUCFBVLRXTSQHKSLMGWPXCDYTDKDIWJSKWJZAQRINDMCFYEZABJZASWYEJQUTRXUPMZKJMGQDFXRASNIFYEXWPLCG");
    msg.distances.assign("MUHCTIKTNCLRQKPJILKTCYUEVUVRVINVBYFEIHIZJQDOIPNRLZNOUHGUCVCZUWGNCVDGEULRKOCWEZM");
    msg.actions.assign("UOHCEPGCBWSMVEEAMFBNFCFKDUIFISGPGRKNYORZBBLDABXHPXIVMDQWNZNWBFSTYZDHBGUKPZCIZKLTVTPPYVZMCPPRZGLKEBUCZYXWQLRMSYXXOFNEIV");
    msg.fuel.assign("TNTVLABXKQFFUQKFRLLRZPEEWIGEPRXJZKCLQMVFSTNVMCBAUQIGQTIDWFUEAIHODKGWVHKMLGHYCHJCAESFOAMHZRPPJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.61473568621);
    msg.setSource(29937U);
    msg.setSourceEntity(56U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.252413684586;
    msg.lon = 0.839510897679;
    msg.depth = 0.773050835434;
    msg.roll = 0.0223980855105;
    msg.pitch = 0.409258532691;
    msg.yaw = 0.945528911196;
    msg.rcp_time = 0.671802215246;
    msg.sid.assign("AFVIJBUZDADBJGRCKQMMHXTBWPEHTQFZUNYIXSVJFJTWDSBSBOKENXFWEUKPCOPIMAEYYKKVVJWTQFEWWGNXASMRYDKYDJAWCZLXVWIJONMHXPAVHCHFQFRFUPIEJYGM");
    msg.s_type = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.668051644349);
    msg.setSource(43654U);
    msg.setSourceEntity(242U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.969432341093;
    msg.lon = 0.174542448752;
    msg.depth = 0.562349915746;
    msg.roll = 0.547939060054;
    msg.pitch = 0.601891464463;
    msg.yaw = 0.0270095095328;
    msg.rcp_time = 0.32088318014;
    msg.sid.assign("UZGAFNCDLJRDRUCWYVPYJGGSQSFPFSQFCFLMGLWMKTMODIVTKFOMTIFZZPJCNSYSZTNZDSMPUKHMDVECFJBQSUBKXTRWPTCQHMWUEOEBVJUSEATTGWQLOYDVZIVIWPOJMOMIZGKANIAPPEATXVAEKGXEXFNIIZLXIPXGRQKZEUDVARCAYHXSHDPWXJQLHCHHCBLOKXBCWAMIBRNHRNQEO");
    msg.s_type = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.863697971222);
    msg.setSource(65001U);
    msg.setSourceEntity(123U);
    msg.setDestination(56512U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.592372627118;
    msg.lon = 0.84574638361;
    msg.depth = 0.670925385993;
    msg.roll = 0.147421657591;
    msg.pitch = 0.223417235412;
    msg.yaw = 0.86687577827;
    msg.rcp_time = 0.947918613597;
    msg.sid.assign("RQLICKEVBPRGLAMOIWRDNRQYWDHASGMCTNFDACMVEKEZXAOOKFVYLTLTBROWBZOGHMABKLNBWAFXBTTLOUINVULZJGESQYKUTOJPFHXWDAJMTHCZZRZSKOZQLAGYFEWMAGPQPVZJXWDSSTFFYVVFZQHFYYWKDJDTFTQXSDREOGUIDOMSPUJPJJY");
    msg.s_type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.882718912721);
    msg.setSource(19182U);
    msg.setSourceEntity(221U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(221U);
    msg.id.assign("AWIJSDWVRCEECSZGIPNSDGCPJNDLZT");
    msg.sensor_class.assign("MYNENWAKUWZTQTQZDMIAMQEEJXTAMVTDSKRMQPOHKZHEHLLRKOXXYLGKLSWTGMVRMQQHSIGKGTIGAVPFMHCBZKUKSLSLQOCRDOOJZHOVJXPDJSXUZYFCWUQTYPXYPLJYQCRFFOFRBBFFWJHDBSPCCJNNIRNPVSDCYTZXUJWICRXDRJEAMCAHAFYAOFYVEBUWNZHGUIOGKNLVLEIAOCMUGB");
    msg.lat = 0.471920110428;
    msg.lon = 0.745960872208;
    msg.alt = 0.662578920374;
    msg.heading = 0.467118666501;
    msg.data.assign("IVOCHVQROCDWMOZZCRWOMYYPOPGKQVJQSQWTDPBRJEFEQTLTRJUMTDMYJCXFIQQNMDEGXWINZPYLYGDFIHZBFHGUOCGSDGBGLGCIJSPRTCJBZXAUWNKAUKEIOMNVBLWRFNZYOLLTJFNVPUWRXAEFFKVSYZPHIWSJNTLUJBUNEMKYMPAPLDNEKVBIMSAKISESWASAZVBCXRSXXXTHYBZAFAVDQHNXBVMTLDUTHOXIPUDWEHAUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.737297548346);
    msg.setSource(64583U);
    msg.setSourceEntity(147U);
    msg.setDestination(51255U);
    msg.setDestinationEntity(153U);
    msg.id.assign("OFWZLRGDVZLJPZGSXIXHRJRFNQIBXHEMCVAJLWQEHAMWBWPKPUOGOJJIFNBTPIVTIKRXRXDVSCEBCILKRURPQRFIMHPDYMHHTBESCGAVRNXNBEHSVOPYHJTFTMSZQCYNYPUHVMTNUZGSAKUFJFBAOLUJGIQDOVECQZJAQYCBGXQAUDTQELULCSXAYKMTGGOKYUIOAURHWZESXLNWDSFFKYTCEYDINZZQOAVOCXKJBM");
    msg.sensor_class.assign("AWVBHXBXFOAYLMSORPDUAHMSNHLKXECEDJJQKQGDRZHJVWKUABIVVRRPJHGXRGZVEEPNUCLIHMZRRKOZEELNJFMQYVQCKWOVCNLDPUZGTNIJUCUOVMTYPQOHGNFN");
    msg.lat = 0.656438497542;
    msg.lon = 0.502498211011;
    msg.alt = 0.510410966342;
    msg.heading = 0.0365938725278;
    msg.data.assign("TOLCEBBVHWVYNEDHXUFDHPZLEGPNNDRBYCIIEOTWAVCRTNKCEUCQANBZKAAFBWWKPPGFRGSYKSWUCMYNHSNYPAXMROVLAEXYEEBFFSIMMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.906776100917);
    msg.setSource(50772U);
    msg.setSourceEntity(37U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(67U);
    msg.id.assign("OBYLSCXZQFAUTFTAKSQTQXPWOZDMSHMQRHXWIRYBZILEZPJSZMNCCKUFBDGKPMGBJTLEHOGNVJOLKTIRDYEXZAOHFXXQWYHHUROIWHNNKYXWF");
    msg.sensor_class.assign("EINLGLDPLZOPUHMXZMIBKAGKJUPOWNNECSXJGTANHGSOKHYABHCUGSFSBVMFAYRXDJWWENQTHIZOMLBQEVTFOYZFQSBQZJNPHVGXYBINLCQVYACZXJMRTVIEKOSPSTWKHMQPQDXNVNPZYEXPVKGDELUZAARCAJOTBHFILDLUDCRMDNECMQZVHYGFLSUBFXMYUWWJOCFTP");
    msg.lat = 0.673789991639;
    msg.lon = 0.567197606278;
    msg.alt = 0.199090493528;
    msg.heading = 0.900163644269;
    msg.data.assign("VMPPEHRVWYZHIEFQRFIWUPCREPYAJVTPBAJEWOTNKUXULIBRSUSACYUBTFMMWHOAKFTUIEODIKVDVDBLTVJSYTRKZMDGDQTWBQBCHZZFYXHAGQQIOPFGEBXYBKCWSQLJULPXHSVEBKJKYDRMMLKKGRRJQGFANVOUNPLJMTZCXSGWYVSZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.0693171185645);
    msg.setSource(49683U);
    msg.setSourceEntity(168U);
    msg.setDestination(16497U);
    msg.setDestinationEntity(26U);
    msg.id.assign("AETPUBNXVPBKWINUWVKMDCPOBYNSZZVTOGZWSAUHFEJAQNSLHWMPMFPBYLMFCXLZRGUDKJWVIRDHKKWYCXISZQFN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CDGQKCHEGFYHQFWSXKMBPBXRYSKQSNEKZGGKKTYVEPJVWZRAAXGZDBSDNUQAFWPDXHKHHZJXNXCUJGCHTQWQFTNELUJEZOVEXJJ");
    tmp_msg_0.feature_type = 48U;
    tmp_msg_0.rgb_red = 19U;
    tmp_msg_0.rgb_green = 95U;
    tmp_msg_0.rgb_blue = 157U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.807026149751);
    msg.setSource(35625U);
    msg.setSourceEntity(205U);
    msg.setDestination(41456U);
    msg.setDestinationEntity(24U);
    msg.id.assign("ZVBLXKELYCSEFBPSKTATDUDZNOMHOJHJUULVMUFVZVFVHNQWGQNWCAIKIZBTW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DQZSQGKHTPRWQHIJXBKMAFRWDMGGRJDAFRLLKPHKKDXJYGOCTMTHTAVTSXIEVZDJPMFYLGNNDIPSOLFHBDTSBBNLCXUEKAW");
    tmp_msg_0.feature_type = 113U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 111U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.31377786145);
    msg.setSource(56990U);
    msg.setSourceEntity(214U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(57U);
    msg.id.assign("EMCSRJBAZLZUVDPMQRANWGFEBHPHNMFSVBSLLVXVGUURAHRYTWTNQLJLGOZXDWBETYCCAIAWAJLFWNRIAJOLTIMHKQOABSVDQTUPFMGVPVCKHOWNFXSEZKOLANKINITRTXJMPUHYIMEOGJXEWQMWELUPDQFFKKHRPKFDDJKMZZKMCLBIHRQRGOJQBZGWYXZOCPFCCTQIOKYTDSWXFPYHTJVGXOUSNGZJRPEVAIYZQECYNUDYDIX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NLPYIUHMNSATZLHHGEWDELQSOZACACGLJSVFCXAEGEBZFIVNWUTPBVYVHVRKEJJYOBKHSRZTQKXOQXPSHOJWJVNLL");
    tmp_msg_0.feature_type = 90U;
    tmp_msg_0.rgb_red = 225U;
    tmp_msg_0.rgb_green = 193U;
    tmp_msg_0.rgb_blue = 202U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.737570451882;
    tmp_tmp_msg_0_0.lon = 0.157448945674;
    tmp_tmp_msg_0_0.alt = 0.499872148449;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.696853906696);
    msg.setSource(56516U);
    msg.setSourceEntity(143U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(179U);
    msg.id.assign("GUWTQCVFDNHGPRQZJUFCKVPVYLDGVETBLTOCSARJTOKOSIMSRUDCJCXJOTXEIAMBFVWUIMQMYAURWUFEFRFINXDLUAPBY");
    msg.feature_type = 231U;
    msg.rgb_red = 136U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.0304216271627);
    msg.setSource(46145U);
    msg.setSourceEntity(201U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(169U);
    msg.id.assign("SDYHPAZTEROBZKSQFMNKOPQBXLON");
    msg.feature_type = 33U;
    msg.rgb_red = 130U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.905598311166);
    msg.setSource(40540U);
    msg.setSourceEntity(17U);
    msg.setDestination(32997U);
    msg.setDestinationEntity(206U);
    msg.id.assign("JBIOUVQILOHJTCACSYMFIZBZROFHBXOYKDNFJVYLGRXSULAYDTFUZKNLAILLAHPKSRBWTGWQFWXKRVRZYHQWNKYXQGLQZZQGNRDBCFTDZAWAMTENJSOORUXAUSGLKPTSMSEBTPRKNPVVMHJIIIXHWOGZHFCPTNNYBQSIFMSQVPTWPVZSOICMNFX");
    msg.feature_type = 220U;
    msg.rgb_red = 186U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.801733450152);
    msg.setSource(24559U);
    msg.setSourceEntity(60U);
    msg.setDestination(15016U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.690361811774;
    msg.lon = 0.722468352505;
    msg.alt = 0.519895312831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.883022615354);
    msg.setSource(52402U);
    msg.setSourceEntity(109U);
    msg.setDestination(36688U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.873300913623;
    msg.lon = 0.674599548212;
    msg.alt = 0.989501208373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.0452745041794);
    msg.setSource(30245U);
    msg.setSourceEntity(207U);
    msg.setDestination(23904U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.51594551223;
    msg.lon = 0.62846673854;
    msg.alt = 0.51662795293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.885362055499);
    msg.setSource(1526U);
    msg.setSourceEntity(100U);
    msg.setDestination(43052U);
    msg.setDestinationEntity(11U);
    msg.type = 3U;
    msg.id.assign("PDMYIGQCZZGAEWUEDHKOIRAEDQYLHVGZOOWXYMWEMCLTIGVERUVQJBZHVMBWRLYACSHQXUHWLFKWSYQHIQTYKSDDUCLTJRVFBQWXBIIPSPTDNDMVRZSAYJJFEDBENJLQZFVOSURLAWPRXMANBLIFRMZTFPPBSVTXJKUZNOHKTGCSUSSKCPFRUAMRJPIOKOMPJNGUHKEZFYXWTGXGXQLZMNWV");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.68980251175;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 28085U;
    tmp_msg_0.custom.assign("JFGPPZWUCVLHPOVNOVKUJQFDZCCVOYCQBPGMFFIJRYRBVHQQDLEPMLESNKHJXWGBTXUMGOIHQFPUBFQVZUYBDINGJBRELGSQQTZELFZFSGKBEHSZCNWIAPZJRSDOPGAUDRLLCIUSIJRDWYZXHEUNNXBMQJRMVNKRCYZKFRIVCROYIAKXHKGOAWDMAWMWYW");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.927350583809);
    msg.setSource(8085U);
    msg.setSourceEntity(177U);
    msg.setDestination(22977U);
    msg.setDestinationEntity(54U);
    msg.type = 246U;
    msg.id.assign("NXKMYKTXMFIYADGUHAQGOHQEAKATXMMLCPWVYJQSRLLWPUNSYGFOBHXUTJOJCNLRFZHZACRQGZPITDSQNQZVJVHWVHOJIEHJZZEVLKSAPCIGKFVBQRB");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 252U;
    tmp_msg_0.request_id = 36812U;
    tmp_msg_0.command = 4U;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 63166U;
    tmp_tmp_msg_0_0.lat = 0.386265834285;
    tmp_tmp_msg_0_0.lon = 0.85339674378;
    tmp_tmp_msg_0_0.z = 0.799092516973;
    tmp_tmp_msg_0_0.z_units = 49U;
    tmp_tmp_msg_0_0.pitch = 0.979197968476;
    tmp_tmp_msg_0_0.amplitude = 0.571939520495;
    tmp_tmp_msg_0_0.duration = 16813U;
    tmp_tmp_msg_0_0.speed = 0.536955933543;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_tmp_msg_0_0.radius = 0.183624407009;
    tmp_tmp_msg_0_0.direction = 206U;
    tmp_tmp_msg_0_0.custom.assign("NUYQHWUNZUPMLIBAXBEXZEVUXMYDRUXYTHKLQBYKAVMYJRURABRXPTAYTDYOSGCRLGIRCLGEKXLVHACJMNEBSIWLHXGHCQCHFJFYIHXTMOAMTLCUIAZLVBFSOWOJBGDTZPTVGACKHRGOL");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 19343U;
    tmp_msg_0.info.assign("EQAMSJDDYYAIHYAMJOURQXQPFBYBPVWNYIZPXHMWZTJKCVQTSQPFWGGEINPUNLFQRKTMGQUCBZSSXLHEGKJMJWXMCVEIAOLQXXICLLCXPZEWYBLKGBUBPRAZFTNZRFRSHJTLUWFDEFGIYVUZKKUZJXVLPDTDHDWNDTWJRLEXPHSROVCCPSGVTCADOVZVHMBI");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.618973657734);
    msg.setSource(45596U);
    msg.setSourceEntity(83U);
    msg.setDestination(20384U);
    msg.setDestinationEntity(179U);
    msg.type = 7U;
    msg.id.assign("VFCDRCMVFBBQIVOYDYCZTLZOCWTHILIPHNGTQEUSXBMLWKEZNIUZHJDJRPRNNKVGGHNOWJMMXAOCBYPMLBAQSWSEXJZJFVPDIRLPAFMRKQPZYENDSEIENXOTJDDQYGBUOFGVIHBEWPVCUHZOKVNKHLWJYIREGJECINNSTZUCKKABRTAHAJFGKUULABILLFOXTFRSLDKGYCTCRSAAXWXUHMPXXYAXSWQOFPFWHYUZGQMPUTKWEMZGRVQBODMY");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 210U;
    tmp_msg_0.max_depth = 0.297824761108;
    tmp_msg_0.min_altitude = 0.0749919286257;
    tmp_msg_0.max_altitude = 0.306466023157;
    tmp_msg_0.min_speed = 0.857347499513;
    tmp_msg_0.max_speed = 0.898260055142;
    tmp_msg_0.max_vrate = 0.50527509421;
    tmp_msg_0.lat = 0.582270885122;
    tmp_msg_0.lon = 0.397491955516;
    tmp_msg_0.orientation = 0.599077608087;
    tmp_msg_0.width = 0.448149751001;
    tmp_msg_0.length = 0.699630352094;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.519437839474);
    msg.setSource(21540U);
    msg.setSourceEntity(30U);
    msg.setDestination(47417U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("NPJHTZWOEQONRAGNNCTURARXKEYFXHNDFXPZIYWHYLQSCSMQVIMZDCXYOOCMPFBQPJCMTIUKMWQULLZHYBNVKDKQSBBMZORJUJDPDVWCYFMPGVSEUEGFZGCWKAVIHHNVENNXLFARTRXULOGYPJAVPMKIDSACFRFWXMSELGBKOLYWTRGAKFIOKJDWVUVJTVZXSOEHZBIWIHTBTZWEGIUSJNQGDISAESBJQTBXYJDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.18581934239);
    msg.setSource(50821U);
    msg.setSourceEntity(212U);
    msg.setDestination(20447U);
    msg.setDestinationEntity(93U);
    msg.localname.assign("RGWMVXJQVIRLDZFKPITIQNPUKZOWHHCYZNPLCJMSXTKHUCVCPEQSYGCZLUTBXOENSDLMVOCTAHRKXSEWGXXVAVKITQYROFTVWYETRZFNLTQFYGEDMPJBBAIHKZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JFJAMIUNWMMXZYBFYUEQERAKDZGHXESHXGLCFKALUWUHCLKJBOUQSXWZMAHISOLGSWFZICEGNPPICCNQVLCRBMEQTHUYHZUPEBUDDSMYBVGXHJVDJPJGTTCFGWNUQQUKJTAVBXSOJRNTTJZEOYKTFITZOLNSVSOVISDLQDZIVVROEWPPFLPYOATMDBRTMRXKHYVVAOZSARP");
    tmp_msg_0.sys_type = 5U;
    tmp_msg_0.owner = 54459U;
    tmp_msg_0.lat = 0.0115035730809;
    tmp_msg_0.lon = 0.26935839297;
    tmp_msg_0.height = 0.359619581207;
    tmp_msg_0.services.assign("EYJXGLYHECNATGDOJVYNJYWRNLPHKNUZKFDVEJKWYIPMWLHBXUELTMNAEGHWITALOUPTQTHNRQAPSVDXIWPIIQHPBLAIBOYYXEVSDCSKLVMEQWFMVQFGIWORZNFQZGJS");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.904885208012);
    msg.setSource(22981U);
    msg.setSourceEntity(157U);
    msg.setDestination(26688U);
    msg.setDestinationEntity(38U);
    msg.localname.assign("FXSZKUAVZKCMXVMHKMMEJPYMNDHNVRXXREKZVGBUBQHDCBVLJCWCVHRWPAQQQLJVATBXKGDOUZOBCIHERSLRURTW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QAVATUMPAWLKDVBUAMCJBCVYLTHMYNDIGEPXXENJDZDGLGNOJQVQMNTBNDYULGPFLVHIQSAFKROSHSDHHFXOVAMJUDFOZPAIVCRKUSNBB");
    tmp_msg_0.sys_type = 182U;
    tmp_msg_0.owner = 4037U;
    tmp_msg_0.lat = 0.677247512839;
    tmp_msg_0.lon = 0.307076117733;
    tmp_msg_0.height = 0.31181095907;
    tmp_msg_0.services.assign("IOQWXXWYABRVXRIUREHKKJHLGEXT");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.574015649931);
    msg.setSource(4970U);
    msg.setSourceEntity(227U);
    msg.setDestination(11907U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("TGELCARXQNJIQPYYXLVYCEGLWZPGQCSKMBVUAWTIAJSHJDNVTSHMKDFBFG");
    msg.predicate.assign("NLLQJPBRTSVHNPDMVDRCHUYZQIJCFXNCFUDNJECZGOXJPKQJSKLGPXJGFKEXEOQBYOALLQIMKXSWKDPUHKNYRASGZTWPJROAXTHXGNLMGSYLGIPBUE");
    msg.attributes.assign("QQDOUTJHBDQPABNKEWEPJFQOFKZNEUIKSCFKXMVFNNICAEPERYSTVESYZCGAWJBDILHHUDSYRQWKDLOLQKNKHSAGGABPGWLXRRLXOBTVNSXEXGXITGCFJYFUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.8967127218);
    msg.setSource(58234U);
    msg.setSourceEntity(80U);
    msg.setDestination(49737U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("KZYTYBTEAAHVCBMTFRTNOWUIYPLJJZSYIJWNDZURLLCOQNQVUCICMGMYNIQIVJTCAHFNYKAORAHVO");
    msg.predicate.assign("LNJBXKUTUFJRFRBNRLCWAYMCWWO");
    msg.attributes.assign("JQCUVDDPRHOCSFQOTSFRQGBIHMFWUIYLWQTGMHCJHRDYEYEEWUZBGEYPAOVCJZKOWGIPSLNGGVWEDNLMSMQBZXARTRUALXEBUUMDFJOSCZYYTNRGTHJFSASIEPVDLKWCXDIJXGQAVATQHMIOZLPFNZNFDSFKYYHKEZXOVOCRHIKALVRULCDKGRBKKJQXWXJBONMPYMTTBDVSLUCMTNKFHBZWPXZIIPAXPQHEFNRZBEBVKCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.629268608073);
    msg.setSource(34762U);
    msg.setSourceEntity(183U);
    msg.setDestination(5652U);
    msg.setDestinationEntity(17U);
    msg.timeline.assign("EEZGOSNKAPTQLWXNXXMQAOLHKZGGRTREBLNFWDARIYTQJICVLNZUXZJDPSBEEGWDRUISCYKUOUQAHTGFMJVSQHNXGTXOPFNCCNBQVSLSPCOXOUIIKDTEIDBVQFYYJUYVIYBTEOOTIWWAMFIYNBFHVVTMAQMVSLHDPDGOKWWTJUOBMUGCHBENHLXLCFZVAWQRMKEVYRUZSPNHRJDKJLKBJJWGLYF");
    msg.predicate.assign("OWEIDLOAIRDGVUHEKQUBCGPOXBDNKYGEDRHHUBCXCJAIJCZFKGDCAMBC");
    msg.attributes.assign("LXGZJLCAYNSZOBUFHCXQUOQMPISDTYFIBSOOBTKZYGUWXZMGLBAKMVSJPEWTFSMRHLYKMCQKRDOLDRFNNJVEHHULSBKYXUAQVZREPZBCJCICJVJFUOJPAYVPBKAIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.624144613544);
    msg.setSource(20112U);
    msg.setSourceEntity(65U);
    msg.setDestination(12162U);
    msg.setDestinationEntity(61U);
    msg.command = 107U;
    msg.goal_id.assign("GDCSCKTDMTMNZQQPZJXWTAATVOVUELSHKVQOFQPOYLRFNRZNYACUBVAODJKBJWLFQSURWGXBDKRCPYFOTHRYEMMBHBYWRHYZMCEAKCZXIXXWWEEVMLMXZYZLEHSRAJCVJOGEO");
    msg.goal_xml.assign("TXYARZVPEXWDWBKXNAKUQACVXHXBRIDYACFWVBBUNXOSYXHRGAFRMMBNEQPLJBCBHDNIELDOFXTASNQDSRJUIMORVOWOUMBCGFGTHKWEKUZISLPLDTNUFSPDQCMXETTFVZLFYGJYEMQZLZAPPKSTKRWKTZOWIHCYQWEIANGJZCEDNOJZMWSOVHMOQFUFYKKGTQGIPWSRJKPIVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.195690672483);
    msg.setSource(56914U);
    msg.setSourceEntity(116U);
    msg.setDestination(31413U);
    msg.setDestinationEntity(100U);
    msg.command = 142U;
    msg.goal_id.assign("QEMKSKWSLVKFFMAWDIIYSOJCAGAYVHKRZLGKELUCUSMCYBNXDPZGIZNXSZHBRZIZITDQUGAOUFPSHSIQBOETEVLFCITDQRGWHPWYUMVAKBYTERBHCJTDJMWKYRRFNCLPRXORJSVFEAWBGAUNBPXGXWEMTXJONTABTSFXIOZQUPDJLXFZJCHOGEOIRWQNVBOKRPJVDLTLF");
    msg.goal_xml.assign("WYWCHZBSRQMHNOCIFFXVHVTKSFFDPDBHOQCRRLHTJZYNMALXDYFRISGDWEMGKBABHXNFYQIVQMVIOROPURYWPTNWCDOUELNZWJLMNOYCZUBXBQKXLQTQIMVINUHGJJRVHAXAAECAQBTVTGEDAGUJMJQMKURVIWSKWDTDZFYSELJRUVYEAGFYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.203589907534);
    msg.setSource(20417U);
    msg.setSourceEntity(14U);
    msg.setDestination(23121U);
    msg.setDestinationEntity(236U);
    msg.command = 149U;
    msg.goal_id.assign("VNSXUFTWTUPQKYMOKWNEVHEXWDRCGTVUEIHYNIFXTRXQWWGGDRQSUSULQPETZWGADZKWOFPXKUEXRNGSDPASVMZBUWCRTNVCZLSJCYOEJKKSKVKUDYNDCBAHYHLOCJFMP");
    msg.goal_xml.assign("AKYRCPWIVKIHBLEFNQITJLTRJNCDUDBENPMQLOYOYQGNWNKPCHZQVMDYWTJZLXQHZVGEIRYQOXMGADBKCTPTFDRRXSNCGJHTMJGSSVTBNUXJFDKWOPFYOSBZBVQYQCZKZSIKMEJZEFRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0985562331358);
    msg.setSource(31321U);
    msg.setSourceEntity(249U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(191U);
    msg.op = 221U;
    msg.goal_id.assign("DIXFVEQILOYQKKVPHQGVRPQMDSKEWLJSYMEUJSPKBYTRMFJOVSYXVDAABOHQVHMEFEACXYCGREPQGOEOAULPLDIHTGGXNZVUCTBWWFGVWTUZPBCPWCQFNBHPGWGNIDZKWCWIICUJNRFAML");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NMYJZPHJQVOOPVXBIMFKAGFUWCEEJQMSVNCMHMXZYWYPBHXVXKEMWAKFKRPQMTNXGEBTLWJPOGSNCZZSAUJYZALHOVDGTPEMEFDBGFLGOTYNTIBQTKUJHLQCYJZVBNYUAXREGCNGMQCHGRMIUQDHOHDRFRRBBEFILKDPTZSENIUSDNRCZDOKKAUPJXAFJWRAUIWGLRNHPOVFZOIRYWIAJCWVVSIPTKLYUZILDFETVCBDCULBQSODTW");
    tmp_msg_0.predicate.assign("PSXIILZBZJEFMPKVGWDUWUYSUGMCICHENIKUSNPWWVDZTAACAREUYZJBVGRGKKAFEODJOHNPRZZRRPDTBDHHYZGDCJXYQLKQHZNPBZTNAIMCJSKBMYFSRVQOMCPYKJQHVIFKLHLLIAOBWVETTPGVHXDXXEUUHPWXSGCQYQRUBWFAXNJIWOLGTXEEUSZJJQNAMSPCCQFRAWJFLKVOVIGMWENBTEUMBFVHDKSADOQQDTNRMOF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.69953356598);
    msg.setSource(19946U);
    msg.setSourceEntity(149U);
    msg.setDestination(32911U);
    msg.setDestinationEntity(128U);
    msg.op = 249U;
    msg.goal_id.assign("HGBLPNHCTAPZVWOXNLXRKRFYDRHJYVLROELARXEPINPWSDWDSRALDSETWTLEZHGRVWETPUIUYYOAFVAKNOUTGEVXUJYWKEPZHBOHNUQXOQUDUXJQJMSFMEFAUQSVYMKYOZDCQBIILKTMKAYXCAFCMITNQFBTMCLACVOBXPDCOWHRBJILRJDSZGMKWR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ROKCWUQHEUSKILNCPBILMIGPCOZZIHDVYUQIYXUDHGAWPTCQWPINGRBMEQJGSIRCXYZQZQKMCMAORCUXBFITAYJXJBRRVGAHDIFWMFVEOTDMEZEPGWFVTETATWJLEWJOASVLPKSVUQZFGLTSDZGPWKGPCOLDVHUMPNHYDLSOEBMHTJXNNSXVBXVWSQANSAXMNNYHTUOJZHAY");
    tmp_msg_0.predicate.assign("VZMVRDSYMVRPXEEJTPYUZHHGOEEJVAZFAMRNLOHYMCAEOCJRDJMKFSQANKXDQFRHEGOEKWEBZGKBNRJUEVACVUBDTLQFFKMOSAOQPPIZAIPHYTBLKOOGQPQAIPBPMQJLTAUXHNGTCFONBLWLNKMYSCRDWXFGWSHIYZJNZBWOPXYCIBWVSQTJKUCIFKZTIZWGDSGLDMDIJXGAICCUZWHRRBXSXWFWHSNUKTQYNLRMFDHGCLEJUTLV");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.367646288783);
    msg.setSource(10775U);
    msg.setSourceEntity(3U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(157U);
    msg.op = 210U;
    msg.goal_id.assign("KVGWFAWBXYTOCBZEVPISLLNBLTPJSPPGVQZHSHOUKPWENSNRSQOBXCUNSEISLCXDIBKIGDVQAFJFYVQRCLRMRIXRMTYLWJRP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OTDGSJRTDLAGPJQDNHTMYLPQYMHGAWVJUIUCQUUIHDSKADEQFRVUHWEBMNZMHSVXYIJZQICBMXBKUJCXBURLZJXOOHKVXKFDBGYGYATNMSFTDLLNJRAUGYEAEMPSRXFFBRLRQFFXSSEKSMNKUPIGVNEPKCJIQCM");
    tmp_msg_0.predicate.assign("EVQCKCTTDYNXMOIXMSQUCZXVWSWNPGALUJZKBHEJROACFFBRGTPKDBGLNJXRXYDTROPFOV");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0477530022436);
    msg.setSource(47570U);
    msg.setSourceEntity(129U);
    msg.setDestination(14554U);
    msg.setDestinationEntity(43U);
    msg.name.assign("FHMOCZPCGHUCRHM");
    msg.attr_type = 134U;
    msg.min.assign("XFOVHVETKAAZNXEDBKVINJTKAWBDFQGUAIVGMURNFZSFCYMKNQLWVYJAAGDIZOEGSZSJRZOYWIRWAXTBZUEXUVLQQBQIYEXFDXLLZEEOUBYFXRHWUWJQHNYGTVQHLTAZJFRPDDLRRFYMMTUOKOHPGCBMSEPICGANKSPJPGTTMXSYQH");
    msg.max.assign("LXRBNUAXDUGPISDKYYBGHFNHYYONHGMKJHOLEWDMPVMYGHAARHNDMKKXPSGQMIDQCEONCSRVVBQFWURENQHUCPJBDFOBPEYAOLZMUZJOZTTSKQKKYDRKCWLTLEBGNZZYTUNYRURUCITRANPEQQVSFKZJSATBTTLGIUFILFCIWRVPXABGMZOJVZEQOVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.228173365637);
    msg.setSource(58887U);
    msg.setSourceEntity(166U);
    msg.setDestination(9945U);
    msg.setDestinationEntity(70U);
    msg.name.assign("GQMEOFADSKBLSICJADCGZNAQNOFJICCRGBIYVHHVPEZKMGZNJTFTKOSWJOMZOILCHCPUETLCBOATRPNJOJFWVUNWCBNTVAPXSMESIYGITLHGLZJTXWDXPRLWSNLXMVQPJPBXDVRUIYDHQRQWM");
    msg.attr_type = 40U;
    msg.min.assign("ASEDLVHSNPEPMIQMSWOJMPCTKJHFXBQTONRGYGOKVATHGHCNPIERUOYJZGIFFUWYTLCGMIMUOHSJIXVJOKVXBYDJYICMEJNDCUGOOSETYKDCHKFZIJVKSEBWVNTDRNITPRWXENXMFAGDUQWLRQUZPRYRCBDHUNKWYPLQURS");
    msg.max.assign("WKGYYLHCNLZUOGYQEBQBAGMMWUYVTRZGCSSZZFTTJDTQEBDMPQEUWCZFEEANHERWSJDCVUHWIHRTGXDIALIJYXOZOLLPCESGJIWICRMGISUDHJHCXGAPKPPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.966067385879);
    msg.setSource(3217U);
    msg.setSourceEntity(80U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(176U);
    msg.name.assign("RIDTWCBAFRLPKEZJVNMTWXVDSQHRCKKQEPBFFELPRYCSGWI");
    msg.attr_type = 3U;
    msg.min.assign("CGXSTEWTHRDLDRJXSMPUVVZMZXHVOQN");
    msg.max.assign("GVKMETFFEIDOAFKBTRRRINZVFHDFBIWKGKFLFFWDKPIJLGVLLJGBNQRKAPFBBSLXIOBVKILDJKPGSZWYHXXUUJQTDESUTFUGYPEMCIHGOAMHQLCITJYNTWSURJQWTZHZVUNIEDPVQXJCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.703075700281);
    msg.setSource(16610U);
    msg.setSourceEntity(245U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("SZRXYKSXGGSEIQCPJECAXFMCCVPDRBNEEIUONACYXWUOYLQLGODHWYHWKTISMURIVPEAOHPRWELPBSHPSBONVRJHCXKGEJZGULKHLYFFUQIXCAJIQHGFMRIJULDUCTLIABWQKTDOCAFJUXMUTNZMVUKVYFRTNTQSFJZENBQRFZMALNWKOAOHOZXMQYDQZPXEYVVGDJTBVHWGWMDAIVXBSBYZSCNKKTQ");
    msg.predicate.assign("ASPIFTPAALPJZDZOINRLDCFEVOHSBQOBVQTHYRPKMXYLQWFOCDCMXQCPDZMTNQVGNRHPRTVGSKSYNNZGDUGQDBBKYMNGLNCRXSNTZCODQQHWVNUPUWXMAYHRYINRKYBIBEFHCTGPTPLBXRIJLZAHCJELEYFQMVAKOUFUMGJGJVQTDKSFSJEAKEKSWGWXGBDAZVCKWSXWYOEHDOHLCLELZJUMWIIABHRTOUMWYUVMPJIXVFRXFOZZW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CGMYVBCIRMRWCZQAYNTRPOB");
    tmp_msg_0.attr_type = 12U;
    tmp_msg_0.min.assign("IMPUMOQIQZCLUXEOIMFCTPBQSBXILRWQOFBZVRUAQQCLEOMZDEGHKEATHHPWTHVOGYKNCMGQZJGNVLECRMZTDZWCXJYTYJVWOKZHYRJAEZVKTGXUKUSINRBELPNEXXVHBJIDFNJUQMSIJWPDOLFYCYNOXDTN");
    tmp_msg_0.max.assign("FNFKNFMWUXMFSRQCZIANKEHOCLVFNKXAHEDKVFNJXRLIWUOIDJYJHSXWOMZIBMKJFUVGSOQOCGMUQGRGCYZRHQLKASIIPTGCRTKUZVASLVUVCSXBLVPORS");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.536381344978);
    msg.setSource(65376U);
    msg.setSourceEntity(129U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("HHNNHMTSUSXISDZCCVASHPSZURSWGHGXPUFNDTFZUKKILCPVMBFBYFOQXGHBTFAVPDQCGRIFUKTMGYNIAGPNEMSVNOJOWUVRZEEWSVSJZTDMLVJCZOQQYXVYLRZFBBFKMDMTXAROKWNFCTAJZQWBLRHJKTCGUBEIJDPMEJOBQRVCJYPWKUXIQAURGCNJOGKTWNPILWVBLDPWYKMDK");
    msg.predicate.assign("ZPXRVSYGFGVCBDWTXCXHYZOKKXNBIZFEIHWDFTISLVEFBYYNARXUADTDXCKYRNHHWROSPFJLIREMDQYPCVJQNLTZIQGOPLHDZXQGLFTEMKKHTORSOUPPSWJJGABZEYV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RHIMNZBESWPKMDDQXXBVEQOYWIJNEQVPOLNDYCSHCEBHKDDEIIEADFABSJRKNGSKGYLLCGUKTZIUFMBNDROULFJVYNZDQUHAADXCPPBCOVGTTWWCRZYAZUWONJQDHJEAAFMLPPHSYBJCIVTSPKIMLOUMEZXQKSBXJTQQYTIMLLHR");
    tmp_msg_0.attr_type = 8U;
    tmp_msg_0.min.assign("OWLNPOYEPZBBMFTPWPCRCTVLHSGGZCLSDENEONGILJXHBHGKOBZDVLSCSPAUTGXWMUQRIZIZMOUFYCNTCHRVHBPRUVLFGEKOXIBJUIJLXQYWEMWXPHZOPJIAVIEWKBVXNRJXQZDAREVJOKFEBRMQCCAZYJAYTFRFGMDNBPYTUFAPAHUWYSDFZSUTMUHIINWXDYNKKADOQBXHGVTFKCKNVYQSNR");
    tmp_msg_0.max.assign("XPIWTZVAEMYSGRXLABSEKXTKBIEDXZIHDRDYZRJNCGRBNNGMXSYODRLNWXWFBGQWEOGNJFMGTKKQXJEOKAIMXVPXJMSZCGJAFWJBIFIURRJLUVLZPPNZLVOYDENSTQHDAMTOIVUZFGVHTRKNHFUEQCWQWSVNBFHCOZOAAAHHQBUHSKYISYFLCETUBBP");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.373659403991);
    msg.setSource(47142U);
    msg.setSourceEntity(96U);
    msg.setDestination(3775U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("MXDKPZUOITCFKUEVBJOTKPDNUZCPUIYCSZWUVXYVXAZARHGJWXAFWXFZVLXMLJGMLAAI");
    msg.predicate.assign("GYAFZNKVYVQODCIAIZIVWRDTDJYLWSUAEITZDZMGRTNGVELRUCJPXJEBGFKFZIZKWBMHIIXEHXOBRMPTUBHUKFVYFAWGMNANNXEPFBATXUVOQULLMHSANUOHLYJCQBTLRCEQGXJBVNMOZSHEYIYLJZOGDKUSKUOWYSHXPHLPCOHTVZWEVIKWRSAECCCYNMPXRFXKLPRWSEBPODDWBNPQFSUDKPCRFVSTFWSRCQGJDYJINQJTKMAZAMBTDH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SPCSMCRMSOPZEYXVOCXOBQIYMHEGNLCDZJVECLXBMXEZWFAYEPAUSZKFWSLZZDQUBPUWAMITOVZWPNBDKLFMUTSYALRGTDDDRFFFUALJCGQEHODBKQTQRJMWTTQJISWGNBYIDDVDVINNJPPULCHXPHGSJXHQKVUVHIFPEHFGAEKKEYQRGXBFHTMSFSJXQJCLHZGLNCRIK");
    tmp_msg_0.attr_type = 46U;
    tmp_msg_0.min.assign("HMUTXOYZCWCBNUUAXLISVLPRZPRTZDVMAAH");
    tmp_msg_0.max.assign("TJSKBTUBHSDOAXYRWIVFLGIRNLGBPGLEMZDAAYBVYEXKKLZROQQUISRGDNTBSGQNCOUWDFAHKKAEZHG");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.476737446272);
    msg.setSource(48292U);
    msg.setSourceEntity(247U);
    msg.setDestination(64334U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("IHIFEBKZPIMQHEDCNYTNKAEHYVUEKXTHWODJBQALYIFPKJOUGFUSYTVOWLFXBZTYGMHUEMLPVVGUZJDZNVLALQKVWPCAXLQBGDWEDSLNBIODBHNOAKBXXYJLSRPGWRJPZCYUVCXQRSSNPWXRTYTHCWDJMZOOFGNYATTRIVPZYXHXNQCPTIM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JLTCGLSBCWZUDELSKWRHKDYTVQZBRPZIRJAGNKBBIDBLMREFUUXRAJVMYZQFHHOATGHPXVDCHRLTVQYQWKROITRAOFCSUGNMNCVNZCMPMSATOXDOMOGUILWUHJYN");
    tmp_msg_0.predicate.assign("KUYDBSLDRSCTZOYAEJLHRVJHXHCENDZSQHSNVJJXOFMZROKOYUCLKAOTMZSQYZWFLCQNKCJOTDTRGXHNKOWVEGWGYCIVFQPAGUTBF");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.241945186639);
    msg.setSource(48946U);
    msg.setSourceEntity(17U);
    msg.setDestination(55545U);
    msg.setDestinationEntity(16U);
    msg.reactor.assign("JGRTRMRBLFNBXDJPFHTXDFJRIFDPOLIHWUARBECFDZHDAUFYWPSHSVCJJTFRVZEVNKHLIYAYWAABCMZOXGZBOMYEVSGHVOZWLUI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKVDJJAXASGNTFBMJKUDMB");
    tmp_msg_0.predicate.assign("OINTVQJJDPDREHMCDEROAOQSJWKWSJUURHYXHXRKKAKPIUGG");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.509362357749);
    msg.setSource(41332U);
    msg.setSourceEntity(121U);
    msg.setDestination(65015U);
    msg.setDestinationEntity(154U);
    msg.reactor.assign("LQABJKQPWSERNNZFKIFJTKIDOWHGHHMNSKEYRKWLYABVTWGLXTZJXVZAGUOBXXDUDYOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.368719442485);
    msg.setSource(17244U);
    msg.setSourceEntity(102U);
    msg.setDestination(53894U);
    msg.setDestinationEntity(59U);
    msg.topic.assign("VLGWMAQYABMITPTUJGTQEQZFXQVXNAGGVRVEJNDPNFINBPIUWABCKHOSYMVSJJXMMADYUWSGDPSYKGLELZYEGDXCXVLRCYUKHOWKUZTDPLFEYVCLYCCBQWHWOKZXNEUOADIOWFHBEXOUTHJFXJQWRVSJKHYHUMQVPHRDRRUKMVCLSZKKIBCDUJLEEONNLZSCFDMRHNGIKRMSIIFPTTOMPDZIBOET");
    msg.data.assign("FZQKYUVBZKXXYUDOKFVPLASWMIGETXICUYDNPSCSRVETEKMCLZWBWTBXWNBVJJVGKVXEQXDYLQEZHPKMCSPTJFQHJNRUESPSTCPWMIROBFKOGJBQLYEWAFJYVDBDWOMREIHDCLXGVVRVBPPMEGALUDURQABOFUUACHKORZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.580966622537);
    msg.setSource(41275U);
    msg.setSourceEntity(70U);
    msg.setDestination(59384U);
    msg.setDestinationEntity(115U);
    msg.topic.assign("JJRCTDREGODOHZDMEGTAOUYLWFDZZSIKWAJZJKEQCTKWLVQRUYBLVFEDXGYBQVRUDKGKLAUTZQYYXUSLOAIPBVNHHJCJMTVILQSNTRPELWZQHIWFHNYRFXPFCNGWIYNCGZETQNJFEARRSYJDMKUSIGUHIMSCBEHH");
    msg.data.assign("NRLKFUXYFNEABWETPVKWBAGHWOGZRUGESQRJQJBLPPUYORVXTLYHKQBAWNKTPSNXPSVCVQXYHDIJXURJOMAZJAAVGBDVWDUOITUAPYDFZCNLUHGINLXCDJMNSDXDBEIYQTOMZYYXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.029909353175);
    msg.setSource(11287U);
    msg.setSourceEntity(50U);
    msg.setDestination(995U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("TYJSBVVWLWULCZFBRQGEWLKDGIDSMWWQQNFHJATULWVMMPRVHEURYSSXIPEOSBLUPUKOCNVABTQXDCYLKNAGWYTDGZOEFTGTPTQFIVMUVKACRGZFHASFHGCDDWBRBFFVLIYGZTCNVWIUSXPHASRLMQMSEABZLCPCDRPNQBXTJMAPYGRNEOIMFQNSPKDJUDIEUCJIOEHKEYJHXJOQKOXJXE");
    msg.data.assign("GUAWRMZOILUOMATIDGCGZXVJZKDWJQISKSLXRDVUOTWPTOIYEPXLPJPSDRFPDDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0954713030186);
    msg.setSource(51044U);
    msg.setSourceEntity(36U);
    msg.setDestination(16898U);
    msg.setDestinationEntity(240U);
    msg.frameid = 204U;
    const char tmp_msg_0[] = {20, 110, 75, -62, -119, 43, -14, -6, -41, -25, -126, 56, 60, -51, 19, -102, -29, -71, 82, -75, 38, -3, -104, 107, 7, -79, -25, 93, 12, 24, -114, -92, 35, -70, 21, 34, 106, 3, 31, -40, 113, -10, 61, 118, 90, 113, -46, -106, 35, -122, 36, -27, 107, 11, -112, -40, 68, 51, 99, 50, 88, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0715810467058);
    msg.setSource(35244U);
    msg.setSourceEntity(77U);
    msg.setDestination(34573U);
    msg.setDestinationEntity(159U);
    msg.frameid = 61U;
    const char tmp_msg_0[] = {121, 68, 4, -61, -76, 6, -52, -5, -15, -98, -89, 40, 71, 30, 58, 101, 14, 92, 24, -61, -114, -94, -20, -119, -11, -83, -100, -124, -56, -92, 31, -12, -46, 101, 20, 65, -76, -100, -61, 30, -81, 42, -92, -64, -9, 103, 100, 102, 98, -47, -57, -119, 5, -21, 2, 85, -119, 89, 99, -14, 45, 62, 0, -58, 97, -104, 102, 72, -55, -116, 88, 25, 49, -62, 72, -90, -1, 24, -60, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.287370066809);
    msg.setSource(27143U);
    msg.setSourceEntity(147U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(245U);
    msg.frameid = 131U;
    const char tmp_msg_0[] = {-59, 65, -123, -82, 97, 71, -62, 53, 46, 17, -13, 40, 60, 53, -3, 121, -73, 45, 23, 116, -94, 113, 2, 25, 75, 126, -120, -36, -44, -99, -3, 36, 72, 42, -90, 64, 0, 78, 7, -65, 26, 51, 83, 30, 96, -64, 65, -2, -118, -56, 53, -55, 50, 40, -27, -33, -77, -10, 61, -109, -18, 15, 16, 110, -9, 23, -47, 52, 13, 61, 119, 121, -43, 23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.953611038229);
    msg.setSource(9752U);
    msg.setSourceEntity(67U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(218U);
    msg.fps = 58U;
    msg.quality = 125U;
    msg.reps = 109U;
    msg.tsize = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.289060046902);
    msg.setSource(57753U);
    msg.setSourceEntity(249U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(54U);
    msg.fps = 205U;
    msg.quality = 148U;
    msg.reps = 118U;
    msg.tsize = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.77680742151);
    msg.setSource(8001U);
    msg.setSourceEntity(246U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(63U);
    msg.fps = 223U;
    msg.quality = 185U;
    msg.reps = 109U;
    msg.tsize = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.516931095106);
    msg.setSource(45900U);
    msg.setSourceEntity(117U);
    msg.setDestination(65383U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.269947467241;
    msg.lon = 0.58453883383;
    msg.depth = 54U;
    msg.speed = 0.0646827686821;
    msg.psi = 0.135657878431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.0259112086807);
    msg.setSource(55751U);
    msg.setSourceEntity(178U);
    msg.setDestination(7868U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.828753124718;
    msg.lon = 0.754598777171;
    msg.depth = 225U;
    msg.speed = 0.332892461028;
    msg.psi = 0.570060939416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.432766295745);
    msg.setSource(18469U);
    msg.setSourceEntity(173U);
    msg.setDestination(15399U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.892216530833;
    msg.lon = 0.905074187864;
    msg.depth = 21U;
    msg.speed = 0.661115237264;
    msg.psi = 0.566398202785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.119681886639);
    msg.setSource(37781U);
    msg.setSourceEntity(46U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(222U);
    msg.label.assign("VTHSDIJXCEWEDEZHRJSGPHFMIYTZEJRDJTUYRGBYOTGCWWQZUITBMFKIUNIACYXXNXOCSDKCCHVMZKVUQAVYAOTQJDAMBZFJAOJIIOLKBHNQPTAPBCOHLELYBSNMLDVIKULUUMOLGWAEMNX");
    msg.lat = 0.517059985124;
    msg.lon = 0.474548901775;
    msg.z = 0.264775652508;
    msg.z_units = 78U;
    msg.cog = 0.491395211124;
    msg.sog = 0.800755169521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.260296495568);
    msg.setSource(18178U);
    msg.setSourceEntity(207U);
    msg.setDestination(65182U);
    msg.setDestinationEntity(115U);
    msg.label.assign("MQUZBRCVCDHAOVKAMSDPTGWNQDNPXXFZPCUWQJUFPRGLSSAMQQKANLQECULFXKIAKFHVJJJILEFGEHCXIPTFYZOTMZZOKYXXNZRXNBRHWOHUNSTICNMPEVHCBHTYGQIPTWVAARLY");
    msg.lat = 0.393450971821;
    msg.lon = 0.117136022622;
    msg.z = 0.281574989674;
    msg.z_units = 63U;
    msg.cog = 0.90739993518;
    msg.sog = 0.517816835681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.314805275937);
    msg.setSource(35291U);
    msg.setSourceEntity(57U);
    msg.setDestination(55004U);
    msg.setDestinationEntity(49U);
    msg.label.assign("GCWJXTDHIRZHUMULNXZPPNTHNAMTQLLFVMSNLFDJQRYOVGEYQPZKZNWWHLGCMMFWZZKXSIORAVLOMOMUZEAAFWJPSEBBYGKQPKCCPKYHYJRBMCDISUWQAJWLFCIRSDKJAUVDEWBRNIEUPPYNZOXVBRTXQINDXTRDYETTGVHRLEXHNNYUCYSSAPXBRGTCOIVVCQZOGLFUBKDQHJBDGHTUHDXSPYFOKOEMJFKGIAJAVIBAGKEWSZUJOIWBFQLVME");
    msg.lat = 0.687303330669;
    msg.lon = 0.959565666702;
    msg.z = 0.390574413541;
    msg.z_units = 92U;
    msg.cog = 0.0675444934667;
    msg.sog = 0.822193967309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.464970873895);
    msg.setSource(20748U);
    msg.setSourceEntity(110U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(207U);
    msg.name.assign("ILJAETPMHTYRYONEAYBDNUGJUTVMVRXELDHIANPPDRFUVKFMWHHEHQEQPHYYQAKGJSGZTCLDOZGGDFEIQSSURZFOQMOOVECRIYHYQXCJKQYJMKNBMUWRBVXBJHJSWWRSZCLZSDMIDILTACMXLZBKZBPFVTWCFWUBSNVZB");
    msg.value.assign("MYYGZADEVSURMYKDWKJHBMQMESUBDUCTXXNIVWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.00490539007351);
    msg.setSource(2157U);
    msg.setSourceEntity(75U);
    msg.setDestination(13980U);
    msg.setDestinationEntity(232U);
    msg.name.assign("AADSWBFNYVOQHIYHRORQRIKINOHXZJBQLINWHRLLAWQYLWOUBWINKAS");
    msg.value.assign("SJTDLQDFWJGPGVGAHBZKHGOAYBFUOSEGCOYFIBMCMHLNVSIDEBTOKZRQDOENYAMWXSYIUWJZREGCAVVQIIFKQVENTFRRWFKYBHQMANMPBNUNWHIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.422104086602);
    msg.setSource(25947U);
    msg.setSourceEntity(98U);
    msg.setDestination(56203U);
    msg.setDestinationEntity(184U);
    msg.name.assign("BZTEIAPPRUNJCGOBIYBESQUADGRPVTBMRKLQJWYKVOAYCHLEHVNUTEMITOUONVUTKZGLMWUFEAEUGDCCHAYKAXRTSHKFCNKOJJDOYSZQFBJQWSCCFWXFNVE");
    msg.value.assign("QOBRDMSFKEAMHCOHHWXDRQLLGJHCPYCXUSVTYEVKSZOETMWIKVAXIPMDNFTRIXKQGHLXWEVYMLCIRRNHZGZLFVJBIXDXUJKHFDPHZGPUFPPVVDUTFKPVQIWBDVMRKACTQLSUBHBUFDZUMESIJMDYXZOKOCLGZTZNCFAUSBYNVTSFTIRTGZCOSBMNEWFYLAQYEOGRQNANAUGIEONOJCZBEUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.173030402347);
    msg.setSource(54058U);
    msg.setSourceEntity(250U);
    msg.setDestination(27480U);
    msg.setDestinationEntity(219U);
    msg.name.assign("DIWSNAIQBEZNBYRAFKJSGIOAZTLIZVXDYBKXXERFMFIRWPGOJYTIFPRMZHBDIEVPUPJJFNXWHYDNNSTUVXMLUXVCRRDZSEJDQPZWO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KWYXHYBWWYNXVXJJECXAASLRUOPHAXBLRZIJCKFQQLQGTIRRVIVREJWEQVVOMSINPSOLPDDGUCPGJJUDBBOJGZJURNCNSBOWKRMAVUWZCNFBQMLHKVEHIZRFEFJCFQARFDGONOUTSTACDGNNRDKUTJTBKEUYXSMTZYFYKOMAMIDMGKACMHEPZYSLLVUGPCAPBPGUOQVTFXIZOEZDQWXEBLISWYFWGVYWPBZ");
    tmp_msg_0.value.assign("QYXDQUDGUVBNYHZSAXGYFSOLIBOSUNHATNFQXWVZHAJUPMAAEWZTRIWWBMDTBMPXQIUODGGVAJGKEBGWBTAUUTCQHYFLCSXLCFVORCTKSESXQMSJNPDJMNKRFCSLJLWSNAZNHZDOBOBFIKJDQKIE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.19657450637);
    msg.setSource(1073U);
    msg.setSourceEntity(200U);
    msg.setDestination(43590U);
    msg.setDestinationEntity(198U);
    msg.name.assign("OOXONXQZEQNHLRAUXVVXBHEHACIPVQMNLOBTPAGRXLSVUMOZRXJBSSGKMQLLNCOBRHMIFFZBGBFSLPEBVDJWPVVHSKLYUCBRKWFWBZUXETHVAHVXKWDZWTBWKIDAPZTEYLEJQNUMKCSMYFRWSUYZTYAICWNNDCI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CCSJIWKBONRUJYSCFJQQRRVIPBGSUKEXEJZQJWBLVZGMBWOGOMTGXYHNOPWXMLWNIFUABYEEALKKSMCXBHUHZPDDXOJIALRMAZKPFYTHVVTYZIVQMAGQXVETLEDUKYISHTXQZFWJDNZJUSOGVYMRSDPBGDDQMPFYWKLCZXWXNONYE");
    tmp_msg_0.value.assign("BWYEKRNRUHHGBTSHIZQONJNOXZBHHHEVMVYEKGLATOEMMIQUFTSSLSLJIGBYGKALDVSEPYPPEGBJBRNSTQAQSTIWN");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.905087867678);
    msg.setSource(9599U);
    msg.setSourceEntity(20U);
    msg.setDestination(61137U);
    msg.setDestinationEntity(125U);
    msg.name.assign("MJLOHDOLFEQNALGXKAQRVPHNJLEZLTDB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LDDXSIJLWBMXTQDWABHRCNWNAHFPHXEUNRADBSGMEQOCNCZLCOJNEAQSDROQSZIIAEDFFBYTVKRCXPFYIOVKOHCKSZPPLTEUDREPRTIVMDHWMOBUPZUVOUTMFTQZWWTMIOJUTCRKYHDUGWVECGBQECNIBXXZVPJZAGJIQKNGABJEGNKVSPJUIKXAWVLOXGPYWHHSLLUSMRJRYSLXMTBZYYIFSRJVFABNCKYWXLEGYAGPQOLQTFZGHZUDYKM");
    tmp_msg_0.value.assign("HBDCGGGKWXMOACAWPUZJAYLAPEFVNJUEOPSATSNQGRMCPEDXTBHHMNHEIZNFJLJYEQKWWCPXACESLWXFKMDZVWTOJFI");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.827964477104);
    msg.setSource(61371U);
    msg.setSourceEntity(169U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(246U);
    msg.name.assign("KZRHQFYEBOCDECGJACEFVJIHNHWVCZBISPHUIPJQSYAOPTAWQBORZEPKMOYXTUTBQMSYANDWFTFMHCZDTXATPIXSLJQDLYSCNAGXPMKRMPVIVEOEPYUWFYZUZSRIJRDOJYHXKGLQGODHXVRIOAS");
    msg.visibility.assign("PPJWNVHUKXIQYFPZDVGNDDKPCWAIDMMXCURJIQAVPTTRTWQTVOBGTVEKZSHFPGXHYYVMYWHNIWRSXPUKFLRMNXOEKFQCCBSIBDEGLUBUGNFHFUISRMAELAUAEOFVHSYL");
    msg.scope.assign("RMYWHXUBXJTLSEGAKPVPMXLPLZPNFOCBDITVGINJAXFQANQOZIWETKRGRCZOCPUIDGMZKMZDPCVQBAQIHZLVGDSSUFLSHIEXUQNKRUCJWFJCTRUHOJVMOSKOEUCWPUVOAMAMVRVBPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.266358398967);
    msg.setSource(29798U);
    msg.setSourceEntity(63U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TOAJAMBTNGOBCKQFWNWNZEHXQUZGJMIQBUBGAIDXPDJZWQSRPJSMKWCIYEQCTFITUNBBULDEFLHKTYSHF");
    msg.visibility.assign("BYMKUBTKJIWPUGHCEIGZZZNKBXKEGKYSYPLSBVQVAGMTYNIRVUMTRFNGDOSSECCCQOOKEQVOTXPHUSAMVPPHVWGGDBIS");
    msg.scope.assign("NPTVXEZHVSAISAKTQGSQIMPBYZJPQOSWVTEUAUBFFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.435649982517);
    msg.setSource(30172U);
    msg.setSourceEntity(192U);
    msg.setDestination(39977U);
    msg.setDestinationEntity(30U);
    msg.name.assign("BJINFQZRLBEWFANPPJBONJHYYCWPKQLVYINATDBXOVAKUGCHKOAUMWVIKOPRVBUVMDJYDZNARWISGJPFCTINHVYYGYDZCAPLJYIDQFXXFSEUWRDEXMGAFJERT");
    msg.visibility.assign("RJUPCTESMLRVBPNHEYNRHXZOHZLKQSRUDIWBJFKMOIYWCGLVKZRZJPBTBEKCFXAWDSFTTCAFKOIRLGUGLVIISDPJRGYKNTXFOEQBQEBJAFNVN");
    msg.scope.assign("VEAKAFTZHREINHEXXJEOVSQMKDMTDSHKTOILYFEPPZDUFEPTXSGJABDRMQAGWYFHYIUNDHUQVZCARJUTJOOFCVSFKKSQXOGAIVNCMQLXEAHQLXBZVPPFOJZGKAGRSLHHXWUOIVNOPMMSOYMMAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.099378035719);
    msg.setSource(44688U);
    msg.setSourceEntity(74U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(122U);
    msg.name.assign("USFLQQLZBAKZPYUKKWASQLLABEMOAHOLOXPUCCIXGEGWEDATRSUHRASFNYENWYDWYMEZKAVPPLQFNZKRQCITSFTGGNHJL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYHRVVRUBTSJCACEXSTZCNPNQVCXHAFQUDNSACVVOLJQDWYTRVUBTJCDEKTDPVHYJNBGGQLALFFDOEXWIBNUVCGZGUKFEWISYSFYNCAXVNKPKYGKWWMEIPIRSLIJICLDBVLOBAEHKUHHXQLAHIAZSEAQGEMTZCRPMOUPDNHTRZSUSRWOQRGIHMTYQTZJMMZQWFOQKWNXZPJLYJGBMBFAGFGRDHKRIOXEZNPMPSDMJFLMYKXTBIOYWKEXUW");
    tmp_msg_0.value.assign("CYMKUDYRAQQOAFCGBQRLVWXWTXUCFUTVAUSPYKGSWTFPUEPNAQLHMQHHDEFHOPVJPRNTWWDIATAQVNRXSXJPHGJUXDOELYFOOMGUETVEJNDZKYVFNAJCEDTNIRKIMJTLMKWIGTMBOBEHDXV");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.858244676702);
    msg.setSource(6467U);
    msg.setSourceEntity(78U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(11U);
    msg.name.assign("UHMXBZXLEZRFTRFBYSEHZQGIPAKOTFVUJGCHDLGIRJMSWTFELWQPZUCUXXVBGVMVZSOCQKBHIMCDQBTPDZZRDVIQVXBBRTCUFKHKFIYWIKHARRBMEKCMNNCQSNLGLOKYDDABECMENYMKSKYNDQLALXYYIEOJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HUNJBUPMUJOBHLQPPSNWANUMBCEJAPKLJIMJQOQYMJCXWXHWVGDYMROLUGTSUSWDQTRLZAY");
    tmp_msg_0.value.assign("HMGWLPNZZXSFOFBOTZIZRKRQXYSKXHBPFQMANDCXPMYYYHKADZSOKZKQEUYPZGKVMAUBOLMYEVCIHWGTQHHSCJAOFXVEAMJILIYRBTIWCMVFGONCYLBKIWKUGNCSTFJTJDDBQUBNXTDVCLCJPRAAQLXUBRWCMUTHNKDVTHJWEOHNGJYUGGFFJWDNGIKENSPTQAHEIOUSSPMQERPQNFLTDGLWYEOPIXRDRCZBVLXVRULVMPWB");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.493330860551);
    msg.setSource(50032U);
    msg.setSourceEntity(47U);
    msg.setDestination(56374U);
    msg.setDestinationEntity(133U);
    msg.name.assign("DAZEUANHIQKEPCSDAZGGOMPUVGKCOXMKHXINKCFFOVUVOTEUTJRNFFJABJMKFGLGWLRARQCOQAIZVYWSJBFDONGYWWSKFROITEDKEHPIJKVTSMHZQAXLTHZZLGWCRDLYGUZPBCZUPAXTGLJWDCKJUCIWITMDWBBXVBXTSDYSHRBIYPNNUDORRNHLJFSKSHPSPLXUQDAQWCYHM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QFNOUQDRUQGTOYOPNLOJJEDWABDTQXKSGNNSMIHGKPKTUFXCYKIYPXZONRVREAYDGKIEYHNTRDYBCLMKLPYWWWDWWHWITSGEHWQIHMRQCIUDSBRHGPBLZXEJZTIPAURQGDTFXFCJWGJLEPLVOQSZIBQCJUJRFJAKUGCMFBGEXVMOLFHLHVDAZY");
    tmp_msg_0.value.assign("JCRENTMTZKHTJETJDWBSUYACSLGLOLDXQUAZHAMFQDTBFDBCSFLMBJFKQRPPGXFWTZTTUIDVPKPXGEDUUHHQOPZTYZCUGINAKXIVEGZFWCIFZEKHORJDXNMXNMGJTYGMJXNWVSKJHSVDHSSENMVLUCZRMKPYWKPBOCRXOICVJQNL");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.249071326828);
    msg.setSource(32501U);
    msg.setSourceEntity(200U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(142U);
    msg.name.assign("FTTRFMBECYMVAMGTDITKXNPTGZLMQRYODPTOIMNBGXNAWJKMRMSZABINSLGBVYWNKARNCLGWDFRIYSJFUHLJVKTXDCWCLGSNSXIKYQZWUEPQECWQFNISLBQUUMLOECWFVAEDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.404034126309);
    msg.setSource(36994U);
    msg.setSourceEntity(234U);
    msg.setDestination(28476U);
    msg.setDestinationEntity(242U);
    msg.name.assign("QHKYJSRJRNXDGHCYMPVBMEGPXOEDKNFGJEZMVBMYCORDWPFWMACAQJDOEWMAXGKTQLSQRPSSRGOOUXIZALIMXQHTFMYNLYPWJDUEBIBSCDVNXNUJUKFIIXGYDXPFBDWVKWZNDXKEBPTLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.260590482537);
    msg.setSource(63838U);
    msg.setSourceEntity(188U);
    msg.setDestination(37258U);
    msg.setDestinationEntity(111U);
    msg.name.assign("XMAGMWBSHMKQCOESTIQNSXMVGCTSAPJNSIFOKTMHKMANHINYZMXLEWHYHJOCPTZBOBQNZOJUKNEGARNQLUWKJIAIRTYZVUDREBUFOIHMDYVLUKXSDIRXWVLFJPNPQYITYZDWBCKQVARDGJIGCLSLZEGIVODHCFWWZQZPWZMGEJYQXEWGFFKEKODUCPCOERLFKXYBPJDTTWUTPPYCMBUHNRLXAVTSVLDJQDOFZHUFRPBQYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.796195759187);
    msg.setSource(3221U);
    msg.setSourceEntity(51U);
    msg.setDestination(53723U);
    msg.setDestinationEntity(134U);
    msg.timeout = 3303017695U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.344011382245);
    msg.setSource(24378U);
    msg.setSourceEntity(48U);
    msg.setDestination(68U);
    msg.setDestinationEntity(80U);
    msg.timeout = 4195896918U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.540243418489);
    msg.setSource(20477U);
    msg.setSourceEntity(216U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(118U);
    msg.timeout = 342187531U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.698531847722);
    msg.setSource(30916U);
    msg.setSourceEntity(216U);
    msg.setDestination(31345U);
    msg.setDestinationEntity(29U);
    msg.sessid = 4002415030U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.630539913917);
    msg.setSource(4770U);
    msg.setSourceEntity(69U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(217U);
    msg.sessid = 2406384671U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.110457213055);
    msg.setSource(19666U);
    msg.setSourceEntity(48U);
    msg.setDestination(59370U);
    msg.setDestinationEntity(228U);
    msg.sessid = 845967798U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.538198109872);
    msg.setSource(21926U);
    msg.setSourceEntity(204U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(158U);
    msg.sessid = 2955160540U;
    msg.messages.assign("AKHJMPLQZJVWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.489724273148);
    msg.setSource(44484U);
    msg.setSourceEntity(152U);
    msg.setDestination(43389U);
    msg.setDestinationEntity(189U);
    msg.sessid = 549779227U;
    msg.messages.assign("NDJBAUODVKCTVQEDNAFIOVZEWTUUWLRIDLXVJEQTENNSCCHRHMQYUNBKXGNSVVUJTMIYRYBPLSHEWVPHIRQTCIASRTNIZACMZFXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.213886687073);
    msg.setSource(44404U);
    msg.setSourceEntity(174U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(86U);
    msg.sessid = 3869394307U;
    msg.messages.assign("RYPINKPIUKZYJXSDBCSQTENWWOTTCKGYVOQZWACNBMGQIVJFCDUAXKYTIHNFOBMMUWIIQORBIPTFKYPYQDGFCSPHZOBBJLZGDMNPMMEGULENFQEVXZYSVUJREHGJCHXNDRYVJOLKFRBLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.330088985419);
    msg.setSource(61179U);
    msg.setSourceEntity(197U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(89U);
    msg.sessid = 300884723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.241359611793);
    msg.setSource(3261U);
    msg.setSourceEntity(100U);
    msg.setDestination(943U);
    msg.setDestinationEntity(20U);
    msg.sessid = 2410600628U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.554642648552);
    msg.setSource(63148U);
    msg.setSourceEntity(148U);
    msg.setDestination(64903U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1737703272U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.158962472445);
    msg.setSource(4522U);
    msg.setSourceEntity(85U);
    msg.setDestination(37239U);
    msg.setDestinationEntity(206U);
    msg.sessid = 311787100U;
    msg.status = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.97147845563);
    msg.setSource(51017U);
    msg.setSourceEntity(44U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(41U);
    msg.sessid = 1600559336U;
    msg.status = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.608119455513);
    msg.setSource(56962U);
    msg.setSourceEntity(18U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(234U);
    msg.sessid = 3772021196U;
    msg.status = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.552051363257);
    msg.setSource(14419U);
    msg.setSourceEntity(183U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(206U);
    msg.name.assign("HJIOWXDHAZAELOYZCXATJOPVAEWOTVMNNLVZCCGHYQHWFCAPLWTBDKXRQJEGQDIFRMPTMJGYUIZGBVICNFYJVMIXQUMSXODRHTEKCYYVTJRCPKAOGKIEXSBUSQRLNGBNFLUGPVFVRUUFYCAQIEOJWUNJHFFLQELTYBHBSKZRTEUQBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.0269428988535);
    msg.setSource(33823U);
    msg.setSourceEntity(160U);
    msg.setDestination(55566U);
    msg.setDestinationEntity(175U);
    msg.name.assign("RSYTRUGIPFDWPWQKGENGSCNVPZQAYFSBCRAGINILCMQFIUJLCXWPXMCCXANGOYUNHJBJDYMTADCERJNFWXMOCZUTIVHPJWATDGZXIHGTJVEVJME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.23319953432);
    msg.setSource(59396U);
    msg.setSourceEntity(233U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(37U);
    msg.name.assign("UIBTSXAXUVYHIRNFVXRCYIYGYNQGFUXOPHKDZTYOJLRQNVMTEYWOHXLHAIXBZRDPCCFNMWVOZBMBFPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.633985167101);
    msg.setSource(36337U);
    msg.setSourceEntity(190U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(230U);
    msg.name.assign("JADEZWLPNYPHAVOGXFDVOWGCFGKBCDKQUPMHSVYNQOXJRUMDCUBCCYWDAAHFQEMXYZFDZQZUTXZYLPKUTLTTKAPVPFSWRKAZEVRUWFOSURWJQBATLPEEMJYUWXISMOKERLNRGCMTVHSBPJSACLTPRMWQBFVHNKJJOPSLRZCZFKYYOIOEIIXTVXGQHSKBEXGIJAGBNSEBKNJFVUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.511324632123);
    msg.setSource(8856U);
    msg.setSourceEntity(81U);
    msg.setDestination(38629U);
    msg.setDestinationEntity(168U);
    msg.name.assign("WRWZEAFMYMOHIZISEBZDXOHNRGPCQLSYSUBHJLPQQBUIWVUPXAXUOUXORVHENUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0481285410633);
    msg.setSource(20780U);
    msg.setSourceEntity(181U);
    msg.setDestination(61163U);
    msg.setDestinationEntity(94U);
    msg.name.assign("PEZFFSBGFLTYHUPCTSYICEPQMNZKHJMMBLSZFFJDMSXASVQAKHTVOMRXURYINEWUFPXSDAFPDMSEUVSYKGHCBTDEGOKARBPRGWOZOCYZEJDLLZREGBVQXMRWYOFMUOXWBXGTGAIRJGIGKSJDNBBNQXLUWYNUPCQHZHWVTZENCWFDNJWPWFWNLXYJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.602823534845);
    msg.setSource(57111U);
    msg.setSourceEntity(185U);
    msg.setDestination(28001U);
    msg.setDestinationEntity(222U);
    msg.type = 144U;
    msg.error.assign("VPRWLCDKZMZHHXBCNMPBKXHKWAHBVMJTLLRARKUGOEFBQSGEQCOGLQMTEKUKOTTOQZBWHHMOXCNIXFPXFQKQSVXJFSUPYZJAGCWWUPCCNRVIUGJXLIMYFLZNYNVSEGNFIDJVFXHGPYBNTRNYREITXEIJCASCJXWZSRYHELQEUGJHTJQDDHMSBNAZKYDVPDWFWIVBPUVGQIWTUYPSNTIASFGRDMQBLMADTRPOOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.240032230785);
    msg.setSource(56304U);
    msg.setSourceEntity(195U);
    msg.setDestination(184U);
    msg.setDestinationEntity(106U);
    msg.type = 196U;
    msg.error.assign("WBWVIAIXOOMEWCCSRYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.548755513551);
    msg.setSource(28230U);
    msg.setSourceEntity(21U);
    msg.setDestination(38142U);
    msg.setDestinationEntity(147U);
    msg.type = 34U;
    msg.error.assign("GLBURJZSHAVLKTIDIPDPBFTEAXPRTZOUWSJSPGBVILQLYSEITOANENJLEXAWYNKQBIOXCVKAPYVBYQECNWYYWMHQNXCRFDGOTRVHATMMRJTWSSXGSVYSBEFSIMPOPHFPBYGZQLLKVQEWVREWZUHDHXIQMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.512338501239);
    msg.setSource(58313U);
    msg.setSourceEntity(2U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(169U);
    msg.seq = 46218U;
    msg.sys_dst.assign("QZFMAPFVFFGWDREJCBIRMJRQAKBLGMLMUFWRLBHYIUZDRPGYXDTQTOHXXJIPUVAFRMAWOYNETEPAYYWODEKKXWNNCVENTKSOZMNJOHZZUCYNHYFLHJTQLTSAKTHBVGUICRXJGMZBBHCSRILSBLVSEISFWMDSUDBDMAOIDZXPPUCVOQVINZPWUFYCOQGQHUNHQSKHXLPVOGQCFBEVJWWRTQDTYIOJLXJNZKXJS");
    msg.flags = 121U;
    const char tmp_msg_0[] = {113, 92, -21, -96, 117, -34, -90, -110, 9, -31, -39, 24, 61, -51, 18, -102, 6, -82, -64, 118, 28, -98, 126, 96, -57, 126, 85, 7, 39, 59, 91, 126, 83, 109, -59, 88, 73, -19, 50, 63, -73, 103, 100, 31, 39, 81, -1, 59, 38, 83, -111, -41, -2, -42, -114, -47, -118, 85, -89, 111, 122, 40, -83, -109, 108, -105, -30, -39, -36, 34, -19, 68, -31, 10, 70, 38, -94, -108, -22, -51, 61, -26, 25, -113, 16, 73, -111, 49, 32, 124, -70, 81, -96, 107, 107, 51, 36, 96, -73, -53, 9, -123, -72, 122, -82, 84, -78, -41, -107, -53, 22, -113, -121, 32, 29, 0, 94, 12, 69, 23, -15, 104, 108, 95, -72, -58, -1, 123, -58, 22, -8, 101, 72, 11, 70, -9, -51, 77, -20, 0, -83, 60, -62, 20, -85, 68, 119, 88, 108, 49, 43, 109, -66, -37, -80, -36, 80, -17, -63, 116, -122, -98, -77, -91, -127, -6, 103, -47, -116, -109, 52, -42, -56, -58, -74, -124, 68, 110, -65, 84, -36, -64, -39, 45, -3, 65, 24, 124, -106, -12, -120, -60, 118, 117, 1, -65, 90, -122, -16, 0, 6, 38, 88, 73, 23, 57, 66, 12, -31, 60, -64, 66, 115, 64, 105, 64, -93, -101, -21, 91, 120, -105, -55, 86, 10, -52, 108, -49, -57, 113, -44, -64, 121, -50, -77, -85, 53, -4, -17, -39, -12, 109, -85, -108, 111, 83, 63, -111, -71, 47, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.966500861948);
    msg.setSource(46114U);
    msg.setSourceEntity(24U);
    msg.setDestination(26706U);
    msg.setDestinationEntity(86U);
    msg.seq = 11684U;
    msg.sys_dst.assign("FRAFFDNGDGOUZRGZKMOCTHSERTYYQMWZXKNAUKOPVSMLDX");
    msg.flags = 57U;
    const char tmp_msg_0[] = {120, -114, -40, -44, 46, 110, -87, 16, -128, 38, 116, 51, 26, -105, -116, 21, 119, 52, -58, -83, 5, -127, -100, -85, -47, -43, 93, 25, -47, 19, -24, 86, -17, -126, 79, 32, -31, 67, -37, 111, 14, -44, -70, -74, -98, -20, 11, -6, 5, 59, 45, -33, 58, -47, 85, -104, -111, 108, 111, -37, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.466921738753);
    msg.setSource(56192U);
    msg.setSourceEntity(66U);
    msg.setDestination(4465U);
    msg.setDestinationEntity(219U);
    msg.seq = 47404U;
    msg.sys_dst.assign("SWPBWIXTZZYSNWJUGQNQNHQEDCSQHQSUTXUJTMNEGPJLCPNTRGYQ");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-50, -52, 82, -91, 22, 65, 88, -15, -27, 78, -37, -115, -82, 4, 17, -36, 7, -85, 2, 87, 91, -75, 1, -106, -52, -99, 24, 64, -53, 83, -14, 99, 117, -61, 122, -4, 79, 94, -16, 7, 79, 110, -81, -124, -44, 100, 18, 36, 20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.766994273443);
    msg.setSource(55780U);
    msg.setSourceEntity(98U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(193U);
    msg.sys_src.assign("KMFFFUWHQQXINUCNEAIWIYJZZLUPVRBAJFLFBTNEIAJVAKLFDYXJSJGTUPSMXMQSSNMNKGQBOMDMEZPCUWVKYJPXCYPSDHWTFPRXLFLGOCVVZJEENQDRHLXRXVTRYGYQXWAHQJCDYKKWPMCIKISQHZGZTAGOHAWVORSGCKBPUSCEUDZTYTRUYNLOUVORQTICPYHDZRJAZXMVBMEZIHGNSAJ");
    msg.sys_dst.assign("QAMOTLEIJYXHSBAIWXNSPFDPQFNGTDZQMRYLNXSTDCRFBIQHDCPGIVXYEGNVSJMYXFOEGYBUWQLLPAVTSINXWAJAHLKJUFHNUWOLWTSIGEIGOMR");
    msg.flags = 34U;
    const char tmp_msg_0[] = {106, -54, 34, 103, -128, -1, -33, 116, -43, 75, -38, 21, -110, -19, -6, 14, -86, -54, -94, -54, -91, 58, 5, -4, 49, -69, -87, -64, 97, 11, -59, -89, 116, 25, -128, 102, -6, -25, 66, -21, 21, -39, -119, -52, 106, 108, 91, -119, 74, 27, 51, 47, 7, -81, 60, -111, -95, -76, -77, 27, -16, -106, -2, -34, 49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.18716457831);
    msg.setSource(27953U);
    msg.setSourceEntity(240U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("BVHOQFTCDUKVSFALMGRLGXCYUFITKDQWSEZZXOMUHMAPPNLONBRMBDOPTERQXDWEESYMQIEVAZKQKBXXWWJMAVHILDKVJZGAHRZJYPWWBCMCONOEIBBJUYZKD");
    msg.sys_dst.assign("LSBQKZVWMCYZIMSJROUDVGJKOQRUWYHKEPXSCYCNDXFNEEINXHWKRFCEJWGUFRHALMNBVTPSYJLDMMHETBWCIQORPALQWAADCPUWA");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-17, 26, -53, -106, -54, 112, 64, 28, 29, -59, -8, -71, -69, -88, -71, 64, 115, -116, -31, 80, 40, 85, 114, -70, 4, 99, 83, 33, 93, 104, -10, -48, -118, 81, 112, -41, -59, 115, 91, 68, -26, 10, -26, -77, 109, -71, -35, 103, -110, -4, -34, 94, -67, 29, 40, 99, 79, -37, 65, 86, 125, -88, -14, 94, -106, -128, 52, -52, 107, -19, 95, 30, 126, -42, 102, -48, -27, 16, -120, 54, 91, 99, 116, 4, 77, 118, -16, -82, 100, 96, -101, 35, 93, -42, 55, 7, -59, 123, 5, -34, -55, 86, 74, -106, -36, 48, 85, 113, -54, 29, 123, -22, 29, 122, 126, 84, -1, -37, 99, 0, 8, 46, 62, 121, -33, 55, 31, -121, 69, -22, 71, -52, 39, -107, -116, -63, -11, -102, -80, 83, 51, -35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.923647221697);
    msg.setSource(18368U);
    msg.setSourceEntity(120U);
    msg.setDestination(17047U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("XLSMUYJHVFGZNBYDKXLOIDSAVEYVHSERYFIFERKOIBVLIMDGRZSKLDTXTADFTZZRCTDFETSUHQCQOVEUBPHDSHEJZTWVHWQGXPJPUIJKCCNEOBYWCHGHPTFULMEBCWOWYKNGEFMXUUMNTBS");
    msg.sys_dst.assign("BJRFKQNKNUCLJMRHHGYPEWUFXRGICYVWVEKGNHMVCWASUYOTBJAFCFJZOMKQQZYLPNERXBPHBMYZQJYHDNFVINGYZTASNODOMXAWSUFTIVDUUXGILUIACPDWGEJBIABBESCXTLXLJSISVOQHOSX");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-120, 65, -113, -111, 126, 45, 78, -74, -42, 97, 38, -94, -58, 104, -32, 119, -58, 85, -70, 60, -2, -20, -51, 98, -76, 44, 105, -88, 67, -33, 116, -101, 24, 74, -51, -56, -7, 0, 94, 12, -79, 23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.849727942659);
    msg.setSource(32443U);
    msg.setSourceEntity(118U);
    msg.setDestination(32205U);
    msg.setDestinationEntity(91U);
    msg.seq = 28005U;
    msg.value = 239U;
    msg.error.assign("TXREGLTAMXWRHIGNRXMNPRYBRWVJGRJGHAMPNISLJPBDCFVJMOZKWPHAOUUYNPUQCRNBZKJFIGWGSEWMKXSTHZFAISYADZNXJEBDKHBNBBCITSGLLUURCLYOVALXAQVIOAOJYDHLJZXGKFBYTBWFXMTGLVSYPAZAMDEVJVBQTCTCDQFKVUHSFZEPELOHVRCOEWKOEXFJQSHYDVXISZYIHQOPSNWMUEDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.557627408369);
    msg.setSource(1605U);
    msg.setSourceEntity(115U);
    msg.setDestination(57188U);
    msg.setDestinationEntity(141U);
    msg.seq = 63315U;
    msg.value = 150U;
    msg.error.assign("VANLMRCFHXOOXRSVJZPDSZYDQAXLINVMNACHMHNQWVSFCZJQHRMGLPHKFDZOLIFVSQWNMTRIDEWHEYGSYBNCFQGTKQCCBSYHORHUHVAQCQLYFTBMIWPPBUGVDXVMIQXTWUARRLFKZPDUFITKWSDOUERKMINZXJKFOXXLYBPDTZUJGSAYZWUSJVOJXOEWTNBHTYAEUEGIMAIPLGARPVPELAGPKNWEFOCKTCJITUSKDXJGCYGDJWBUEZKBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.0769971280007);
    msg.setSource(21517U);
    msg.setSourceEntity(123U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(219U);
    msg.seq = 57882U;
    msg.value = 43U;
    msg.error.assign("YQIHLYFTIFWVLBFXSYSGKBGRPJJDEQRTONNOAQZQNBZMBGHULHBTVCFRBGLXDSKTEPCGRFPIKXESMPEABUFIWJUBRVWLZXOGYMDUAEUZCQDPXKTCIYYNJPANCZQMRHRZOCFEZVLYFVAPWWHMCELPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.448741444046);
    msg.setSource(14463U);
    msg.setSourceEntity(129U);
    msg.setDestination(6600U);
    msg.setDestinationEntity(65U);
    msg.seq = 56417U;
    msg.sys.assign("FRVOHJMTVDGYGGVZRCLAQIBOLKFLUCVBWEUBWJSZSPVZPPBXRWFUTDYDKOEVIRYMJUKWRGAMDHRALQUJHCHXDHNOIFPCVKWTJSYZBZGYDBYPWESDMYDANIHKDFOQFITDUTEWBMXXWKWEJREEYTVQUQLAOPWEXCGNGSQCIYABAJMUNSSLVOTXFNLKZXNZGVJXEZAROLGUQABHLCCCNN");
    msg.value = 0.277032919109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.758509913479);
    msg.setSource(8097U);
    msg.setSourceEntity(162U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(246U);
    msg.seq = 15559U;
    msg.sys.assign("QVVIGAZQOJIZMTDWVHJFKDGSXFZASXFNIFIMGIVJAPWMJZLBCGOHEEALOHDCMBKXVYNNCXFUN");
    msg.value = 0.779156438551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.0259792181603);
    msg.setSource(32518U);
    msg.setSourceEntity(108U);
    msg.setDestination(50226U);
    msg.setDestinationEntity(203U);
    msg.seq = 11650U;
    msg.sys.assign("LFDAIFYKHSSYQGQKVDUSDNZDTHCEQEXOLLJRVKIJPCOBUFXPBIVNVUYFJHQVTMDLIRTTECGOSBGUKNUMYNJHTAVAEOUJLWBMQGSSHLLDTVSELHBQNZYZYOBVWJPEGCWNRHCHNKZ");
    msg.value = 0.811687644714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.939641624155);
    msg.setSource(33343U);
    msg.setSourceEntity(161U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(220U);
    msg.action = 106U;
    msg.longain = 0.185964420986;
    msg.latgain = 0.114712998896;
    msg.bondthick = 3223251963U;
    msg.leadgain = 0.0978828291404;
    msg.deconflgain = 0.547508579791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.307436454013);
    msg.setSource(52009U);
    msg.setSourceEntity(233U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(237U);
    msg.action = 92U;
    msg.longain = 0.657669180322;
    msg.latgain = 0.79769100918;
    msg.bondthick = 115163673U;
    msg.leadgain = 0.0569256467317;
    msg.deconflgain = 0.749827206072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.245610930996);
    msg.setSource(36629U);
    msg.setSourceEntity(223U);
    msg.setDestination(58743U);
    msg.setDestinationEntity(218U);
    msg.action = 172U;
    msg.longain = 0.913154788387;
    msg.latgain = 0.57133861142;
    msg.bondthick = 572372950U;
    msg.leadgain = 0.97232757028;
    msg.deconflgain = 0.190198421338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.722096466332);
    msg.setSource(2779U);
    msg.setSourceEntity(54U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(227U);
    msg.err_mean = 0.574410440658;
    msg.dist_min_abs = 0.962527077807;
    msg.dist_min_mean = 0.137926176003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.988169405514);
    msg.setSource(5979U);
    msg.setSourceEntity(68U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(126U);
    msg.err_mean = 0.743119074742;
    msg.dist_min_abs = 0.976278373351;
    msg.dist_min_mean = 0.0237754655794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.410250348747);
    msg.setSource(38750U);
    msg.setSourceEntity(48U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(15U);
    msg.err_mean = 0.0751530627094;
    msg.dist_min_abs = 0.620931502731;
    msg.dist_min_mean = 0.751006657958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.464375051345);
    msg.setSource(61151U);
    msg.setSourceEntity(85U);
    msg.setDestination(54203U);
    msg.setDestinationEntity(181U);
    msg.action = 71U;
    msg.lon_gain = 0.194447894583;
    msg.lat_gain = 0.0192625560815;
    msg.bond_thick = 0.717635859541;
    msg.lead_gain = 0.769473315202;
    msg.deconfl_gain = 0.175564878776;
    msg.accel_switch_gain = 0.446865722885;
    msg.safe_dist = 0.936950248124;
    msg.deconflict_offset = 0.113165507169;
    msg.accel_safe_margin = 0.283402335779;
    msg.accel_lim_x = 0.616585157997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.436116969221);
    msg.setSource(57302U);
    msg.setSourceEntity(139U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(59U);
    msg.action = 153U;
    msg.lon_gain = 0.506701139911;
    msg.lat_gain = 0.251410925574;
    msg.bond_thick = 0.271753164021;
    msg.lead_gain = 0.478940274574;
    msg.deconfl_gain = 0.774540723938;
    msg.accel_switch_gain = 0.402251328848;
    msg.safe_dist = 0.00334571139768;
    msg.deconflict_offset = 0.432919402518;
    msg.accel_safe_margin = 0.0393261624948;
    msg.accel_lim_x = 0.17442429308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.56430714378);
    msg.setSource(49330U);
    msg.setSourceEntity(61U);
    msg.setDestination(18603U);
    msg.setDestinationEntity(5U);
    msg.action = 17U;
    msg.lon_gain = 0.361149401604;
    msg.lat_gain = 0.333820941882;
    msg.bond_thick = 0.67709030779;
    msg.lead_gain = 0.394926313861;
    msg.deconfl_gain = 0.437711975637;
    msg.accel_switch_gain = 0.291951014955;
    msg.safe_dist = 0.259198093325;
    msg.deconflict_offset = 0.201523461377;
    msg.accel_safe_margin = 0.486959205238;
    msg.accel_lim_x = 0.0801226328565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.469825708065);
    msg.setSource(16942U);
    msg.setSourceEntity(158U);
    msg.setDestination(12136U);
    msg.setDestinationEntity(238U);
    msg.type = 179U;
    msg.op = 142U;
    msg.err_mean = 0.50590939669;
    msg.dist_min_abs = 0.489987313867;
    msg.dist_min_mean = 0.878792633223;
    msg.roll_rate_mean = 0.941434364287;
    msg.time = 0.0574186513528;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 84U;
    tmp_msg_0.lon_gain = 0.472736492736;
    tmp_msg_0.lat_gain = 0.72229751691;
    tmp_msg_0.bond_thick = 0.424159742652;
    tmp_msg_0.lead_gain = 0.881627858534;
    tmp_msg_0.deconfl_gain = 0.354188305269;
    tmp_msg_0.accel_switch_gain = 0.198223227437;
    tmp_msg_0.safe_dist = 0.913954987374;
    tmp_msg_0.deconflict_offset = 0.266471950899;
    tmp_msg_0.accel_safe_margin = 0.746389562626;
    tmp_msg_0.accel_lim_x = 0.684579099424;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.652071697994);
    msg.setSource(12441U);
    msg.setSourceEntity(34U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(251U);
    msg.type = 105U;
    msg.op = 97U;
    msg.err_mean = 0.8481159328;
    msg.dist_min_abs = 0.513012408199;
    msg.dist_min_mean = 0.208389485773;
    msg.roll_rate_mean = 0.80034351143;
    msg.time = 0.454595252801;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 193U;
    tmp_msg_0.lon_gain = 0.593455118288;
    tmp_msg_0.lat_gain = 0.330654810279;
    tmp_msg_0.bond_thick = 0.254515096898;
    tmp_msg_0.lead_gain = 0.292981705887;
    tmp_msg_0.deconfl_gain = 0.70709201501;
    tmp_msg_0.accel_switch_gain = 0.657883283661;
    tmp_msg_0.safe_dist = 0.0663014417593;
    tmp_msg_0.deconflict_offset = 0.137032645905;
    tmp_msg_0.accel_safe_margin = 0.201820093477;
    tmp_msg_0.accel_lim_x = 0.046970684338;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.295130490378);
    msg.setSource(53745U);
    msg.setSourceEntity(209U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(98U);
    msg.type = 72U;
    msg.op = 169U;
    msg.err_mean = 0.260678307609;
    msg.dist_min_abs = 0.116024151134;
    msg.dist_min_mean = 0.882840958784;
    msg.roll_rate_mean = 0.383321975523;
    msg.time = 0.434477033741;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 222U;
    tmp_msg_0.lon_gain = 0.495016967826;
    tmp_msg_0.lat_gain = 0.0301611288827;
    tmp_msg_0.bond_thick = 0.459019224326;
    tmp_msg_0.lead_gain = 0.387383164467;
    tmp_msg_0.deconfl_gain = 0.373160848622;
    tmp_msg_0.accel_switch_gain = 0.172620428667;
    tmp_msg_0.safe_dist = 0.572781940069;
    tmp_msg_0.deconflict_offset = 0.163940758104;
    tmp_msg_0.accel_safe_margin = 0.569107906008;
    tmp_msg_0.accel_lim_x = 0.692655153801;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.412990336725);
    msg.setSource(27002U);
    msg.setSourceEntity(43U);
    msg.setDestination(50124U);
    msg.setDestinationEntity(176U);
    msg.uid = 145U;
    msg.frag_number = 178U;
    msg.num_frags = 124U;
    const char tmp_msg_0[] = {-89, -110, 120, -94, 102, 110, 12, -53, -6, -83, 22, -51, 125, -91, 91, -63, 9, -88, -55, -57, 125, -62, -3, -13, -48, 48, -11, 18, -124, -98, -72, -60, 20, 74, -67, -120, -111, -63, 114, -122, -4, 78, 81, -20, 79, 32, 54, -57, 21, -67, -75, -106, -117, 14, -31, -63, -125, 43, -13, -73, 1, -95, 75, -58, -92, -124, -112, 33, 22, -72, -128, -11, 25, -51, 38, -12, -128, -98, 11, 102, -98, -23, -107, 23, 122, -46, -79, 73, 57, 108, 68, 85, -125, 72, -118, -87, -71, 38, -34, 77, -93, 119, -104, -80, -120, -19, -5, 101, -92, -120, 91, 116, 79, -33, -18, -12, 43, -24, -100, -50, -104, -57, -92, -72, 55, -65, -38, -9, 118, 81, -97, 124, 102, 31, -126, 15, -122, -4, 100, 103, -91, -103, -82, 126, -52, 47, -116, -27, -70, -77, 109, -17, -18, 64, -83, -32, -73, 48, -31, 109, -98, 27, -6, 82, 6, 40, -31, 80, -56, -101, -66, -86, 100, -26, 80, 50, -28, -26};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.549590870596);
    msg.setSource(45317U);
    msg.setSourceEntity(146U);
    msg.setDestination(22076U);
    msg.setDestinationEntity(253U);
    msg.uid = 178U;
    msg.frag_number = 121U;
    msg.num_frags = 84U;
    const char tmp_msg_0[] = {91, 47, 20, -82, 51, -65, 77, -70, -107, 13, -58, 48, 84, -63, 64, -63, 50, -54, 105, 63, -59, 86, -65, 35, -91, -83, 9, 108, 94, 48, 68, -115, 42, -103, -116, 30, -37, -89, 52, 1, -34, -115, -48, 46, -28, 16, -91, -19, 107, -50, 107, 107, -104, -96, 3, 6, 21, -128, 93, -20, -61, -6, -124, -29, 30, 11, -46, -77, -96, -19, -57, -105, -32, -96, -21, 62, -38, 51, 56, -120, 75, -82, -50, 7, -70, -33, -24, 38, -101, -64, 113, -41, 56, -124, -49, 126, 122, -48, 13, -53, 27, -107, -24, -126, -10, 12, -32, 49, -18, 116, -83, 97, -55, 38, -59, 123, -55, -102, 110, -20, -79, 12, -116, -62, 47, -45, -32, 12, 50, -73, -120, -81, -21, 34, 96, 6, 59, -79, -50, -48, 59, -102, -67, 74, -35, 15, -117, 14, -122, 99, 43, 23, -18, 81, -12, 22, 72, -127, -115, 76, 32, 92, -49, -70, 110, 85, -92, -64, 84, -76, 103, -127, -6, 20, 74, -45, 15, -61, 37, -18, 86, -118, 0, -121, 73, 9, 77, -70, 82, 106, 49, 53, 9, -125, 98, -87, 7, -95, -109, -114, 53, -42, -12, -114, 23, -88, 50, 20, -22, -104, 111, -65, 60, -31, 39, -26, -66, -117, 73, -16, 83, 114, 41, -119, -127, -70, 57, 124, -34, 82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.298382697211);
    msg.setSource(7685U);
    msg.setSourceEntity(206U);
    msg.setDestination(33593U);
    msg.setDestinationEntity(66U);
    msg.uid = 30U;
    msg.frag_number = 16U;
    msg.num_frags = 133U;
    const char tmp_msg_0[] = {13, -25, -47, 11, 7, -122, -114, 98, 17, -102, -12, 11, 99, -115, 58, -30, 45, 126, -37, 14, -85, -69, 39, 40, -88, 23, -53, -128, -71, 118, 8, 109, 110, -62, 99, 20, -10, 61, 36, -82, -24, 84, -7, 77, 34, -124, 6, -3, 62, 2, 125, -2, -30, -124, -35, -5, -83, 105, 116, -106, 82, 66, -50, 58, -108, 75, 90, 75, -39, 46, 92, -121, 117, -20, 5, 79, 79, 29, -70, 117, -61, -74, 72, -39, 96, 43, 44, -37, -63, 92, -6, 7, 18, 61, -49, 108, 86, 33, -58, -10, 50, 56, 99, -42, -84, 16, -91, -35, -15, 71, 99, -98, -120, 39, -25, -112, 46, -41, -21, -39, 52, 104, 102, 33, -69, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.107442712731);
    msg.setSource(25088U);
    msg.setSourceEntity(52U);
    msg.setDestination(52057U);
    msg.setDestinationEntity(196U);
    msg.content_type.assign("FSVSJBSTCFIMEUIUOULWARTEXMFBLWYTCJWPZQFFDMZAWQUTFEVFMGUYNVOTKVXKSBNCELSIXLVXRZYLQZGNSYHWW");
    const char tmp_msg_0[] = {68, -86, 120, 17, -119, 69, -24, -50, 65, 5, -16, 15, -36, -124, -60, 11, 0, 77, 104, -50, -59, -29, 39, 94, -41, -81, -62, 109, -56, 2, -76, -60, -72, -122, -107, -56, -112, -9, 8, -97, 110, 71, -84, -89, 85, -85, -58, -29, -6, 78, -48, 99, 59, 22, 100, 65, -69, 92, 59, -76, 17, -29, 59, 24, -94, 16, -58, -60, -87, -90, -2, 53, 19, 85, 96, 105, -74, 96, -46, 91, 37, -48, -18, -32, -68, -52, 102, 56, -128, 50, -88, -90, -37, -34, 27, -109, 118, 126, -6, -106, -26, -28, -121, -2, 44, -100, 45, -34, 64, -8, 34, 24, 21, 106, -13, -97, 80, 59, 85, -101, -123, -43, -57, 41, -89, 123, 2, -41, -55, 122, -118, -117, 24, -122, -31};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.424491909429);
    msg.setSource(11322U);
    msg.setSourceEntity(122U);
    msg.setDestination(12591U);
    msg.setDestinationEntity(114U);
    msg.content_type.assign("ZMOZOPSHVUJIMRDBIPRTMZGBBWHFERKJSQENIOREGZWEDUWBYVH");
    const char tmp_msg_0[] = {75, -100, -56, -21, -127, 77, -113, -50, -86, -35, 77, -88, 70, 86, -104, -19, 121, 63, 69, -12, -64, -76, 35, -114, -5, 58, -6, -123, 13, 102, 72, 44, 97, 21, 56, -84, -73, 66, -98, 110, 7, 38, 89, 32, -77, 86, -43, 8, -12, -101, -28, 82, 49, -23, -128, 26, -23, 45, 63, -101, 58, 67, -40, -83, 47, 118, -114, -53, -92, -80, 7, 46, 29, -63, -2, 106, 71, -3, -57, 106, -115, -91, 91, 75, -70, -124, -66, -85, 23, 121, 5, -44, 48, -65, -20, 3, 53, 96, -80, -1, -59, -41, 112, 16, -41, -113, 64, -5, 29, -32, -64, 13, 91, 68, 1, 59, -127, 124, -18, -4, 25, -112, -78, -105, 84, -14, -29, -71, 124, -27, 5, -72, -107, -25, 75, -86, 41, 10, 119, -123, -42, -43, -9, 75, 16, 33, -80, -28, -8, 106, 62, 40, -103, -27, 93, 116, 25, 72, 74};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.772608446608);
    msg.setSource(26509U);
    msg.setSourceEntity(102U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(20U);
    msg.content_type.assign("DLROODEDXRMAQYBNUBHTFESVLRFNLSJPMQOFVQLISURLQCHGTUVDOVMTBZAAXHKITDMRGSTGIOWIWLJCYHXWAZZQKRUVPSEHZAWFURJGEXCUUWWTVFPPYNEIFAXXKPJCXGQWGHPYDEPOLTWYZYCGNGIHCBOWZJJERBKQCYUTLDDQYZDIMULKGFXCRCKFQJAPMSGXNBIQABANHSEBODLTVVCJUPKTSNRMEKKFYBHMNAIXJBZSVJNWMS");
    const char tmp_msg_0[] = {-16, 79, -33, 54, -97, 82, 61, 44, -86, -55, 70, -50, -74, 74, -55, -30, -46, 113, 56, 116, 66, 121, 102, -56, 64, -47, 95, -44, 118, 115, 96, 37, -113, -12, -80, -3, 109, 67, 115, -81, 11, 9, 122, 67, 33, 84, -49, -16, -2, 18, -63, 59, -105, -54, -89, -67, 93, 120, -116, 50, -8, -58, 16, 120, -117, 11, 63, 81, 35, -39, -112, 8, -106, -44, 109, -58, -91, 4, -20, -102, -90, 26, 64, 67, 26, 68};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.522274304034);
    msg.setSource(28464U);
    msg.setSourceEntity(184U);
    msg.setDestination(2174U);
    msg.setDestinationEntity(246U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.0777353730989);
    msg.setSource(26667U);
    msg.setSourceEntity(163U);
    msg.setDestination(36726U);
    msg.setDestinationEntity(119U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.577362338536);
    msg.setSource(6704U);
    msg.setSourceEntity(242U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.554558426867);
    msg.setSource(37950U);
    msg.setSourceEntity(180U);
    msg.setDestination(6551U);
    msg.setDestinationEntity(74U);
    msg.target = 52539U;
    msg.bearing = 0.405038084572;
    msg.elevation = 0.111014227369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.0779654873592);
    msg.setSource(9291U);
    msg.setSourceEntity(138U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(154U);
    msg.target = 47726U;
    msg.bearing = 0.366904217888;
    msg.elevation = 0.0875614967871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.504700675565);
    msg.setSource(7775U);
    msg.setSourceEntity(4U);
    msg.setDestination(37302U);
    msg.setDestinationEntity(2U);
    msg.target = 44837U;
    msg.bearing = 0.188405756047;
    msg.elevation = 0.0747256844603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.677970743846);
    msg.setSource(44624U);
    msg.setSourceEntity(115U);
    msg.setDestination(41537U);
    msg.setDestinationEntity(209U);
    msg.target = 2829U;
    msg.x = 0.156982730733;
    msg.y = 0.928462054815;
    msg.z = 0.226689488492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.421635728164);
    msg.setSource(11546U);
    msg.setSourceEntity(203U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(79U);
    msg.target = 13632U;
    msg.x = 0.507575215992;
    msg.y = 0.547141150891;
    msg.z = 0.157750958347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.879209168482);
    msg.setSource(20909U);
    msg.setSourceEntity(249U);
    msg.setDestination(19395U);
    msg.setDestinationEntity(112U);
    msg.target = 3806U;
    msg.x = 0.40291838116;
    msg.y = 0.238872580662;
    msg.z = 0.655126154713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.206928166471);
    msg.setSource(19609U);
    msg.setSourceEntity(204U);
    msg.setDestination(21250U);
    msg.setDestinationEntity(72U);
    msg.target = 57478U;
    msg.lat = 0.0912153461159;
    msg.lon = 0.657299441165;
    msg.z_units = 198U;
    msg.z = 0.395325089708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.444686605563);
    msg.setSource(45558U);
    msg.setSourceEntity(90U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(53U);
    msg.target = 4347U;
    msg.lat = 0.440182275944;
    msg.lon = 0.692920229586;
    msg.z_units = 186U;
    msg.z = 0.717294487261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.114009484926);
    msg.setSource(52253U);
    msg.setSourceEntity(53U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(250U);
    msg.target = 7730U;
    msg.lat = 0.0770226688543;
    msg.lon = 0.797448720177;
    msg.z_units = 171U;
    msg.z = 0.593181912742;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.448855978252);
    msg.setSource(40316U);
    msg.setSourceEntity(136U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(231U);
    msg.locale.assign("MZYYWRTFDEBWNCHSOGVROKHUQCSQKLIFTVFHVNIENPPTLZXWPZJCXKNERKVLASARZIGZDAIRHNZSBSFFMEVCQLMGYHHLTDPMEHAJWQUCCFXBAUBDUKXXEBPDRBWAETHPWQOKYLCDCXGIYWUEFJNXUBONMMUOPSAXALLJZTVTQZIMJVIGAZMDGDHDUYOGIBPGIOXPSVPYVYDOWSYWRTMQJOKQSAFYCBBRFGHKGTNLJUKISJETKRJ");
    const char tmp_msg_0[] = {79, -25, 76, -84, -38, 76, 43, 124, 73, 120, 98, -117, 94, 56, 58, -60, 11, 114, -125, -116, 16, 17, -38, -85, -27, 55, 1, -39, -126, 18, -68, -49, 19, -109, 45, 24, -93, -105, -10, 18, 2, -78, 55, -46, 6, -15, -44, -97, 125, -27, 31, -15, 59, 100, -88, 72, -25, -72, -117, 11, -30, 105, 52, -60, 8, -12, 0, 114, 51, -1, -59, 7, -44, 28, -49, 86, 73, 95, 36, 116, -80, 110, -80, -59, -111, 68, 66, 108, -60, -103, -74, -50, 62, -120, -91, -124, -104, 47, 41, -63, 87, -60, 111, -25, 32, -99, -123, -57, -5, -85, 39, 86, 91, 29, -116, 91, 49, 110, -113, 111, -83, 35, -20, 76, -62, 68, -38, 73, -42, -38, 84, 66, -121, -18, -83, 61, -47, -46, -56, 89, -114, -51, 99, -128, -2, -89, 26, -128, 92, 104, 4, 63, -126, 71, 75, -18, 59, 2, -73, -123, -73, -118, 82, -55, -55, 31, 57, 125, -77, 92, -126, 95, 65, -85, -86, -13, -127, -12, 122, 115, -42, -125, 73, 71, 16, -122, 112, 100, -41, -98, -116, -7, -76, 34, -57, -101, -20, 58, 84, -42, -44, 4, 76, -120, -57, 92, -112, -45, -35, 88, -4, -40, 53, -91, 124, -29, 105, 81, 122, 89, 56, 87, 31, -65, 109, -20, 113, 83};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.965139532514);
    msg.setSource(57038U);
    msg.setSourceEntity(103U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(195U);
    msg.locale.assign("TDLFLNUJORJTLMZCKRMBJWUDSCPNTUIKOEUWHFTDLQYGATBQGDGXZYROSXRMUPAHDLVFIVZHSQJAYFPIZAOMBREGWETABXKPVGEKOXAMCJUXAMEDCUCIZUKRKMYDBLXGJZZHVMWLGAIICSSNBBMXFJAOKYCOVBYJFJNKVPFQDEPLVPQQZESNBI");
    const char tmp_msg_0[] = {72, -124, 77, 45, 39, 82, -42, -84, -37, 35, 72, -63, 57, -79, 31, 26, -107, 124, -63, -99, -104, -41, 11, 95, -54, 84, -93, -42, 50, -90, 84, -56, -8, 84, 90, 6, -44, -84, 103, -120, -126, -22, 4, 113, 50, 54, 28, 116, -69, -113, 30, -105, -61, -33, 52, 7, 5, -28, -42, 116, 57, -1, 124, 87, -117, -49, -46, 58, 55, 59, -35, 37, -86, -118, -105, 40, -26, 118, 26, -6, 111, 98, 55, -69, 75, 33, 117, -96, -82};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.411568730396);
    msg.setSource(12150U);
    msg.setSourceEntity(199U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(15U);
    msg.locale.assign("WSPDAUOGLIMTKYRTFSXWOTQHNLUWHJYYXAGWNHREJKAYNYOGCSKGPNDFRSZTQIDPXEOGVUEIQXCCURAMLIAJBVDIOHNTRTANBXEVS");
    const char tmp_msg_0[] = {-87, -105, -39, -123, -13, 6, -77, 73, 116, 75};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.278505901464);
    msg.setSource(33229U);
    msg.setSourceEntity(179U);
    msg.setDestination(3811U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.829191426085);
    msg.setSource(60996U);
    msg.setSourceEntity(207U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.267412937062);
    msg.setSource(27398U);
    msg.setSourceEntity(252U);
    msg.setDestination(8621U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.4987353216);
    msg.setSource(15279U);
    msg.setSourceEntity(72U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(183U);
    msg.camid = 31U;
    msg.x = 24374U;
    msg.y = 14817U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.808021413152);
    msg.setSource(21985U);
    msg.setSourceEntity(92U);
    msg.setDestination(5245U);
    msg.setDestinationEntity(140U);
    msg.camid = 175U;
    msg.x = 15010U;
    msg.y = 43700U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.771011834901);
    msg.setSource(37461U);
    msg.setSourceEntity(199U);
    msg.setDestination(8262U);
    msg.setDestinationEntity(189U);
    msg.camid = 223U;
    msg.x = 57594U;
    msg.y = 52169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.274419809879);
    msg.setSource(37755U);
    msg.setSourceEntity(159U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(151U);
    msg.camid = 135U;
    msg.x = 22430U;
    msg.y = 8592U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.396724190356);
    msg.setSource(11076U);
    msg.setSourceEntity(137U);
    msg.setDestination(33454U);
    msg.setDestinationEntity(142U);
    msg.camid = 162U;
    msg.x = 44788U;
    msg.y = 57408U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.50300012256);
    msg.setSource(20005U);
    msg.setSourceEntity(3U);
    msg.setDestination(35276U);
    msg.setDestinationEntity(146U);
    msg.camid = 206U;
    msg.x = 36550U;
    msg.y = 4672U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.707294424275);
    msg.setSource(27775U);
    msg.setSourceEntity(128U);
    msg.setDestination(64074U);
    msg.setDestinationEntity(217U);
    msg.tracking = 188U;
    msg.lat = 0.161982064527;
    msg.lon = 0.527342373165;
    msg.x = 0.184715407218;
    msg.y = 0.564114376758;
    msg.z = 0.572156174496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.0441056778669);
    msg.setSource(47747U);
    msg.setSourceEntity(76U);
    msg.setDestination(4599U);
    msg.setDestinationEntity(129U);
    msg.tracking = 145U;
    msg.lat = 0.820167577389;
    msg.lon = 0.264511400511;
    msg.x = 0.553958699421;
    msg.y = 0.870277643557;
    msg.z = 0.668165206896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.780467154623);
    msg.setSource(10766U);
    msg.setSourceEntity(169U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(55U);
    msg.tracking = 22U;
    msg.lat = 0.542300760698;
    msg.lon = 0.866520582611;
    msg.x = 0.78327882915;
    msg.y = 0.623558897987;
    msg.z = 0.610320811904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.576008427406);
    msg.setSource(5570U);
    msg.setSourceEntity(41U);
    msg.setDestination(17711U);
    msg.setDestinationEntity(23U);
    msg.target.assign("YZDEUNCUOFYLWUZMNWQPZOXKMNNFULBMXCIFCEJJILC");
    msg.lbearing = 0.78641785809;
    msg.lelevation = 0.0706212763972;
    msg.bearing = 0.455189663288;
    msg.elevation = 0.865932958973;
    msg.phi = 0.325532718844;
    msg.theta = 0.01690514494;
    msg.psi = 0.436733929281;
    msg.accuracy = 0.699371311348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.501299622371);
    msg.setSource(39194U);
    msg.setSourceEntity(238U);
    msg.setDestination(49598U);
    msg.setDestinationEntity(250U);
    msg.target.assign("PNPKZUFYFCKOODBIGELNWHLGDSQULRQWFKIQBEAATQXXHKIYQSGJQIEUHVSIUVGFGVPEKSWTJBRKMNECQCDXORPNFFL");
    msg.lbearing = 0.211825171227;
    msg.lelevation = 0.217647535722;
    msg.bearing = 0.958196247012;
    msg.elevation = 0.187040245005;
    msg.phi = 0.49228662131;
    msg.theta = 0.21881802717;
    msg.psi = 0.578436381028;
    msg.accuracy = 0.053196708705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.257766218473);
    msg.setSource(31083U);
    msg.setSourceEntity(180U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(235U);
    msg.target.assign("NOGUTYKEASUZZQPFENREBFBEBAOXYWLDZGEJSRSIYAVKZFMWLUQCGQVQOOPHPLHMDBOJZYWHGQHDUBIRNPUPYYIDDCSQAOXWTMXCWHDIVSJM");
    msg.lbearing = 0.267860636536;
    msg.lelevation = 0.594660938239;
    msg.bearing = 0.199100614033;
    msg.elevation = 0.90922555191;
    msg.phi = 0.684689264437;
    msg.theta = 0.69453823938;
    msg.psi = 0.603622368951;
    msg.accuracy = 0.801548126852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.199872424749);
    msg.setSource(9195U);
    msg.setSourceEntity(117U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(99U);
    msg.target.assign("MRTHAGNESRALCJWBBGIQQFKROMHUPSDLQJNGCSBNMXXRQCZVCHTWHODXEPZAFYBKJULHCUWSBMDUTEYEASGMDWUYYISRUZKFNJHPJXBUGVNVROOMWLYZPIVZHDGMYYTPHLPVNFPCBYVKSDWHSFAE");
    msg.x = 0.577516998528;
    msg.y = 0.800637952333;
    msg.z = 0.920973580675;
    msg.n = 0.268106016738;
    msg.e = 0.893610391162;
    msg.d = 0.555184593489;
    msg.phi = 0.0843864918257;
    msg.theta = 0.699625541878;
    msg.psi = 0.380232603001;
    msg.accuracy = 0.643830787408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.607749999599);
    msg.setSource(44221U);
    msg.setSourceEntity(218U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(56U);
    msg.target.assign("VIAQRTDTWJACCFMEHUDVKYMGWTOQKVEHNIJYZEGSTXJVDPPIWRBYTZEFTEMFZGRRIVSVNRKIDVNZLNHN");
    msg.x = 0.342370280345;
    msg.y = 0.282139524398;
    msg.z = 0.0658426143185;
    msg.n = 0.0733836026101;
    msg.e = 0.233499222854;
    msg.d = 0.457928331215;
    msg.phi = 0.733317103661;
    msg.theta = 0.041624184613;
    msg.psi = 0.0232636407314;
    msg.accuracy = 0.0678303661186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.651152444162);
    msg.setSource(55996U);
    msg.setSourceEntity(23U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(34U);
    msg.target.assign("ORWNFLINHYHVXRHUMFKJIFICMBDNNHVUSXEDKZDTQVEWKBAEEPOQSW");
    msg.x = 0.745181999028;
    msg.y = 0.705632952084;
    msg.z = 0.319764010044;
    msg.n = 0.954292830898;
    msg.e = 0.470106116209;
    msg.d = 0.325763743556;
    msg.phi = 0.759479066244;
    msg.theta = 0.555622387502;
    msg.psi = 0.0197861911568;
    msg.accuracy = 0.130059487449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.738436522308);
    msg.setSource(48803U);
    msg.setSourceEntity(234U);
    msg.setDestination(34320U);
    msg.setDestinationEntity(96U);
    msg.target.assign("BXXZCUTWGGWEVYLTMDNLRGCCVJYWBZMMGFVYDFMQOQVPORESTBKEBJGBQUIHTMNLEYHPZUCAIBAHMPIZYNTPHPWRQOZORZVTUKIKUOKJFPUVWXTIMHAKBGNTIBFDYMNGHIWDLNMNQPASUFWFAOYVJYEENAJGLHGXKFSOQKLDXLTKIICRVBAS");
    msg.lat = 0.434366454149;
    msg.lon = 0.19526883195;
    msg.z_units = 190U;
    msg.z = 0.570367145683;
    msg.accuracy = 0.412402566299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.364015747879);
    msg.setSource(18088U);
    msg.setSourceEntity(215U);
    msg.setDestination(26021U);
    msg.setDestinationEntity(85U);
    msg.target.assign("PJUMZUGBDRQRNBKUFSWIQLJ");
    msg.lat = 0.34314073409;
    msg.lon = 0.404940606381;
    msg.z_units = 38U;
    msg.z = 0.592679843013;
    msg.accuracy = 0.730915354088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.219008850001);
    msg.setSource(31079U);
    msg.setSourceEntity(85U);
    msg.setDestination(38143U);
    msg.setDestinationEntity(145U);
    msg.target.assign("CPIZRBEQBAORYPMKQNUIVJONEDVAUXKDZCKSSZMUJLFYYTBLWXHJIDCJEIUHSIZVVFXMVUMBQOQJASPTLGRDWSTBOMCRICUEGPLCEUEPHWSHDTHNWASNPLXJPFGGUFKZZDKWTPSOGJOITQVYFNWYCUAQZIVUKOGWWHBASZEFHBGMFIM");
    msg.lat = 0.610637283129;
    msg.lon = 0.94536088079;
    msg.z_units = 132U;
    msg.z = 0.1271460449;
    msg.accuracy = 0.921096209776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.198385325167);
    msg.setSource(55713U);
    msg.setSourceEntity(196U);
    msg.setDestination(56924U);
    msg.setDestinationEntity(146U);
    msg.target.assign("JGSVIQEKDQMMQEDONRXYAPZECZIUWKDSERESYXBTNSCQDQBDKZIIYKBPAKVKLPPRQTLAHEGPUSLPRHVHYVGKJZVCJWZGUXTCTVUZOFHLAVFOIPMUNRYESFWLJDJOXFRMFNLCIABGYCKYWZQWOMWSPBAGRAFMTRMLXJWADUXFPYINXHSSMTFAUXVNBHOQLIMWENZHXNHNKZOHYTPTSJBHDQFGNCBUGDLUOCCJRWEITETXGCKZIYWGBOVDMO");
    msg.lat = 0.757448463412;
    msg.lon = 0.00613488045365;
    msg.z_units = 37U;
    msg.z = 0.0178890022293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.109496459555);
    msg.setSource(3946U);
    msg.setSourceEntity(60U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(66U);
    msg.target.assign("CPABAHPKCSNKOXKNGNDARUZWQRNDUCIHDHTFHUETBNGFGQGQBGEHLFXBTBEQMPHUVACIYWRMOREDLOXSJZLMACXSYVVKYXPSCUVAURDAXHHNPSACOBWIYHJDPTWLMYMSTLYIGKIKGBUVOBTKTEDTQIUMBIFJNWWQZYJFIDSCEZJESNEZZBRWLMGPKVORJK");
    msg.lat = 0.998019459352;
    msg.lon = 0.427752818406;
    msg.z_units = 103U;
    msg.z = 0.561939604777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.20133129348);
    msg.setSource(12358U);
    msg.setSourceEntity(130U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(31U);
    msg.target.assign("WVZVGWVWKOSILQJNCBQTVZUUTQFGYMSCMXINHOXJURNLOABOGHBBDLWCZFTVRNPRQDQUCLFTWPSSVOGJZADDEGBXNTFKERGBTZYEVTWALXSJDGWLFRMMUJIJGKXCUZOLEEHQMXPPTYUBAXHFWNCAKHCOLJYIIDDHCEAFHNYYGZRPPITDWHECNKPUPMIXXFHVMSFZSOLTMROQYSAJMIMVRWBSCJGPZDOEYRSDZQYKAAVU");
    msg.lat = 0.418600122583;
    msg.lon = 0.550772410486;
    msg.z_units = 18U;
    msg.z = 0.64203300452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
