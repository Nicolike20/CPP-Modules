#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", "N/A", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: AForm("Presidential Pardon", target, 25, 5) {
	std::cout << "Presidential Pardon Form constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
: AForm(copy.getName(), copy.getTarget(), copy.getSGrade(), copy.getEGrade()) {
	std::cout << "Presidential Pardon Form copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Presidential Pardon Form destructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "Presidential Pardon Form assignment operator called\n";
	if (this == &other) { //COMPARAR ESTO CON OTRA GENTE
		return *this;
	}
	return *this;
}

void PresidentialPardonForm::validExecution() const {
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n"; //TEMP
}