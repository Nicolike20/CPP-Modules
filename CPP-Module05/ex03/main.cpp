#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>

int main() {
	/*Bureaucrat b1("Marshall", 1);
	ShrubberyCreationForm s1("Island");
	
	try { //Shrubbery test
		s1.beSigned(b1);
		b1.executeForm(s1);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";
	
	Bureaucrat b2("Larry", 45);
	RobotomyRequestForm r1("Marvin");

	try { //Robotomy test
		b2.signForm(r1);
		r1.execute(b2);
	} catch (std::exception& e) {
		std::cout << e.what();
	}

	std::cout << "\n";

	Bureaucrat b3("Stan", 5);
	PresidentialPardonForm p1("Everyone");

	try { //Presidential test
		p1.beSigned(b3);
		p1.execute(b3);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	
	std::cout << "\n";

	try { //Low grade test
		p1.execute(b2);
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

	std::cout << "\n";*/

	Intern i;

	AForm *f1;
	AForm *f2;
	AForm *f3;

	f1 = i.makeForm("PresidentialPardonForm", "tumare");
	std::cout << "\n";
	std::cout << "\n";
	f2 = i.makeForm("ShrubberyCreationForm", "mimare");
	std::cout << "\n";
	std::cout << "\n";
	f3 = i.makeForm("RobotomyRequestForm", "sumare");
	std::cout << "\n";
	std::cout << "\n";
	i.makeForm("test", "test");
	std::cout << "\n";
	std::cout << "\n";

	delete f1;
	delete f2;
	delete f3;

	return (0);
}

//	system("leaks -q bureaucrats");