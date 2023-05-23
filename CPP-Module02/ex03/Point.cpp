#include "Point.hpp"

Point::Point() {
    _x = 0;
    _y = 0;
}

Point::Point(const Point &copy) {
    *this = copy;
}

Point::Point(const float x, const float y) {
    _x = x;
    _y = y;
}

Point& Point::operator=(const Point &rhs) {
    if (this != &rhs) { //funciona tambien "if(*this != &rhs)"?;
        _x = rhs._x;
        _y = rhs._y;
    }
    return *this;
}

Point::~Point() {}