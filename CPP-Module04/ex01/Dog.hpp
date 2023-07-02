#ifndef DOG_HPP_
# define DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		void makeSound() const;
};

#endif
