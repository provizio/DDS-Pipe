// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file MonitoringTopics.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include <ddspipe_core/types/monitoring/topics/v1/MonitoringTopics.h>

#include <ddspipe_core/types/monitoring/topics/v1/MonitoringTopicsTypeObject.h>

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace helper {
namespace internal {

enum class Size
{
    UInt8,
    UInt16,
    UInt32,
    UInt64,
};

constexpr Size get_size(
        int s)
{
    return (s <= 8 ) ? Size::UInt8:
           (s <= 16) ? Size::UInt16:
           (s <= 32) ? Size::UInt32: Size::UInt64;
}

template<Size s>
struct FindTypeH;

template<>
struct FindTypeH<Size::UInt8>
{
    using type = std::uint8_t;
};

template<>
struct FindTypeH<Size::UInt16>
{
    using type = std::uint16_t;
};

template<>
struct FindTypeH<Size::UInt32>
{
    using type = std::uint32_t;
};

template<>
struct FindTypeH<Size::UInt64>
{
    using type = std::uint64_t;
};
} // namespace internal

template<int S>
struct FindType
{
    using type = typename internal::FindTypeH<internal::get_size(S)>::type;
};
} // namespace helper

#define DdsTopicData_max_cdr_typesize 280ULL;
#define MonitoringTopics_max_cdr_typesize 2853616ULL;
#define DdsTopic_max_cdr_typesize 28536ULL;




DdsTopicData::DdsTopicData()
{
    // /type_d() m_participant_id

    // unsigned long m_msgs_lost
    m_msgs_lost = 0;
    // unsigned long m_msgs_received
    m_msgs_received = 0;
    // double m_msg_rx_rate
    m_msg_rx_rate = 0.0;

    // Just to register all known types
    registerMonitoringTopicsTypes();
}

DdsTopicData::~DdsTopicData()
{
}

DdsTopicData::DdsTopicData(
        const DdsTopicData& x)
{
    m_participant_id = x.m_participant_id;


    m_msgs_lost = x.m_msgs_lost;


    m_msgs_received = x.m_msgs_received;


    m_msg_rx_rate = x.m_msg_rx_rate;

}

DdsTopicData::DdsTopicData(
        DdsTopicData&& x) noexcept
{
    m_participant_id = std::move(x.m_participant_id);


    m_msgs_lost = x.m_msgs_lost;


    m_msgs_received = x.m_msgs_received;


    m_msg_rx_rate = x.m_msg_rx_rate;

}

DdsTopicData& DdsTopicData::operator =(
        const DdsTopicData& x)
{
    m_participant_id = x.m_participant_id;


    m_msgs_lost = x.m_msgs_lost;


    m_msgs_received = x.m_msgs_received;


    m_msg_rx_rate = x.m_msg_rx_rate;

    return *this;
}

DdsTopicData& DdsTopicData::operator =(
        DdsTopicData&& x) noexcept
{
    m_participant_id = std::move(x.m_participant_id);


    m_msgs_lost = x.m_msgs_lost;


    m_msgs_received = x.m_msgs_received;


    m_msg_rx_rate = x.m_msg_rx_rate;

    return *this;
}

bool DdsTopicData::operator ==(
        const DdsTopicData& x) const
{
    return (m_participant_id == x.m_participant_id &&
           m_msgs_lost == x.m_msgs_lost &&
           m_msgs_received == x.m_msgs_received &&
           m_msg_rx_rate == x.m_msg_rx_rate);
}

bool DdsTopicData::operator !=(
        const DdsTopicData& x) const
{
    return !(*this == x);
}

size_t DdsTopicData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return DdsTopicData_max_cdr_typesize;
}

size_t DdsTopicData::getCdrSerializedSize(
        const DdsTopicData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.participant_id().size() + 1;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    return current_alignment - initial_alignment;
}

void DdsTopicData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_participant_id.c_str();

    scdr << m_msgs_lost;

    scdr << m_msgs_received;

    scdr << m_msg_rx_rate;

}

void DdsTopicData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_participant_id;



    dcdr >> m_msgs_lost;



    dcdr >> m_msgs_received;



    dcdr >> m_msg_rx_rate;


}

bool DdsTopicData::isKeyDefined()
{
    return false;
}

void DdsTopicData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function copies the value in member participant_id
 * @param _participant_id New value to be copied in member participant_id
 */
void DdsTopicData::participant_id(
        const std::string& _participant_id)
{
    m_participant_id = _participant_id;
}

/*!
 * @brief This function moves the value in member participant_id
 * @param _participant_id New value to be moved in member participant_id
 */
void DdsTopicData::participant_id(
        std::string&& _participant_id)
{
    m_participant_id = std::move(_participant_id);
}

/*!
 * @brief This function returns a constant reference to member participant_id
 * @return Constant reference to member participant_id
 */
const std::string& DdsTopicData::participant_id() const
{
    return m_participant_id;
}

/*!
 * @brief This function returns a reference to member participant_id
 * @return Reference to member participant_id
 */
std::string& DdsTopicData::participant_id()
{
    return m_participant_id;
}

/*!
 * @brief This function sets a value in member msgs_lost
 * @param _msgs_lost New value for member msgs_lost
 */
void DdsTopicData::msgs_lost(
        uint32_t _msgs_lost)
{
    m_msgs_lost = _msgs_lost;
}

/*!
 * @brief This function returns the value of member msgs_lost
 * @return Value of member msgs_lost
 */
uint32_t DdsTopicData::msgs_lost() const
{
    return m_msgs_lost;
}

/*!
 * @brief This function returns a reference to member msgs_lost
 * @return Reference to member msgs_lost
 */
uint32_t& DdsTopicData::msgs_lost()
{
    return m_msgs_lost;
}

/*!
 * @brief This function sets a value in member msgs_received
 * @param _msgs_received New value for member msgs_received
 */
void DdsTopicData::msgs_received(
        uint32_t _msgs_received)
{
    m_msgs_received = _msgs_received;
}

/*!
 * @brief This function returns the value of member msgs_received
 * @return Value of member msgs_received
 */
uint32_t DdsTopicData::msgs_received() const
{
    return m_msgs_received;
}

/*!
 * @brief This function returns a reference to member msgs_received
 * @return Reference to member msgs_received
 */
uint32_t& DdsTopicData::msgs_received()
{
    return m_msgs_received;
}

/*!
 * @brief This function sets a value in member msg_rx_rate
 * @param _msg_rx_rate New value for member msg_rx_rate
 */
void DdsTopicData::msg_rx_rate(
        double _msg_rx_rate)
{
    m_msg_rx_rate = _msg_rx_rate;
}

/*!
 * @brief This function returns the value of member msg_rx_rate
 * @return Value of member msg_rx_rate
 */
double DdsTopicData::msg_rx_rate() const
{
    return m_msg_rx_rate;
}

/*!
 * @brief This function returns a reference to member msg_rx_rate
 * @return Reference to member msg_rx_rate
 */
double& DdsTopicData::msg_rx_rate()
{
    return m_msg_rx_rate;
}

DdsTopic::DdsTopic()
{
    // /type_d() m_name

    // /type_d() m_type_name

    // boolean m_type_discovered
    m_type_discovered = false;
    // boolean m_type_mismatch
    m_type_mismatch = false;
    // boolean m_qos_mismatch
    m_qos_mismatch = false;
    // sequence<DdsTopicData> m_data


    // Just to register all known types
    registerMonitoringTopicsTypes();
}

DdsTopic::~DdsTopic()
{
}

DdsTopic::DdsTopic(
        const DdsTopic& x)
{
    m_name = x.m_name;


    m_type_name = x.m_type_name;


    m_type_discovered = x.m_type_discovered;


    m_type_mismatch = x.m_type_mismatch;


    m_qos_mismatch = x.m_qos_mismatch;


    m_data = x.m_data;

}

DdsTopic::DdsTopic(
        DdsTopic&& x) noexcept
{
    m_name = std::move(x.m_name);


    m_type_name = std::move(x.m_type_name);


    m_type_discovered = x.m_type_discovered;


    m_type_mismatch = x.m_type_mismatch;


    m_qos_mismatch = x.m_qos_mismatch;


    m_data = std::move(x.m_data);

}

DdsTopic& DdsTopic::operator =(
        const DdsTopic& x)
{
    m_name = x.m_name;


    m_type_name = x.m_type_name;


    m_type_discovered = x.m_type_discovered;


    m_type_mismatch = x.m_type_mismatch;


    m_qos_mismatch = x.m_qos_mismatch;


    m_data = x.m_data;

    return *this;
}

DdsTopic& DdsTopic::operator =(
        DdsTopic&& x) noexcept
{
    m_name = std::move(x.m_name);


    m_type_name = std::move(x.m_type_name);


    m_type_discovered = x.m_type_discovered;


    m_type_mismatch = x.m_type_mismatch;


    m_qos_mismatch = x.m_qos_mismatch;


    m_data = std::move(x.m_data);

    return *this;
}

bool DdsTopic::operator ==(
        const DdsTopic& x) const
{
    return (m_name == x.m_name &&
           m_type_name == x.m_type_name &&
           m_type_discovered == x.m_type_discovered &&
           m_type_mismatch == x.m_type_mismatch &&
           m_qos_mismatch == x.m_qos_mismatch &&
           m_data == x.m_data);
}

bool DdsTopic::operator !=(
        const DdsTopic& x) const
{
    return !(*this == x);
}

size_t DdsTopic::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return DdsTopic_max_cdr_typesize;
}

size_t DdsTopic::getCdrSerializedSize(
        const DdsTopic& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.type_name().size() + 1;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for (size_t a = 0; a < data.data().size(); ++a)
    {
        current_alignment += DdsTopicData::getCdrSerializedSize(data.data().at(a), current_alignment);
    }



    return current_alignment - initial_alignment;
}

void DdsTopic::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_name.c_str();

    scdr << m_type_name.c_str();

    scdr << m_type_discovered;

    scdr << m_type_mismatch;

    scdr << m_qos_mismatch;

    scdr << m_data;


}

void DdsTopic::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_name;



    dcdr >> m_type_name;



    dcdr >> m_type_discovered;



    dcdr >> m_type_mismatch;



    dcdr >> m_qos_mismatch;



    dcdr >> m_data;


}

bool DdsTopic::isKeyDefined()
{
    return false;
}

void DdsTopic::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void DdsTopic::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void DdsTopic::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& DdsTopic::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& DdsTopic::name()
{
    return m_name;
}

/*!
 * @brief This function copies the value in member type_name
 * @param _type_name New value to be copied in member type_name
 */
void DdsTopic::type_name(
        const std::string& _type_name)
{
    m_type_name = _type_name;
}

/*!
 * @brief This function moves the value in member type_name
 * @param _type_name New value to be moved in member type_name
 */
void DdsTopic::type_name(
        std::string&& _type_name)
{
    m_type_name = std::move(_type_name);
}

/*!
 * @brief This function returns a constant reference to member type_name
 * @return Constant reference to member type_name
 */
const std::string& DdsTopic::type_name() const
{
    return m_type_name;
}

/*!
 * @brief This function returns a reference to member type_name
 * @return Reference to member type_name
 */
std::string& DdsTopic::type_name()
{
    return m_type_name;
}

/*!
 * @brief This function sets a value in member type_discovered
 * @param _type_discovered New value for member type_discovered
 */
void DdsTopic::type_discovered(
        bool _type_discovered)
{
    m_type_discovered = _type_discovered;
}

/*!
 * @brief This function returns the value of member type_discovered
 * @return Value of member type_discovered
 */
bool DdsTopic::type_discovered() const
{
    return m_type_discovered;
}

/*!
 * @brief This function returns a reference to member type_discovered
 * @return Reference to member type_discovered
 */
bool& DdsTopic::type_discovered()
{
    return m_type_discovered;
}

/*!
 * @brief This function sets a value in member type_mismatch
 * @param _type_mismatch New value for member type_mismatch
 */
void DdsTopic::type_mismatch(
        bool _type_mismatch)
{
    m_type_mismatch = _type_mismatch;
}

/*!
 * @brief This function returns the value of member type_mismatch
 * @return Value of member type_mismatch
 */
bool DdsTopic::type_mismatch() const
{
    return m_type_mismatch;
}

/*!
 * @brief This function returns a reference to member type_mismatch
 * @return Reference to member type_mismatch
 */
bool& DdsTopic::type_mismatch()
{
    return m_type_mismatch;
}

/*!
 * @brief This function sets a value in member qos_mismatch
 * @param _qos_mismatch New value for member qos_mismatch
 */
void DdsTopic::qos_mismatch(
        bool _qos_mismatch)
{
    m_qos_mismatch = _qos_mismatch;
}

/*!
 * @brief This function returns the value of member qos_mismatch
 * @return Value of member qos_mismatch
 */
bool DdsTopic::qos_mismatch() const
{
    return m_qos_mismatch;
}

/*!
 * @brief This function returns a reference to member qos_mismatch
 * @return Reference to member qos_mismatch
 */
bool& DdsTopic::qos_mismatch()
{
    return m_qos_mismatch;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void DdsTopic::data(
        const std::vector<DdsTopicData>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void DdsTopic::data(
        std::vector<DdsTopicData>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<DdsTopicData>& DdsTopic::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<DdsTopicData>& DdsTopic::data()
{
    return m_data;
}

MonitoringTopics::MonitoringTopics()
{
    // sequence<DdsTopic> m_topics


    // Just to register all known types
    registerMonitoringTopicsTypes();
}

MonitoringTopics::~MonitoringTopics()
{
}

MonitoringTopics::MonitoringTopics(
        const MonitoringTopics& x)
{
    m_topics = x.m_topics;

}

MonitoringTopics::MonitoringTopics(
        MonitoringTopics&& x) noexcept
{
    m_topics = std::move(x.m_topics);

}

MonitoringTopics& MonitoringTopics::operator =(
        const MonitoringTopics& x)
{
    m_topics = x.m_topics;

    return *this;
}

MonitoringTopics& MonitoringTopics::operator =(
        MonitoringTopics&& x) noexcept
{
    m_topics = std::move(x.m_topics);

    return *this;
}

bool MonitoringTopics::operator ==(
        const MonitoringTopics& x) const
{
    return (m_topics == x.m_topics);
}

bool MonitoringTopics::operator !=(
        const MonitoringTopics& x) const
{
    return !(*this == x);
}

size_t MonitoringTopics::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return MonitoringTopics_max_cdr_typesize;
}

size_t MonitoringTopics::getCdrSerializedSize(
        const MonitoringTopics& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for (size_t a = 0; a < data.topics().size(); ++a)
    {
        current_alignment += DdsTopic::getCdrSerializedSize(data.topics().at(a), current_alignment);
    }



    return current_alignment - initial_alignment;
}

void MonitoringTopics::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_topics;


}

void MonitoringTopics::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_topics;


}

bool MonitoringTopics::isKeyDefined()
{
    return false;
}

void MonitoringTopics::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function copies the value in member topics
 * @param _topics New value to be copied in member topics
 */
void MonitoringTopics::topics(
        const std::vector<DdsTopic>& _topics)
{
    m_topics = _topics;
}

/*!
 * @brief This function moves the value in member topics
 * @param _topics New value to be moved in member topics
 */
void MonitoringTopics::topics(
        std::vector<DdsTopic>&& _topics)
{
    m_topics = std::move(_topics);
}

/*!
 * @brief This function returns a constant reference to member topics
 * @return Constant reference to member topics
 */
const std::vector<DdsTopic>& MonitoringTopics::topics() const
{
    return m_topics;
}

/*!
 * @brief This function returns a reference to member topics
 * @return Reference to member topics
 */
std::vector<DdsTopic>& MonitoringTopics::topics()
{
    return m_topics;
}
