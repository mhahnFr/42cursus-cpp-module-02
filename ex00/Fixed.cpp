//
// Created by Manuel Hahn on 5/13/22.
//

#include <iostream>
#include "Fixed.h"

Fixed::Fixed(): bits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return bits;
}

void Fixed::setRawBits(const int bits) {
    Fixed::bits = bits;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->bits = other.getRawBits();
    return *this;
}
