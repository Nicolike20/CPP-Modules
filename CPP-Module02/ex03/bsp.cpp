#include "Point.hpp"

float area(Point const p1, Point const p2, Point const p3) {
    return fabs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) + p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) + p3.getX().toFloat() *(p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float area = area(a, b, c);
    float ap1 = area(point, a, b);
    float ap2 = area(point, a, c);
    float ap3 = area(point, b, c);

    return (area == ap1 + ap2 + ap3);
}