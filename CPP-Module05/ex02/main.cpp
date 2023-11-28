#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>

int main() {
	Bureaucrat b1("Marshall", 1);
	ShrubberyCreationForm s1("tumare");
	//AForm f1("The Ninja Report", 1, 1);
	
	/*try {
		f1.beSigned(b1);
	} catch (std::exception& e) {
		std::cout << e.what();
	}*/
	//std::cout << "\n" << b1 << "\n" << f1 <<"\n\n";
	std::cout << "\n" << b1 << "\n\n";

	Bureaucrat b2("Larry", 145);
	//AForm f2("X File", 115, 115);

	/*try {
		f1.beSigned(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}*/

	//std::cout << "\n" << b2 << "\n" << f2 << "\n\n";
	std::cout << "\n" << b2 << "\n\n";

	Bureaucrat b3(b2);
	/*//AForm f3("Grocery List", 144, 100);
	try {
//		b3.signForm(f3);
		b3.upgrade();
		b3.signForm(f3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}*/
	
	std::cout << "\n" << b3 << "\n\n";
	//std::cout << "\n" << b3 << "\n" << f3 << "\n\n";

	/*try {
		Form f4("Bad Form", 200, 200);
	} catch (std::exception& e) {
		std::cout << e.what();
	}*/

	return (0);
}
