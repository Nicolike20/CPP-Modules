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
    _raw = i << frac; //esto es como multiplicar por 2^frac
}

Fixed::Fixed(float f) {
    std::cout << "Float constructor called\n";
    _raw = roundf(f * (1 << frac)); //esto es como multiplicar por 2^frac pero hay que hacerlo asi para que no se queje por conversiones
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
    fixed._raw = _raw * rhs._raw; //to float?
    return fixed;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    Fixed fixed;
    fixed._raw = _raw / rhs._raw; //to float?
    return fixed;
}

/*--------------------------------------------------------------------------*/

Fixed& Fixed::operator++() {
    _raw++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed fixed;
    std::cout << "hola?\n";
    fixed = *this;
    ++*this;
    return fixed;
}

Fixed& Fixed::operator--() {
    _raw--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed fixed;
    fixed = *this;
    --*this;
    return fixed;
}

/*--------------------------------------------------------------------------*/

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs) { // y el static?
    return lhs._raw < rhs._raw ? lhs : rhs;
}

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs) { // y el static?
    return lhs._raw < rhs._raw ? lhs : rhs;
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs) { // y el static?
    return lhs._raw > rhs._raw ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs) { // y el static?
    return lhs._raw > rhs._raw ? lhs : rhs;
}

/*--------------------------------------------------------------------------*/

int Fixed::toInt(void) const {
    return _raw >> frac; //esto es como dividir entre 2^frac
}

float Fixed::toFloat(void) const {
    return (float)_raw / (1 << frac); //esto es como multiplicar por 2^frac pero hay que hacerlo asi para que no se queje por conversiones
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (_raw);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called\n";
    _raw = raw;
}