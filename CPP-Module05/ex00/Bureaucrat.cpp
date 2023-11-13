#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
	std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade) {
	std::cout << "Bureaucrat " << name_ << " created with grade " << grade_ << "\n";
} //const std::string &name?
//añadir check que grade sea > 1 < 150

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	grade_ = other.grade_;
	std::cout << "Bureaucrat assignment operator called\n";
	return *this;
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high\n";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low\n";
}

const std::string Bureaucrat::getName() const {
	return name_;
}

int Bureaucrat::getGrade() const {
	return grade_;
}

void Bureaucrat::upgrade() {
	/*try {
		if (grade_ > 1) {
			grade_ -= 1;
			std::cout << name_ << "'s grade is now " << grade_ << "\n";
		} else {
			throw (grade_); //name tambien?;
		}
	}
	catch (int grade) {
		std::cout << "Can't increment " << name_ << "'s grade\n";
	}*/
	throw Bureaucrat::GradeTooLowException();
	if (grade_ > 1) {
			grade_ -= 1;
			std::cout << name_ << "'s grade is now " << grade_ << "\n";
		} else {
			throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::downgrade() {
	try {
		if (grade_ < 150) {
			grade_ += 1;
			std::cout << name_ << "'s grade is now " << grade_ << "\n";
		} else {
			throw (grade_); //name tambien?, o incluso "throw()" sin argumentos;
		}
	}
	catch (int grade) {
		std::cout << "Can't decrement " << name_ << "'s grade\n";
	}
}
