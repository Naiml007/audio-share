/*
Copyright 2022-2024 mkckr0 <https://github.com/mkckr0>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef PRE_ASIO_HPP
#define PRE_ASIO_HPP

// make asio happy
#ifdef _WINDOWS
    #include <sdkddkver.h>
    #if defined(_MSC_VER) && !defined(ASIO_HAS_CO_AWAIT)
        #define ASIO_HAS_CO_AWAIT
    #endif
#endif

#endif // !PRE_ASIO_HPP
