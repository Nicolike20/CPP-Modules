#include "Contact.hpp"

std::string Contact::getName() {
	return this -> _name;
}

void Contact::setName(std::string s) {
	this -> _name = s;
}

std::string Contact::getSurname() {
	return this -> _surname;
}

void Contact::setSurname(std::string s) {
	this -> _surname = s;
}

std::string Contact::getNickname() {
	return this -> _nickname;
}

void Contact::setNickname(std::string s) {
	this -> _nickname = s;
}

std::string Contact::getPhone() {
	return this -> _phoneNumber;
}

void Contact::setPhone(std::string s) {
	this -> _phoneNumber = s;
}

std::string Contact::getSecret() {
	return this -> _darkestSecret;
}

void Contact::setSecret(std::string s) {
	this -> _darkestSecret = s;
}
