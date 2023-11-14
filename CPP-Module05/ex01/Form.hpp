#ifndef FORM_HPP_
# define FORM_HPP_

# include "Bureaucrat.hpp"

# include <string>
# include <iostream>
# include <exception>

class Form {
	public:
		Form(const std::string &name, const int sGrade, const int eGrade);
		Form(const Form &copy);
		~Form();

		Form& operator=(const Form &other);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};

		const std::string getName();
		bool getBool();
		const int getSGrade();
		const int getEGrade();

		void beSigned(const Bureaucrat &br); //signForm() en Bureaucrats klk?
	private:
		Form();
		
		const std::string name_;
		bool signed_;
		const int sGrade_;
		const int eGrade_;
};

std::ostream& operator<<(std::ostream &stream, const Form &form);

#endif