#include "Contact.hpp"

int Contact::getContIndex() {
	return contIndex_;
}

void Contact::setContIndex(int i) {
	contIndex_ = i;
}

std::string Contact::getName() {
	return name_;
}

void Contact::setName(std::string s) {
	name_ = s;
}

std::string Contact::getSurname() {
	return surname_;
}

void Contact::setSurname(std::string s) {
	surname_ = s;
}

std::string Contact::getNickname() {
	return nickname_;
}

void Contact::setNickname(std::string s) {
	nickname_ = s;
}

std::string Contact::getPhone() {
	return phoneNumber_;
}

void Contact::setPhone(std::string s) {
	phoneNumber_ = s;
}

std::string Contact::getSecret() {
	return darkestSecret_;
}

void Contact::setSecret(std::string s) {
	darkestSecret_ = s;
}
