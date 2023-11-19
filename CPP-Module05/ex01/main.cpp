#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main() {
	Bureaucrat b1("Mark", 1);
	Form f1("The Ninja Report", 1, 1);
	
	try {
		std::cout  << b1 << "\n";
		b1.downgrade(); //quitar esto? muxo texto;
		b1.upgrade();
		b1.upgrade();
		b1.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	try {
		f1.beSigned(b1);
		b1.signForm(f1); //creo que no deberia poder firmarse 2 veces/si ya está firmado;
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	std::cout << "\n" << b1 << "\n" << f1 <<"\n\n";

	Bureaucrat b2("Larry", 145);
	Form f2("X File", 115, 115);
	try {
		b2.downgrade(); //quitar estos? muxo texto;
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
		b2.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	try {
		f1.beSigned(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n" << b2 << "\n" << f2 << "\n\n"; //por qué no sale el nombre del burocrata?;

	Bureaucrat b3(b2);
	Form f3("Grocery list", 149, 100);
	try {
//		b3.signForm(f3);
		b3.upgrade();
		b3.signForm(f3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	std::cout << "\n" << b3 << "\n" << f3 << "\n\n";

	return (0);
}
