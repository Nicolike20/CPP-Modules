#ifndef INTERN_HPP_
# define INTERN_HPP_

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class Intern {
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();

		Intern& operator=(const Intern &other);

		AForm* makeForm(const std::string &name, const std::string &target);
};

#endif
