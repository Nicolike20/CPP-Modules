#include "Fixed.hpp"

Fixed::Fixed() {
    _raw = 0;
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

Fixed::Fixed(int i) {
    _raw = i << frac;
}

Fixed::Fixed(float f) {
    _raw = roundf(f * (1 << frac));
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &rhs) {
    if (this != &rhs) {
        _raw = rhs._raw;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &rhs) {
    std::cout << rhs.toFloat();
    return os;
}

/*--------------------------------------------------------------------------*/

bool Fixed::operator<(const Fixed &rhs) const {
    if (_raw < rhs._raw) {
        return true;
    }
    return false;
}

bool Fixed::operator>(const Fixed &rhs) const {
    if (_raw > rhs._raw) {
        return true;
    }
    return false;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    if (_raw <= rhs._raw) {
        return true;
    }
    return false;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    if (_raw >= rhs._raw) {
        return true;
    }
    return false;
}

bool Fixed::operator==(const Fixed &rhs) const {
    if (_raw == rhs._raw) {
        return true;
    }
    return false;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    if (_raw != rhs._raw) {
        return true;
    }
    return false;
}

/*--------------------------------------------------------------------------*/

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed fixed;
    fixed._raw = _raw + rhs._raw;
    return fixed;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed fixed;
    fixed._raw = _raw - rhs._raw;
    return fixed;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    Fixed fixed;
    fixed = this->toFloat() * rhs.toFloat();
    return fixed;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    Fixed fixed;
    fixed = this->toFloat() / rhs.toFloat();
    return fixed;
}

/*--------------------------------------------------------------------------*/

Fixed& Fixed::operator++() {
    _raw++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed fixed;
    fixed = *this;
    ++_raw;
    return fixed;
}

Fixed& Fixed::operator--() {
    _raw--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed fixed;
    fixed = *this;
    --_raw;
    return fixed;
}

/*--------------------------------------------------------------------------*/

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs) {
    return lhs._raw < rhs._raw ? lhs : rhs;
}

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs) {
    return lhs._raw < rhs._raw ? lhs : rhs;
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs) {
    return lhs._raw > rhs._raw ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs) {
    return lhs._raw > rhs._raw ? lhs : rhs;
}

/*--------------------------------------------------------------------------*/

int Fixed::toInt(void) const {
    return _raw >> frac;
}

float Fixed::toFloat(void) const {
    return (float)_raw / (1 << frac);
}

int Fixed::getRawBits(void) const {
    return (_raw);
}

void Fixed::setRawBits(const int raw) {
    _raw = raw;
}