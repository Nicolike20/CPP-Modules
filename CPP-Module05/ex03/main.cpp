#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>

int main() {
	Intern i;

	AForm *f1;
	AForm *f2;
	AForm *f3;

	f1 = i.makeForm("shrubbery creation", "Island");
	std::cout << "\n";
	f2 = i.makeForm("robotomy request", "Marvin");
	std::cout << "\n";
	f3 = i.makeForm("presidential pardon", "Everyone");
	std::cout << "\n";
	i.makeForm("test", "test");
	std::cout << "\n";

	Bureaucrat b1("Marshall", 1);
	
	try { //Shrubbery test
		f1->beSigned(b1);
		b1.executeForm(*f1);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";
	
	Bureaucrat b2("Larry", 45);

	try { //Robotomy test
		b2.signForm(*f2);
		f2->execute(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";

	Bureaucrat b3("Stan", 5);

	try { //Presidential test
		f3->beSigned(b3);
		f3->execute(b3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	std::cout << "\n";

	try { //Low grade test
		f3->execute(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";
	
	ShrubberyCreationForm s2("Jungle");

	try { //Not signed test
		s2.execute(b3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";

	delete f1;
	delete f2;
	delete f3;

	return (0);
}

//	system("leaks -q bureaucrats");