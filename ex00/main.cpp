//
// Created by Manuel Hahn on 5/16/22.
//

#include <iostream>
#include "Fixed.h"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
