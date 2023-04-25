#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    //aqui klk pa la copia;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}