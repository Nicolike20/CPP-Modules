#include "Point.hpp"

float areaCalc(Point const p1, Point const p2, Point const p3) {
    return fabs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) + p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) + p3.getX().toFloat() *(p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
//    std::cout << "hola?\n" << a.getX() << " " << b.getX() << " " << c.getX() << " " << point.getX() << "\n";

    float area = areaCalc(a, b, c);
    float ap1 = areaCalc(point, a, b);
    float ap2 = areaCalc(point, a, c);
    float ap3 = areaCalc(point, b, c);

    return (area == ap1 + ap2 + ap3);
}