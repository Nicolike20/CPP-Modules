#include <memory>

#include "SmartPointer.hpp"
#include "Phonebook.hpp"

void loop() {
	std::string input;
	//std::auto_ptr<Phonebook> pbook(new Phonebook);
	SmartPointer<Phonebook> pbook(new Phonebook);
	
	pbook->setIndex(0);
	while (1) {
		std::cout << "\033[1;36mPh0n3b😎😎k: \033[0m"; std::getline(std::cin, input);
		if (input == "ADD") {
			pbook->addContact();
		} else if (input == "SEARCH") {
			pbook->searchContact();
		} else if (input == "EXIT") {
			break ;
		}
	}
}

int main() {
	loop();
	return (0);
}

//	system("leaks -q phonebook");