#include "Dog.hpp"

Dog::Dog() {
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Default Dog constructor called\n";
}

Dog::Dog(const Dog &copy) : Animal() {
	_brain = new Brain();
	*this = copy;
	std::cout << "Copy Dog constructor called\n";
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called\n";
}

Dog& Dog::operator=(const Dog &other) {
	this->Animal::operator=(other);

	//this->_brain = other._brain;	//shallow copy
	*this->_brain = *other._brain;	//deep copy

	std::cout << "Dog assignment operator called\n";
	return *this;
}

void Dog::makeSound() const {
	std::cout << "*barks*\n";
}

Brain* Dog::getBrain() const {
	return _brain;
}