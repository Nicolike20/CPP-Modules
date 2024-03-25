#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = copy;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	(void) other;
	return *this;
}

void BitcoinExchange::readDB() {
	//smth
}

void BitcoinExchange::readFile(std::string input) {
	(void) input;
}
