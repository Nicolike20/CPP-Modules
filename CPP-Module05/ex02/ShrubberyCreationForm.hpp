#ifndef SHRUBBERYCREATIONFORM_HPP_
# define SHRUBBERYCREATIONFORM_HPP_

# include "AForm.hpp"
# include "fstream"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

		void validExecution() const;
	private:
		ShrubberyCreationForm();
};

#endif
