#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.name_), grade_(copy.grade_) {
	std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name), grade_(grade) {
	checkGrade(grade_);
	std::cout << *this << " created \n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	grade_ = other.grade_;
	std::cout << "Bureaucrat assignment operator called\n";
	return *this;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &br) {
	stream << br.getName() << ", bureaucrat grade " << br.getGrade();
	return stream;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: Grade too high\n";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: Grade too low\n";
}

const std::string Bureaucrat::getName() const {
	return name_;
}

int Bureaucrat::getGrade() const {
	return grade_;
}

void Bureaucrat::upgrade() {
	checkGrade(grade_ - 1);
	grade_ -= 1;
	std::cout << name_ << "'s grade is now " << grade_ << "\n";
}

void Bureaucrat::downgrade() {
	checkGrade(grade_ + 1);
	grade_ += 1;
	std::cout << name_ << "'s grade is now " << grade_ << "\n";
}

void Bureaucrat::checkGrade(int grade) {
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	//comprobar esto con las hojas de evaluaciones
}