#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(const Dog &copy) : Animal() {
	*this = copy;
	std::cout << "Copy Dog constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
	std::cout << "*barks*\n";
}
