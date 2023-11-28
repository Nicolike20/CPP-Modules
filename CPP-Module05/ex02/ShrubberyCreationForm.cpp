#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", "N/A", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: AForm("Shrubbery Creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) //getTaret()
: AForm(copy.getName(), copy.getTarget(), copy.getSGrade(), copy.getEGrade()) {
	std::cout << "Shrubbery Creation Form copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "Shrubbery Creation Form assignment operator called\n";
	if (this == &other) { //COMPARAR ESTO CON OTRA GENTE
		return *this;
	}
	return *this;
}

void ShrubberyCreationForm::validExecution() const {
	//cosas de shrubbery n shit
	std::cout << "Shrubbery Creation Form executed\n"; //TEMP
}