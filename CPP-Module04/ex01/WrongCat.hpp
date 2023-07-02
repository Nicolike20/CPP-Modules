#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		void makeSound(); //consttt???
};

#endif
