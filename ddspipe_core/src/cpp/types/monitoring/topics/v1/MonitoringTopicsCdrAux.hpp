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
 * @file MonitoringTopicsCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_MONITORINGTOPICSCDRAUX_HPP_
#define _FAST_DDS_GENERATED_MONITORINGTOPICSCDRAUX_HPP_

#include "MonitoringTopics.h"

constexpr uint32_t DdsTopicData_max_cdr_typesize {280UL};
constexpr uint32_t DdsTopicData_max_key_cdr_typesize {0UL};

constexpr uint32_t MonitoringTopics_max_cdr_typesize {2853611UL};
constexpr uint32_t MonitoringTopics_max_key_cdr_typesize {0UL};

constexpr uint32_t DdsTopic_max_cdr_typesize {28539UL};
constexpr uint32_t DdsTopic_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const DdsTopicData& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const DdsTopic& data);





eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const MonitoringTopics& data);


} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_MONITORINGTOPICSCDRAUX_HPP_

