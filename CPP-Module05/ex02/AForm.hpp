#ifndef AFORM_HPP_
# define AFORM_HPP_

# include "Bureaucrat.hpp"

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat; //para que compile en linux "main file cannot be included recursively..."

class AForm {
	public:
		AForm(const std::string &name, const std::string &target, const int sGrade, const int eGrade);
		AForm(const AForm &copy);
		virtual ~AForm();

		AForm& operator=(const AForm &other);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public: const char* what() const throw();
		};

		const std::string getTarget() const;
		const std::string getName() const;
		bool getBool() const;
		int getSGrade() const;
		int getEGrade() const;

		void checkGrades(int sGrade, int eGrade);
		void beSigned(const Bureaucrat &br);

		void execute(Bureaucrat const & executor) const; //check this
		virtual void validExecution() const = 0;
	private:
		AForm();

		const std::string name_;
		const std::string target_;
		bool signed_;
		const int sGrade_;
		const int eGrade_;
};

std::ostream& operator<<(std::ostream &stream, const AForm &form);

#endif
