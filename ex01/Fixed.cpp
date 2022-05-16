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

Fixed::Fixed(const int i) {
    std::cout << "Int constructor called" << std::endl;
    bits = i << fraction;
}

Fixed::Fixed(const float f) {
    std::cout << "Float construct called" << std::endl;
    bits = (int) roundf(f * (1 << fraction));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
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

float Fixed::toFloat() const {
    return (float) bits / (1 << fraction);
}

int Fixed::toInt() const {
    return bits >> fraction;
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &instance) {
    ostream << instance.toFloat();
    return ostream;
}
