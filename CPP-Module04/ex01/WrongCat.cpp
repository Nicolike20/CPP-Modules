#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() {
	_type = "Cat";
	std::cout << "Default WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal() {
	*this = copy;
	std::cout << "Copy WrongCat constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const {
	std::cout << "*meows*\n";
}
