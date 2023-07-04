#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Default Animal constructor called\n";
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "Copy Animal constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal& Animal::operator=(const Animal &other) {
	_type = other._type;
	std::cout << "Animal assignment operator called\n";
	return *this;
}

void Animal::makeSound() const {
	std::cout << "*random animal sound*\n";
}

std::string Animal::getType() const {
	return _type;
}
