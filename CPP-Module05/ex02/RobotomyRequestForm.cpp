#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", "N/A", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
: AForm("Robotomy Request", target, 72, 45) {
	std::cout << "Robotomy Request Form constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: AForm(copy.getName(), copy.getTarget(), copy.getSGrade(), copy.getEGrade()) {
	std::cout << "Robotomy Request Form copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request Form destructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	std::cout << "Robotomy Request Form assignment operator called\n";
	if (this == &other) {
		return *this;
	}
	return *this;
}

void RobotomyRequestForm::validExecution() const {
	std::cout << "*DRILING NOISES*\n";
	std::srand(std::time(NULL));
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	} else {
		std::cout << this->getTarget() << "'s robotomy failed.\n";
	}
	
}