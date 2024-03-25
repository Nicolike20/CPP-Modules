#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		//make this a try catch?
		BitcoinExchange btc();
		btc.readDB();
		btc.readFile(argv[1]);
	} else {
		std::cout << "Error: Invalid number of arguments\n";
	}
    return (0);
}
