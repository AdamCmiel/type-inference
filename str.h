//
//  str.h
//  type inference
//
//  Created by Adam Cmiel on 4/21/15.
//  Copyright (c) 2015 adamcmiel. All rights reserved.
//

#ifndef __type_inference__str__
#define __type_inference__str__

#include <iostream>
#include <string>

class str {
    std::string _str;
public:
    str& operator*(int);
    str(char*);
    friend std::ostream& operator<<(std::ostream&, const str&);
};

#endif /* defined(__type_inference__str__) */
