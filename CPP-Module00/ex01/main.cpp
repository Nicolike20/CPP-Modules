#include "Phonebook.hpp"
#include <ostream>
#include <string>


int main(void) {
	std::string input;
	//std::cout << "Name:"; std::getline(std::cin, input);
	//Contact::setName(input);
	//std::cout << "Hola: " << Contact::getName() << std::endl;

//	Phonebook *pbook = new Phonebook;
	
	while (1) {
		std::cout << "\033[1;36mPh0n3b😎😎k: \033[0m"; std::getline(std::cin, input);
		if (input == "ADD") {
			std::cout << "ADD\n";
		}
		else if (input == "SEARCH") {
			std::cout << "SEARCH\n";
		}
		else if (input == "EXIT") {
			break ;
		}
	}
	return (0);
}
