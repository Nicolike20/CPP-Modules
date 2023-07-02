#include "Cat.hpp"

Cat::Cat() { //add brain;
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(const Cat &copy) : Animal() { //add brain;
	*this = copy;
	_brain = new Brain();
	std::cout << "Copy Cat constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete _brain;
}

//añadir operator= para poder igualarle el brain;
Cat& Cat::operator=(const Cat &other) {
	this->Animal::operator=(other);

	//this->_brain = other._brain;	//shallow copy
	*this->_brain = *other._brain;	//deep copy		INVESTIGAR
	//no puedo igualar el _type aqui en vez de llamar al operator= de animal?
	std::cout << "Cat assignment operator called\n";
	return *this;
}

void Cat::makeSound() const{
	std::cout << "*meows*\n";
}
