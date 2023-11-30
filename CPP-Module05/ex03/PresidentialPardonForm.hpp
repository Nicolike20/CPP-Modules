#ifndef PRESIDENTIALPARDONFORM_HPP_
# define PRESIDENTIALPARDONFORM_HPP_

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

		void validExecution() const;
	private:
		PresidentialPardonForm();
};

#endif
