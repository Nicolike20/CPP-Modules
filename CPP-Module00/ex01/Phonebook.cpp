#include "Phonebook.hpp"

//TODO: AÑADIR IFNDEF Y ENDIF A LOS HPP

void Phonebook::setIndex(int i) {
	this->index = i;
	this->checker = 0;
}
void Phonebook::addContact(void) {
	if (this->index > 7) {
		this->index = 0;
		this->checker = 1;
	}
	std::string input;
	std::cout << "--- Name:           "; std::getline(std::cin, input);
	this->Contacts[index].setName(input);
	std::cout << "--- Surname:        "; std::getline(std::cin, input);
	this->Contacts[index].setSurname(input);
	std::cout << "--- Nickname:       "; std::getline(std::cin, input);
	this->Contacts[index].setNickname(input);
	std::cout << "--- Phone number:   "; std::getline(std::cin, input);
	this->Contacts[index].setPhone(input);
	std::cout << "--- Darkest secret: "; std::getline(std::cin, input);
	this->Contacts[index].setSecret(input);
	if (!this->Contacts[index].getName().empty()
		&& !this->Contacts[index].getSurname().empty()
		&& !this->Contacts[index].getNickname().empty()
		&& !this->Contacts[index].getPhone().empty()
		&& !this->Contacts[index].getSecret().empty()) {
		this->Contacts[index].setContIndex(this->index + 1);
		this->index += 1;
	}
	else {
		std::cout << "None of the fields can be empty" << std::endl;
		this->Contacts[index].getName() = "";
		this->Contacts[index].getSurname() = "";
		this->Contacts[index].getNickname() = "";
		this->Contacts[index].getPhone() = "";
		this->Contacts[index].getSecret() = "";
	}
}

void Phonebook::searchContact(void) {
	if (this -> index == 0) {
		std::cout << "--- No contacts added. Use the ADD command to save a contact" << std::endl;
	}
	else {
		std::cout << "/-------------------------------------------\\" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		if (this -> checker == 0) {
			for (int i = 0; i < this -> index; i++) {
				std::cout << "|         " << this->Contacts[i].getContIndex() << "|";
				printContact(this->Contacts[i].getName());
				printContact(this->Contacts[i].getSurname());
				printContact(this->Contacts[i].getNickname());
				std::cout << std::endl;
			}
		}
		else {
			for (int i = 0; i < 8; i++) {
				std::cout << "|         " << this->Contacts[i].getContIndex() << "|";
				printContact(this->Contacts[i].getName());
				printContact(this->Contacts[i].getSurname());
				printContact(this->Contacts[i].getNickname());
				std::cout << std::endl;
			}
		}
		std::cout << "\\-------------------------------------------/" << std::endl;
		searchIndex();
	}
}

void Phonebook::printContact(std::string s) {
	int spaces;
	if (s.length() <= 10) {
		spaces = 10 - s.length();
		while (spaces-- > 0)
			std::cout << " ";
		std::cout << s << "|";
	}
	else {
		for (int j = 0; j < 9; j++) {
			std::cout << s[j];
		}
		std::cout << ".|";
	}
}

void Phonebook::searchIndex(void) {
	std::string input;
	std::cout << "\033[1;35mSearch index: \033[0m"; std::getline(std::cin, input);
	if (input.length() > 1 || input[0] < '1' || input[0] > '8' || (stoi(input) > this -> index && this->checker == 0)) {
		std::cout << "--- Invalid Index" << std::endl;
	}
	else {
		int i = stoi(input) - 1;
		std::cout << "--- Name:           " << this->Contacts[i].getName() << std::endl;
		std::cout << "--- Surname:        " << this->Contacts[i].getSurname() << std::endl;
		std::cout << "--- Nickname:       " << this->Contacts[i].getNickname() << std::endl;
		std::cout << "--- Phone number:   " << this->Contacts[i].getPhone() << std::endl;
		std::cout << "--- Darkest secret: " << this->Contacts[i].getSecret() << std::endl;
	}
}