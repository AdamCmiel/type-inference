//
//  str.cpp
//  type inference
//
//  Created by Adam Cmiel on 4/21/15.
//  Copyright (c) 2015 adamcmiel. All rights reserved.
//

#include "str.h"

str& str::operator*(int times) {
    std::string buffer = _str;
    for (; times > 1; --times) {
        _str += buffer;
    }
    return *this;
}

str::str(char* cstring) {
    _str = cstring;
}

std::ostream& operator<<(std::ostream& lhs, const str& rhs) {
    return lhs << rhs._str;
}
