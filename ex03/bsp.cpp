//
// Created by Manuel Hahn on 5/16/22.
//

#include "Point.h"

Fixed area(const Point &a, const Point &b, const Point &c) {
    return Fixed(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
}

bool bsp(const Point a, const Point b, const Point c, const Point p) {
    Fixed original = area(a, b, c) / 2;
    Fixed a1 = area(p, a, b) / 2;
    a1 = a1 < 0 ? a1 * -1 : a1;
    Fixed a2 = area(p, b, c) / 2;
    a2 = a2 < 0 ? a2 * -1 : a2;
    Fixed a3 = area(p, a, c) / 2;
    a3 = a3 < 0 ? a3 * -1 : a3;

    if (a1 == 0 || a2 == 0 || a3 == 0) return false;
    return a1 + a2 + a3 == original;
}
