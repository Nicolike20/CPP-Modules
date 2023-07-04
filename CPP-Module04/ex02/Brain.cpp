#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created\n";
}

Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << "Copy of Brain created\n";
}

Brain::~Brain() {
	std::cout << "Brain destroyed\n";
}

Brain& Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain assignment operator called\n";
	return *this;
}
