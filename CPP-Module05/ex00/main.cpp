#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b1("Mark", 1);
	
	try {
		std::cout  << b1 << "\n";
		b1.downgrade();
		b1.upgrade();
		b1.upgrade();
		b1.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	std::cout << "\n" << b1 << "\n\n";

	Bureaucrat b2("Larry", 145);
	try {
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n" << b2 << "\n\n";

	try {
		Bureaucrat b3("Jason", 200);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	return (0);
}
