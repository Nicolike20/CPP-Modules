#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", "N/A", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: AForm("Shrubbery Creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form constructor called. Target: " << this->getTarget() << "\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
: AForm(copy.getName(), copy.getTarget(), copy.getSGrade(), copy.getEGrade()) {
	std::cout << "Shrubbery Creation Form copy constructor called. Target: " << this->getTarget() << "\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "Shrubbery Creation Form assignment operator called\n";
	if (this == &other) {
		return *this;
	}
	return *this;
}

void ShrubberyCreationForm::validExecution() const {
	//std::ofstream outfile(this->getTarget() + "_shrubbery"), std; //mirar opciones de creacion
	std::ofstream outfile;
	outfile.open(this->getTarget() + "_shrubbery", std::ofstream::trunc); //esta forma o la primera?
	outfile << "        __ _.--..--._ _\n"
			<< "     .-' _/   _/\\_   \\_'-.\n"
			<< "    |__ /   _/\\__/\\_   \\__|\n"
			<< "       |___/\\_\\__/  \\___|\n"
			<< "              \\__/\n"
			<< "              \\__/\n"
			<< "               \\__/\n"
			<< "                \\__/\n"
			<< "             ____\\__/___\n"
			<< "       . - '             ' - .\n"
			<< "      /                        \\\n"
			<< "~~~~~~~  ~~~~~  ~~~~~  ~~~  ~~~  ~~~~~\n"
			<< "  ~~~   ~~~~~   ~~~~   ~~   ~ ~ ~ ~\n";
	outfile.close();
}