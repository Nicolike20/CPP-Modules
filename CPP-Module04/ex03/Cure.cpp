#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) : AMateria("cure") {
	*this = copy;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &other) {
	_type = other._type;
	return *this;
}

AMateria* Cure::clone() const {
	return new Ice(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
