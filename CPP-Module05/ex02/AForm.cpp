#include "AForm.hpp"

AForm::AForm() : name_("Form"), target_("N/A"), signed_(false), sGrade_(115), eGrade_(115) {}

AForm::AForm(const AForm &copy) 
: name_(copy.name_),
target_(copy.target_),
signed_(copy.signed_),
sGrade_(copy.sGrade_),
eGrade_(copy.eGrade_) {
    std::cout << "Form copy constructor called\n";
}

AForm::~AForm() {
    std::cout << "Form destructor called\n";
}

AForm::AForm(const std::string &name, const std::string &target, const int sGrade, const int eGrade)
: name_(name),
target_(target),
 signed_(false),
 sGrade_(sGrade),
 eGrade_(eGrade) {
    checkGrades(sGrade_, eGrade_);
    std::cout << *this << " created\n";
}

AForm& AForm::operator=(const AForm &other) {
    std::cout << "Form assignment operator called\n";
    if (this != &other) {
        signed_ = other.getBool();
    }
    return *this;
}

std::ostream& operator<<(std::ostream &stream, const AForm &form) {
    stream << form.getName() << " form, currently " << (form.getBool() ? "signed." : "not signed.") 
    << " Signing grade " << form.getSGrade()
    << ", executing grade " << form.getEGrade();
    return stream;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Exception: Grade too high\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Exception: Grade too low\n";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Exception: Form not signed\n";
}

const std::string AForm::getName() const {
    return name_;
}

const std::string AForm::getTarget() const {
    return target_;
}

bool AForm::getBool() const {
    return signed_;
}

int AForm::getSGrade() const {
    return sGrade_;
}

int AForm::getEGrade() const {
    return eGrade_;
}
void AForm::checkGrades(int sGrade, int eGrade) {
    if (sGrade > 150 || eGrade > 150) {
        throw AForm::GradeTooLowException();
    } if (sGrade < 1 || eGrade < 1) {
        throw AForm::GradeTooHighException();
    }
}
void AForm::beSigned(const Bureaucrat &br) {
    if (br.getGrade() <= sGrade_) {
        signed_ = true;
        std::cout << br.getName() << " signed " << name_ << "\n";
    } else {
        std::cout << br.getName() << " couldn't sign " << name_ << "\n";
        throw AForm::GradeTooLowException();
    }
}

void AForm::execute(Bureaucrat const & executor) const {
    if (signed_ == false) {
        std::cout << executor.getName() << " couldn't execute " << name_ << "\n";
        throw AForm::FormNotSignedException();
    } else if (executor.getGrade() > eGrade_) {
        std::cout << executor.getName() << " couldn't execute " << name_ << "\n";
        throw AForm::GradeTooLowException();
    } else {
        std::cout << executor.getName() << " executed " << name_ << "\n";
        validExecution(); //check to esto;
    }
}
