#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n"
		<< "I love having extra bacon for my"
		<< "7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!\n";
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. You didn’t put"
		<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free. I’ve been coming"
		<< "for years whereas you started working here since last month.\n";
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int sLevel = -1;
	for (int i = 0; i < 4; i++) {
		if (!levels[i].compare(level)) {
			sLevel = i;
			break ;
		}
	}

	switch (sLevel) {
		case 0:
			(this->*(functions[0]))();
			//fall through
		case 1:
			(this->*(functions[1]))();
			//fall through
		case 2:
			(this->*(functions[2]))();
			//fall through
		case 3:
			(this->*(functions[3]))();
			break ;
		default:
			std::cout << "[ INVALID COMMAND ]\n";
			break ;
	}
}
