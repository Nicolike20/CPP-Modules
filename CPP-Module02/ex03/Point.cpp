#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}
//    _x = 0;
//    _y = 0;
//}

Point::Point(const Point &copy)
        : _x(copy._x), _y(copy._y) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}
//    _x = x;
//    _y = y;
//}

Point& Point::operator=(const Point &rhs) {
    if (this != &rhs) {}
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return _x;
}

Fixed Point::getY() const {
    return _y;
}