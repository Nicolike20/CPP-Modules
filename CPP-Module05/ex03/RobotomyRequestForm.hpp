#ifndef ROBOTOMYREQUESTFORM_HPP_
# define ROBOTOMYREQUESTFORM_HPP_

# include "AForm.hpp"
# include "stdlib.h"
# include "time.h"

class RobotomyRequestForm : public AForm {
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
