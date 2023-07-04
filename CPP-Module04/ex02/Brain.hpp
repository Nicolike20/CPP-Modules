#ifndef BRAIN_HPP_
# define BRAIN_HPP_

# include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		Brain& operator=(const Brain &other);

		std::string _ideas[100];
	private:
};

#endif
