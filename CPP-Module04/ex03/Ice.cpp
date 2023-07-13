#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) : AMateria("ice") {
	*this = copy;
}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice &other) {
	_type = other._type;
	return *this;
}

AMateria* Ice::clone() const { //QUE SIGNIFICABA EL CONST AL FINAL DEL PROTOTIPO DE LA FUNCION?
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
