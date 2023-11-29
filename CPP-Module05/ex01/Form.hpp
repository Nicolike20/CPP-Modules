#ifndef FORM_HPP_
# define FORM_HPP_

# include "Bureaucrat.hpp"

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

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

		const std::string getName() const;
		bool getBool() const;
		int getSGrade() const;
		int getEGrade() const;

		void checkGrades(int sGrade, int eGrade);
		void beSigned(const Bureaucrat &br);
	private:
		Form();
		
		const std::string name_;
		bool signed_;
		const int sGrade_;
		const int eGrade_;
};

std::ostream& operator<<(std::ostream &stream, const Form &form);

#endif
