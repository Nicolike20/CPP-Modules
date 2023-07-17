#ifndef DOG_HPP_
# define DOG_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog& operator=(const Dog &other);

		void makeSound() const;
		Brain* getBrain() const;
	
	private:
		Brain *_brain;
};

#endif
