#ifndef ROBOTOMYREQUESTFORM_HPP_
# define ROBOTOMYREQUESTFORM_HPP_

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

		void validExecution() const;
	private:
		RobotomyRequestForm();
};

#endif
