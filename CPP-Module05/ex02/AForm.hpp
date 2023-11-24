#ifndef FORM_HPP_
# define FORM_HPP_

# include "Bureaucrat.hpp"

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat; //para que compile en linux "main file cannot be included recursively..."

class Form {
	public:
		Form(const std::string &name, const int sGrade, const int eGrade);
		Form(const Form &copy);
		virtual ~Form();

		Form& operator=(const Form &other);

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
		//añadir excepcion por si el form no ta firmao;

		const std::string getName() const;
		bool getBool() const;
		int getSGrade() const;
		int getEGrade() const;

		void checkGrades(int sGrade, int eGrade);
		void beSigned(const Bureaucrat &br);

		void execute(Bureaucrat const & executor) const; //not done (aqui check si hay nivel suficiente y si el form ta firmao y llamas a validExecution);
		virtual void validExecution() const = 0; //aqui cada form hace sus cosas independientes si todo es valido;
	private:
		Form();
		
		const std::string name_;
		bool signed_;
		const int sGrade_;
		const int eGrade_;
};

std::ostream& operator<<(std::ostream &stream, const Form &form);

#endif
