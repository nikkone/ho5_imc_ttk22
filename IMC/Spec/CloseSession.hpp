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

#ifndef IMC_CLOSESESSION_HPP_INCLUDED_
#define IMC_CLOSESESSION_HPP_INCLUDED_

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
  //! Close Session.
  class CloseSession: public Message
  {
  public:
    //! Session Identifier.
    uint32_t sessid;

    static uint16_t
    getIdStatic(void)
    {
      return 807;
    }

    static CloseSession*
    cast(Message* msg__)
    {
      return (CloseSession*)msg__;
    }

    CloseSession(void)
    {
      m_header.mgid = CloseSession::getIdStatic();
      clear();
    }

    CloseSession*
    clone(void) const
    {
      return new CloseSession(*this);
    }

    void
    clear(void)
    {
      sessid = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::CloseSession& other__ = static_cast<const CloseSession&>(msg__);
      if (sessid != other__.sessid) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(sessid, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(sessid, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return CloseSession::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "CloseSession";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 4;
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "sessid", sessid, nindent__);
    }
  };
}

#endif
