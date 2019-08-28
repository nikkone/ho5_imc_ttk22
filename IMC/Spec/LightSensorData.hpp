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

#ifndef IMC_LIGHTSENSORDATA_HPP_INCLUDED_
#define IMC_LIGHTSENSORDATA_HPP_INCLUDED_

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

namespace IMC
{
  //! LightSensorData.
  class LightSensorData: public Message
  {
  public:
    //! test.
    float sdf;

    static uint16_t
    getIdStatic(void)
    {
      return 1034;
    }

    static LightSensorData*
    cast(Message* msg__)
    {
      return (LightSensorData*)msg__;
    }

    LightSensorData(void)
    {
      m_header.mgid = LightSensorData::getIdStatic();
      clear();
    }

    LightSensorData*
    clone(void) const
    {
      return new LightSensorData(*this);
    }

    void
    clear(void)
    {
      sdf = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::LightSensorData& other__ = static_cast<const LightSensorData&>(msg__);
      if (sdf != other__.sdf) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sdf, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sdf, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sdf, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return LightSensorData::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "LightSensorData";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 4;
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sdf", sdf, nindent__);
    }
  };
}

#endif
