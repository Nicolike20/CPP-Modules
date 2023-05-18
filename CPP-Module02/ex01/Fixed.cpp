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
    //klk;
}

Fixed::Fixed(float f) {
    //klk;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &rhs) {
    std::cout << "Assignation operator called\n";
    if (this != &rhs) {
        _raw = rhs.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &rhs) {
    return os; //good?;
}

int Fixed::toInt(void) const {
    //klk;
}

float Fixed::toFloat(void) const {
    //klk;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (_raw);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called\n";
    _raw = raw;
}