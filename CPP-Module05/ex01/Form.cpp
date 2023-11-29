#include "Form.hpp"

Form::Form() : name_("Form"), signed_(false), sGrade_(115), eGrade_(115) {}

Form::Form(const Form &copy) 
: name_(copy.name_),
signed_(copy.signed_),
sGrade_(copy.sGrade_),
eGrade_(copy.eGrade_) {
    std::cout << "Form copy constructor called\n";
}

Form::~Form() {
    std::cout << "Form destructor called\n";
}

Form::Form(const std::string &name, const int sGrade, const int eGrade)
: name_(name),
 signed_(false),
 sGrade_(sGrade),
 eGrade_(eGrade) {
    checkGrades(sGrade_, eGrade_);
    std::cout << *this << " created\n";
}

Form& Form::operator=(const Form &other) {
    std::cout << "Form assignment operator called\n";
    if (this == &other) {
        signed_ = other.getBool();
    }
    return *this;
}

std::ostream& operator<<(std::ostream &stream, const Form &form) {
    stream << form.getName() << " form, currently " << (form.getBool() ? "signed." : "not signed.") 
    << " Signing grade " << form.getSGrade()
    << ", executing grade " << form.getEGrade();
    return stream;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Exception: Grade too high\n";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Exception: Grade too low\n";
}

const std::string Form::getName() const {
    return name_;
}

bool Form::getBool() const {
    return signed_;
}

int Form::getSGrade() const {
    return sGrade_;
}

int Form::getEGrade() const {
    return eGrade_;
}
void Form::checkGrades(int sGrade, int eGrade) {
    if (sGrade > 150 || eGrade > 150) {
        throw Form::GradeTooLowException();
    } if (sGrade < 1 || eGrade < 1) {
        throw Form::GradeTooHighException();
    }
}
void Form::beSigned(const Bureaucrat &br) {
    if (br.getGrade() <= sGrade_) {
        signed_ = true;
        std::cout << br.getName() << " signed " << name_ << "\n";
    } else {
        std::cout << br.getName() << " couldn't sign " << name_ << "\n";
        throw Form::GradeTooLowException();
    }
}
