// Copyright 2024 Google LLC
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

#ifndef INTERNAL_PKG_SCANDEPS_CSDUTILS_PARSE_ENV_H_
#define INTERNAL_PKG_SCANDEPS_CSDUTILS_PARSE_ENV_H_

#include <set>
#include <string>

namespace csdutils {

std::set<std::string> ParsePluginsToIgnore(const char* envVal);
}  // namespace csdutils

#endif  // INTERNAL_PKG_SCANDEPS_CSDUTILS_PARSE_ENV_H_