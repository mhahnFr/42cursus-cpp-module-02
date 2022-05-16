//
// Created by Manuel Hahn on 5/16/22.
//

#include "Point.h"

Point::Point(): x(), y() {}

Point::Point(const Point &other): x(other.getX()), y(other.getY()) {}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::~Point() {}

Point &Point::operator=(const Point &other) {
    (void) other;
    return *this;
}

const Fixed &Point::getX() const {
    return x;
}

const Fixed &Point::getY() const {
    return y;
}
