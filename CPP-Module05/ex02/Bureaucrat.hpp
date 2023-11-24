#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include "Form.hpp"

# include <string>
# include <iostream>
# include <exception>

class Form;

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string getName() const;
		int getGrade() const;
		void upgrade();
		void downgrade();
		void checkGrade(int grade);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};

		void signForm(Form &form);
		void executeForm(AForm const & form); //not done
	private:
		Bureaucrat();
	
		const std::string name_;
		int grade_;

};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &br);

#endif
