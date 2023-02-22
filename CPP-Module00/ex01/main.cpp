#include "Phonebook.hpp"

int main(void) {
	std::string input;
	//std::cout << "Name:"; std::getline(std::cin, input);
	//Contact::setName(input);
	//std::cout << "Hola: " << Contact::getName() << std::endl;

	Phonebook *pbook = new Phonebook;
	
	pbook->setIndex(0);
	while (1) {
		std::cout << "\033[1;36mPh0n3b😎😎k: \033[0m"; std::getline(std::cin, input);
		if (input == "ADD") {
			pbook->addContact();
		}
		else if (input == "SEARCH") {
			pbook->searchContact();
		}
		else if (input == "EXIT") {
			break ;
		}
	}
	return (0);
}
