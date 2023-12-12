#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor called\n";
}

Intern::Intern(const Intern &copy) {
    *this = copy;
    std::cout << "Intern copy constructor called\n";
}

Intern::~Intern() {
    std::cout << "Intern destructor called\n";
}

Intern& Intern::operator=(const Intern &other) {
    std::cout << "Intern assignment operator called\n";
    (void) other;
    return *this;
}

static AForm* newShrubbery(const std::string target) {
    return new ShrubberyCreationForm(target);
}

static AForm* newRobotomy(const std::string target) {
    return new RobotomyRequestForm(target);
}

static AForm* newPresidential(const std::string target) {
    return new PresidentialPardonForm(target);
}

typedef AForm*(*newForms)(const std::string);

AForm* Intern::makeForm(const std::string &name, const std::string &target) {
    AForm *res = NULL;
    const std::string formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    newForms newForms[3] = {&newShrubbery, &newRobotomy, &newPresidential};

    for (int i = 0; i < 3; i++) {
        if (!formTypes[i].compare(name)) {
            res = newForms[i](target);
            break;
        }
    }
    if (res != NULL) {
        std::cout << "Intern creates " << res->getName() <<  " form\n";
    } else {
        std::cout << "Intern couldn't create that form\n";
    }

    return res;
}