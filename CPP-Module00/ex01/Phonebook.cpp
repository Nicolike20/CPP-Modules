#include "Phonebook.hpp"
#include <iterator>

//TODO: comprobar si el contacto que tiene que cambiar es el ultimo o el primero;
//TODO: comprobar si tengo que checkear que los campos a rellenar no esten vacios; -> esto esta bien hecho?

void Phonebook::setIndex(int i) {
	this->index = i;
}
void Phonebook::addContact(void) {
	int checker = 0;

	if (this->index > 7) {
		this->index = 0;
		checker = 1;
		std::cout << this->index << std::endl;
		std::cout << "test names: " << this->Contacts[0].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[0].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[0].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[0].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[0].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[1].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[1].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[1].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[1].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[1].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[2].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[2].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[2].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[2].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[2].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[3].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[3].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[3].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[3].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[3].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[4].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[4].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[4].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[4].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[4].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[5].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[5].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[5].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[5].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[5].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[6].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[6].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[6].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[6].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[6].getSecret() << std::endl;
		std::cout << "test names: " << this->Contacts[7].getName() << std::endl;
		std::cout << "test surnames: " << this->Contacts[7].getSurname() << std::endl;
		std::cout << "test nicknames: " << this->Contacts[7].getNickname() << std::endl;
		std::cout << "test phones: " << this->Contacts[7].getPhone() << std::endl;
		std::cout << "test secrets: " << this->Contacts[7].getSecret() << std::endl;
	}
	std::string input;
	std::cout << "Name: "; std::getline(std::cin, input);
	this->Contacts[index].setName(input);
	std::cout << "test name: " << this->Contacts[index].getName() << std::endl;
	std::cout << "Surname: "; std::getline(std::cin, input);
	this->Contacts[index].setSurname(input);
	std::cout << "test surname: " << this->Contacts[index].getSurname() << std::endl;
	std::cout << "Nickname: "; std::getline(std::cin, input);
	this->Contacts[index].setNickname(input);
	std::cout << "test nickname: " << this->Contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: "; std::getline(std::cin, input);
	this->Contacts[index].setPhone(input);
	std::cout << "test phone number: " << this->Contacts[index].getPhone() << std::endl;
	std::cout << "Darkest secret: "; std::getline(std::cin, input);
	this->Contacts[index].setSecret(input);
	std::cout << "test secret: " << this->Contacts[index].getSecret() << std::endl;
	if (!this->Contacts[index].getName().empty()
		&& !this->Contacts[index].getSurname().empty()
		&& !this->Contacts[index].getNickname().empty()
		&& !this->Contacts[index].getPhone().empty()
		&& !this->Contacts[index].getSecret().empty()) {
		if (checker == 1)
			this->index = 7;
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
