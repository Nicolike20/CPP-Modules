#include <sstream>
#include <iomanip>

#include "Phonebook.hpp"

void Phonebook::setIndex(int i) {
	index_ = i;
	checker_ = 0;
}

int Phonebook::validString(std::string s) {
	int check = 1;
	if (!s.empty()) {
		for (size_t i = 0; i < s.length(); i++) {
			if (check != 0)
				check = isspace(s[i]);
		}
	}
	return (check);
}
void Phonebook::addContact(void) {
	if (index_ > 7) {
		index_ = 0;
		checker_ = 1;
	}
	std::string input;
	std::cout << "--- Name:           "; std::getline(std::cin, input);
	Contacts[index_].setName(input);
	std::cout << "--- Surname:        "; std::getline(std::cin, input);
	Contacts[index_].setSurname(input);
	std::cout << "--- Nickname:       "; std::getline(std::cin, input);
	Contacts[index_].setNickname(input);
	std::cout << "--- Phone number:   "; std::getline(std::cin, input);
	Contacts[index_].setPhone(input);
	std::cout << "--- Darkest secret: "; std::getline(std::cin, input);
	Contacts[index_].setSecret(input);
	if (!validString(Contacts[index_].getName())
		&& !validString(Contacts[index_].getSurname())
		&& !validString(Contacts[index_].getNickname())
		&& !validString(Contacts[index_].getPhone())
		&& !validString(Contacts[index_].getSecret())) {
		Contacts[index_].setContIndex(index_ + 1);
		index_ += 1;
	}
	else {
		std::cout << "None of the fields can be empty\n";
	}
}

void Phonebook::searchContact(void) {
	if (index_ == 0) {
		std::cout << "--- No contacts added. Use the ADD command to save a contact\n";
	}
	else {
		std::cout << "/-------------------------------------------\\\n";
		std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
		std::cout << "|-------------------------------------------|\n";
		if (checker_ == 0) {
			for (int i = 0; i < index_; i++) {
				std::cout << "|         " << Contacts[i].getContIndex() << "|";
				printContact(Contacts[i].getName());
				printContact(Contacts[i].getSurname());
				printContact(Contacts[i].getNickname());
				std::cout << "\n";
			}
		}
		else {
			for (int i = 0; i < 8; i++) {
				std::cout << "|         " << Contacts[i].getContIndex() << "|";
				printContact(Contacts[i].getName());
				printContact(Contacts[i].getSurname());
				printContact(Contacts[i].getNickname());
				std::cout << "\n";
			}
		}
		std::cout << "\\-------------------------------------------/\n";
		searchIndex();
	}
}

void Phonebook::printContact(std::string s) {
	if (s.length() <= 10) {
		std::cout << std::right << std::setw(10) << s << "|";
	} else {
		std::cout << s.substr(0,9) << ".|";
	}
}

int Phonebook::numString(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); ++i) {
		if (!isnumber(str[i]) || str[i] == ' ') {
			return (1);
		}
	}
	return (0);
}

void Phonebook::searchIndex(void) {
	int n;
	std::string input;

	std::cout << "\033[1;35mSearch index: \033[0m"; std::getline(std::cin, input);
	std::istringstream(input) >> n;
	if (numString(input) || input.empty()) {
		std::cout << "--- Index must be a number\n";
	} else if (n < 1 || n  > 8 || (n > index_ && checker_ == 0)) {
		std::cout << "--- Invalid index\n";
	} else {
		std::cout << "--- Name:           " << Contacts[n - 1].getName() << "\n";
		std::cout << "--- Surname:        " << Contacts[n - 1].getSurname() << "\n";
		std::cout << "--- Nickname:       " << Contacts[n - 1].getNickname() << "\n";
		std::cout << "--- Phone number:   " << Contacts[n - 1].getPhone() << "\n";
		std::cout << "--- Darkest secret: " << Contacts[n - 1].getSecret() << "\n";
	}
}