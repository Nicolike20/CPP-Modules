#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", "N/A", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
: AForm("Robotomy Request", target, 72, 45) {
	std::cout << "Robotomy Request Form constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) //getTaret()
: AForm(copy.getName(), copy.getTarget(), copy.getSGrade(), copy.getEGrade()) {
	std::cout << "Robotomy Request Form copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request Form destructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	std::cout << "Robotomy Request Form assignment operator called\n";
	if (this == &other) { //COMPARAR ESTO CON OTRA GENTE
		return *this;
	}
	return *this;
}

void RobotomyRequestForm::validExecution() const {
	//cosas de robotomy n shit
	std::cout << "Robotomy Request Form executed\n"; //TEMP
}