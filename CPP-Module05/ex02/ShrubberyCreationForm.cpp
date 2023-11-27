#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", "N/A", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: Form("Shrubbery Creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) //getTaret()
: Form(copy.getName(), copy.getTarget(), copy.getSGrade(), copy,getEGrade()) {
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
}