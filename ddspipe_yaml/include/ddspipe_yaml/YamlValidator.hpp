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

#pragma once

#include <ddspipe_yaml/library/library_dll.h>
#include <ddspipe_yaml/Yaml.hpp>
#include <ddspipe_yaml/YamlReader.hpp>

namespace eprosima {
namespace ddspipe {
namespace yaml {

// TODO
class YamlValidator
{
public:

    //! TODO
    template <typename T>
    static bool validate(
            const Yaml& yml,
            const YamlReaderVersion& version = YamlReaderVersion::LATEST);

protected:

    //! TODO
    static bool validate_tags_(
            const Yaml& yml,
            const std::set<TagType>& tags);
};

} /* namespace yaml */
} /* namespace ddspipe */
} /* namespace eprosima */
