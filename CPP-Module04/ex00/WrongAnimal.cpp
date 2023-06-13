#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal") {
	std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
	std::cout << "Copy WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	_type = other._type;
	std::cout << "Animal assignment operator called\n";
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "*random animal sound*\n";
}

std::string WrongAnimal::getType() const {
	return _type;
}
