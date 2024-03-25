#ifndef BITCOINEXCHANGE_HPP_
# define BITCOINEXCHANGE_HPP_

# include <string>
# include <iostream>
# include <map>

class BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();

		void readDB(); //const?
		void readFile(std::string input); //const? //reference?
	private:
		BitcoinExchange(const BitcoinExchange& copy); //priv?

		BitcoinExchange& operator=(const BitcoinExchange& other); //priv?
};

#endif
