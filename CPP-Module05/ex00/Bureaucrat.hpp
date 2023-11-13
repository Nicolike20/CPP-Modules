#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string &name, int grade); //const std::string &name? -> por que?
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string getName() const;
		int getGrade() const;
		void upgrade();
		void downgrade();

		class GradeTooHighException : public std::exception {
			public: const char* what() const _NOEXCEPT; //throw()? -> por que?
		};
		class GradeTooLowException : public std::exception {
			public: const char* what() const _NOEXCEPT; //throw()?
		};
	private:
		Bureaucrat();
	
		const std::string name_;
		int grade_;

};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &br); //esto aqui o fuera de la clase? -> por que?

#endif