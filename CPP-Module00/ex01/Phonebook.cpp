#include "Phonebook.hpp"
#include <iterator>

void Phonebook::setIndex(int i) {
	this->index = i;
}
void Phonebook::addContact(void) {
	if (this->index > 7) {
		this->index = 7;
		std::cout << this->index << std::endl;
		std::cout << "test names: " << this->Contacts[0].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[1].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[2].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[3].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[4].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[5].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[6].getName() << std::endl;
		std::cout << "test names: " << this->Contacts[7].getName() << std::endl;
	}
	std::string input;
	std::cout << "Name: "; std::getline(std::cin, input);
	this->Contacts[index].setName(input);
	std::cout << "test name: " << this->Contacts[index].getName() << std::endl;
	this->index += 1;
}
