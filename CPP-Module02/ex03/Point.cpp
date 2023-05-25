#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}
//    _x = 0;
//    _y = 0;
//}

Point::Point(const Point &copy) {
    *this = copy;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}
//    _x = x;
//    _y = y;
//}

Point& Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        static Point other(rhs._x.toFloat(), rhs._y.toFloat()); //ESTO NO ESTA BIEN NI DE COÑA, no?;

        return other;
        //_x = rhs._x;
        //_y = rhs._y;
    }
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return _x;
}

Fixed Point::getY() const {
    return _y;
}