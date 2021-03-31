/*
 * Copyright (C) 2015-2018 Muhammad Tayyab Akram
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SHEENBIDI__TESTER__MIRROR_LOOKUP_TESTER_H
#define _SHEENBIDI__TESTER__MIRROR_LOOKUP_TESTER_H

#include <Parser/BidiMirroring.h>

namespace SheenBidi {
namespace Tester {

class MirrorLookupTester {
public:
    MirrorLookupTester(const Parser::BidiMirroring &bidiMirroring);

    void test();

private:
    const Parser::BidiMirroring &m_BidiMirroring;
};

}
}

#endif
