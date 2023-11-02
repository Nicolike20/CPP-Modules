#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(); //private? no tiene sentido que sea publica
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade); //const std::string &name?
		~Bureaucrat(); //añadir constructor con parametros

		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string getName() const;
		int getGrade() const;
		void upgrade();
		void downgrade();
	private:
		const std::string name_;
		int grade_;

};

#endif