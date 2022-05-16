//
// Created by Manuel Hahn on 5/13/22.
//

#include <iostream>
#include "Fixed.h"

Fixed::Fixed(): bits(0) {}

Fixed::Fixed(const Fixed &other) {
    *this = other;
}

Fixed::Fixed(const int i) {
    bits = i << fraction;
}

Fixed::Fixed(const float f) {
    bits = (int) roundf(f * (1 << fraction));
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return bits;
}

void Fixed::setRawBits(const int bits) {
    Fixed::bits = bits;
}

Fixed &Fixed::operator=(const Fixed &other) {
    this->bits = other.getRawBits();
    return *this;
}

float Fixed::toFloat() const {
    return (float) bits / (1 << fraction);
}

int Fixed::toInt() const {
    return bits >> fraction;
}

bool Fixed::operator>(const Fixed &right) const {
    return toFloat() > right.toFloat();
}

bool Fixed::operator<(const Fixed &right) const {
    return toFloat() < right.toFloat();
}

bool Fixed::operator>=(const Fixed &right) const {
    return toFloat() >= right.toFloat();
}

bool Fixed::operator<=(const Fixed &right) const {
    return toFloat() <= right.toFloat();
}

bool Fixed::operator==(const Fixed &right) const {
    return toFloat() == right.toFloat();
}

bool Fixed::operator!=(const Fixed &right) const {
    return toFloat() != right.toFloat();
}

Fixed Fixed::operator+(const Fixed &right) const {
    return Fixed(toFloat() + right.toFloat());
}

Fixed Fixed::operator-(const Fixed &right) const {
    return Fixed(toFloat() - right.toFloat());
}

Fixed Fixed::operator*(const Fixed &right) const {
    return Fixed(toFloat() * right.toFloat());
}

Fixed Fixed::operator/(const Fixed &right) const {
    return Fixed(toFloat() / right.toFloat());
}

Fixed Fixed::operator++() {
    bits++;
    return *this;
}

Fixed Fixed::operator--() {
    bits--;
    return *this;
}

Fixed Fixed::operator++(int) {
    const Fixed tmp(*this);
    this->operator++();
    return tmp;
}

Fixed Fixed::operator--(int) {
    const Fixed tmp(*this);
    this->operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a <= b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return a >= b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return a <= b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return a >= b ? a : b;
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &instance) {
    ostream << instance.toFloat();
    return ostream;
}
