#ifndef BITCOINEXCHANGE_HPP_
# define BITCOINEXCHANGE_HPP_

# include <string>
# include <map>

class BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();


	private:
		BitcoinExchange(const BitcoinExchange& copy); //priv?
		
		BitcoinExchange& operator=(const BitcoinExchange& other); //priv?
};

#endif
