//
// Created by Manuel Hahn on 5/16/22.
//

#include "Point.h"
#include <iostream>

bool bsp(Point a, Point b, Point c, Point p);

int main() {
    const Point a(0, 0);
    const Point b(10, 0);
    const Point c(0, 10);
    const Point p(6, 6);

    std::cout << "Point x: " << p.getX() << " y: " << p.getY() << " is " << (bsp(a, b, c, p) ? "inside" : "outside") << std::endl;
}
