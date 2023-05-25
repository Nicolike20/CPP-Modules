#include "Point.hpp"

float area(Point const p1, Point const p2, Point const p3) {
    return fabs((p1.getX() * (p2.getY() - p3.getY()) + p2.getX() * (p3.getY() - p1.getY()) + p3.getX() *(p1.getY() - p2.getY())) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float area = area(a, b, c);
    float ap1 = area(point, a, b);
    float ap2 = area(point, a, c);
    float ap3 = area(point, b, c);

    return (area == ap1 + ap2 + ap3);
}