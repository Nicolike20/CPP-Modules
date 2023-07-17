#include "Cat.hpp"

Cat::Cat() {
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(const Cat &copy) : Animal() {
	_brain = new Brain();
	*this = copy;
	std::cout << "Copy Cat constructor called\n";
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat &other) {
	this->Animal::operator=(other);

	//this->_brain = other._brain;	//shallow copy
	*this->_brain = *other._brain;	//deep copy		INVESTIGAR
	std::cout << "Cat assignment operator called\n";
	return *this;
}

void Cat::makeSound() const{
	std::cout << "*meows*\n";
}

Brain* Cat::getBrain() const {
	return _brain;
}