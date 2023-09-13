#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "Default AAnimal constructor called\n";
}

AAnimal::AAnimal(const AAnimal &copy) {
	*this = copy;
	std::cout << "Copy AAnimal constructor called\n";
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
	_type = other._type;
	std::cout << "AAnimal assignment operator called\n";
	return *this;
}

std::string AAnimal::getType() const {
	return _type;
}
