#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = other;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& operator=(const BitcoinExchange& other) {
	(void)other;
	return *this;
}

