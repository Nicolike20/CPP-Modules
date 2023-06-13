#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Default Cat constructor called\n";
}

Cat::Cat(const Cat &copy) : Animal() {
	*this = copy;
	std::cout << "Copy Cat constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const{
	std::cout << "*meows*\n";
}
