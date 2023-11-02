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
//	name_ = other.name_; //check esto;
	grade_ = other.grade_; //esto hay que revisarlo
	std::cout << "Bureaucrat assignment operator called\n";
	return *this;
}

const std::string Bureaucrat::getName() const {
	return name_;
}

int Bureaucrat::getGrade() const {
	return grade_;
}

void Bureaucrat::upgrade() {
	try {
		if (grade_ > 1) {
			grade_ -= 1;
		} else {
			throw (grade_); //name tambien?;
		}
	}
	catch (int grade) {
		std::cout << "Can't increment the bureaucrat's grade\n";
	}
}

void Bureaucrat::downgrade() {
	try {
		if (grade_ < 150) {
			grade_ += 1;
		} else {
			throw (grade_); //name tambien?;
		}
	}
	catch (int grade) {
		std::cout << "Can't decrement the bureaucrat's grade\n";
	}
}