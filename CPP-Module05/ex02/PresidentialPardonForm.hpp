#ifndef PRESIDENTIALPARDONFORM_HPP_
# define PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"

class PresidentialPardonForm : public Form {
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
