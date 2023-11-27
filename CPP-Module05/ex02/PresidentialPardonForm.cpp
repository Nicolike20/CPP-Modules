#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", "N/A", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: Form("Presidential Pardon", target, 25, 5) {
	std::cout << "Presidential Pardon Form constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) //getTaret()
: Form(copy.getName(), copy.getTarget(), copy.getSGrade(), copy,getEGrade()) {
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
	//cosas de presidential n shit
	std::cout << "Presidential Pardon Form executed\n"; //TEMP
}