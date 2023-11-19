#include "Form.hpp"

Form::Form() : name_("Form"), signed_(false), sGrade_(115), eGrade_(115) {}

Form::Form(const Form &copy) : name_(copy.name_), signed_(copy.signed_), sGrade_(copy.sGrade_), eGrade_(copy.eGrade_){
    *this = copy; //cambiar esto y en bureaucrats?
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
    //checkGrade()?;
    std::cout << *this << " created\n";
}

Form& Form::operator=(const Form &other) {
    //aqui klk
    std::cout << "Form assignment operator called\n";
    if (this != &other) {
        return *this; //esto que plan
    }
    return *this;
}

std::ostream& operator<<(std::ostream &stream, const Form &form) {
    stream << form.getName() << " form, currently " << (form.getBool() ? "signed" : "not signed") 
    << " signing grade " << form.getSGrade()
    << ", executing grade " << form.getEGrade() << "\n";
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

void Form::beSigned(const Bureaucrat &br) {
    if (br.getGrade() <= sGrade_) {
        signed_ = true;
        std::cout << br.getName() << " signed " << name_ << "\n";
    } else {
        std::cout << br.getName() << " couldn't sign " << name_ << "\n";
        throw Form::GradeTooLowException();
    }
}
