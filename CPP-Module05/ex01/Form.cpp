#include "Form.hpp"

Form::Form() {}

Form::Form(const Form &copy) {
    *this = copy;
    std::cout << "Form copy constructor called\n";
}

Form::~Form() {
    std::cout << "Form destructor called\n";
}

Form::Form(const std::string &name, const int sGrade, const int eGrade) : 
 name_(name),
 sGrade_(sGrade),
 eGrade_(eGrade) {
    //checkGrade()?;
    std::cout << *this << " created\n";
}

Form& Form::operator=(cosnt Form &other) {
    //aqui klk
    std::cout << "Form assignment operator called\n";
}

std::ostream& operator<<(std::ostream &stream, const Form &form) {
    stream << form.getName() << " form, signing grade " << form.getSGrade()
    << ", executing grade " << form.getEGrade() << "\n";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Exception: Grade too high\n";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Exception: Grade too low\n";
}

const std::string getName() {
    return name_
}

bool getBool() {
    return signed_;
}

const int getSGrade() {
    return sGrade_;
}

const int getEGrade() {
    return eGrade_;
}

void beSigned(const Bureaucrat &br) {
    //klk;
}