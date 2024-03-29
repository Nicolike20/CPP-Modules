#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main() {
	Bureaucrat b1("Marshall", 1);
	Form f1("The Ninja Report", 1, 1);
	
	try { //Sign test
		f1.beSigned(b1);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	std::cout << "\n" << b1 << "\n" << f1 <<"\n\n";

	Bureaucrat b2("Larry", 145);
	Form f2("X File", 115, 115);

	try { //Low grade test
		f1.beSigned(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n" << b2 << "\n" << f2 << "\n\n";

	Bureaucrat b3(b2);
	Form f3("Grocery List", 144, 100);
	try {
		b3.upgrade();
		b3.signForm(f3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	std::cout << "\n" << b3 << "\n" << f3 << "\n\n";

	try {
		Form f4("Bad Form", 200, 200);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";

	return (0);
}
