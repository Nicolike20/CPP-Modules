#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &copy) { //esto tiene sentido? lo puedo quitar?
	*this = copy;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria &other) { //esto tiene sentido?
	_type = other._type;
	return *this;
}

//clone????

const std::string& AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	target.getName();
}
