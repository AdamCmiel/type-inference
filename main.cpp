//
//  main.cpp
//  type inference
//
//  Created by Adam Cmiel on 4/21/15.
//  Copyright (c) 2015 adamcmiel. All rights reserved.
//

#include <iostream>
#include <string>
#include "str.h"

using namespace std;

auto mult = [](auto a, auto b) { return a * b; };

int main() {
    int a = 1;
    int b = 2;
    
    cout << mult(a, b) << endl;
    
    float c = 3.0;
    float d = 4.0;
    
    cout << mult(c, d) << endl;
    cout << mult(a, d) << endl;
    
    str foo = "foo";
    
    cout << mult(foo, a) << endl;
    cout << mult(foo, b) << endl;
    cout << mult(foo, c) << endl;
    cout << mult(foo, d) << endl;
    
    return 0;
}
