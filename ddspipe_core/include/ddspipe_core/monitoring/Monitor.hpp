// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
//

#pragma once


#include <memory>
#include <mutex>

#include <cpp_utils/event/PeriodicEventHandler.hpp>

#include <ddspipe_core/monitoring/producers/IMonitorProducer.hpp>


// Monitoring API:

namespace eprosima {
namespace ddspipe {
namespace core {

/**
 * TODO
 */
class Monitor
{
public:

    // TODO
    void register_producer(
            IMonitorProducer* producer);

protected:

    // TODO
    std::vector<std::unique_ptr<utils::event::PeriodicEventHandler>> events_;
};

} // namespace core
} // namespace ddspipe
} // namespace eprosima
