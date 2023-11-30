#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor called\n";
}

Intern::Intern(const Intern &copy) {
    *this = copy; //? //CHECKEAR TODOS LOS CONSTRUCTORES DE COPIA
    std::cout << "Intern copy constructor called\n";
}

Intern::~Intern() {
    std::cout << "Intern destructor called\n";
}

Intern& Intern::operator=(const Intern &other) {
    std::cout << "Intern assignment operator called\n";
    //(void) other; //y quitar lo demas¿ //CHECKEAR TODOS LOS OPERATORS
    if (this != &other) {
        return *this;
    }
    return *this;
}

AForm* Intern::makeForm(const std::string &name, const std::string &target) {
    std::string formTypes[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int n = -1;
    AForm *res = NULL;

    for (int i = 0; i < 3; i++) {
        if (!formTypes[i].compare(name)) {
            n = i;
            break;
        }
    }
    
    switch (n) { //check si esto ta bien con la evaluacion
        case 0:
            res = new ShrubberyCreationForm(target);
            break;
        case 1:
            res = new RobotomyRequestForm(target);
            break;
        case 2:
            res = new PresidentialPardonForm(target);
            break;
        default:
            std::cout << "Intern couldn't create that form\n"; //returns NULL
            break;
    }

    if (res != NULL) {
        std::cout << "Intern creates " << res->getName() <<  "form\n";
    }

    return res;
}