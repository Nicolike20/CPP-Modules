#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade); //const std::string &name?
		~Bureaucrat(); //añadir constructor con parametros

		Bureaucrat& operator=(const Bureaucrat &other);
		//sobrecarga <<?

		const std::string getName() const;
		int getGrade() const;
		void upgrade();
		void downgrade();

		class GradeTooHighException : public std::exception {
			public: const char* what() const throw(); //_NOEXCEPT?
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const throw(); //_NOEXCEPT?
		};
	private:
		Bureaucrat();
	
		const std::string name_;
		int grade_;

};

#endif