//
// Created by Manuel Hahn on 5/16/22.
//

#ifndef EX03_POINT_H
#define EX03_POINT_H

#include "Fixed.h"

class Point {
public:
    Point();
    Point(const Point &);
    Point(float x, float y);
    ~Point();

    const Fixed &getX() const;
    const Fixed &getY() const;
    Point & operator=(const Point &);

private:
    const Fixed x;
    const Fixed y;
};


#endif //EX03_POINT_H
