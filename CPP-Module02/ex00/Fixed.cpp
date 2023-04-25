#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called\n";
    _raw = 0;
    //aki klk pal constructor. ta bien?
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    //aqui klk pa la copia;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &assign) {
    std::cout << "Assignation operator called\n";
    _ray = assign
    //aki klk pal operador;
    //noseque return *this;
}
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (_raw); //ta bien?
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called\n";
    _raw = raw; // ta bien?
}