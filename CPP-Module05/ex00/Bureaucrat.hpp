#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

# include <string>
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat &other);
		std::string getName();
		int getGrade();
	private:
		const std::string name_;
		int grade;

};

#endif