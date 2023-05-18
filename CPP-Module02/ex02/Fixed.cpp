#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called\n";
    _raw = 0;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed::Fixed(int i) {
    std::cout << "Int constructor called\n";
    _raw = i << frac;
}

Fixed::Fixed(float f) {
    std::cout << "Float constructor called\n";
    _raw = roundf(f * (1 << frac));
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &rhs) {
    std::cout << "Assignation operator called\n";
    if (this != &rhs) {
        _raw = rhs._raw;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &rhs) {
    std::cout << rhs.toFloat();
    return os;
}

int Fixed::toInt(void) const {
    return _raw >> frac;
}

float Fixed::toFloat(void) const {
    return (float)_raw / (1 << frac);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (_raw);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called\n";
    _raw = raw;
}