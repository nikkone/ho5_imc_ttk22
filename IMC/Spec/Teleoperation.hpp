//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 0adc43a7ddd00a255e2ea47f969c64aa                            *
//***************************************************************************

#ifndef IMC_TELEOPERATION_HPP_INCLUDED_
#define IMC_TELEOPERATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// IMC headers.
#include <IMC/Base/Config.hpp>
#include <IMC/Base/Message.hpp>
#include <IMC/Base/InlineMessage.hpp>
#include <IMC/Base/MessageList.hpp>
#include <IMC/Base/JSON.hpp>
#include <IMC/Base/Serialization.hpp>
#include <IMC/Spec/Enumerations.hpp>
#include <IMC/Spec/Bitfields.hpp>
#include <IMC/Spec/Maneuver.hpp>

namespace IMC
{
  //! Teleoperation Maneuver.
  class Teleoperation: public Maneuver
  {
  public:
    //! Custom settings for maneuver.
    std::string custom;

    static uint16_t
    getIdStatic(void)
    {
      return 452;
    }

    static Teleoperation*
    cast(Message* msg__)
    {
      return (Teleoperation*)msg__;
    }

    Teleoperation(void)
    {
      m_header.mgid = Teleoperation::getIdStatic();
      clear();
    }

    Teleoperation*
    clone(void) const
    {
      return new Teleoperation(*this);
    }

    void
    clear(void)
    {
      custom.clear();
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::Teleoperation& other__ = static_cast<const Teleoperation&>(msg__);
      if (custom != other__.custom) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(custom, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(custom, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return Teleoperation::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "Teleoperation";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 0;
    }

    size_t
    getVariableSerializationSize(void) const
    {
      return IMC::getSerializationSize(custom);
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "custom", custom, nindent__);
    }
  };
}

#endif
