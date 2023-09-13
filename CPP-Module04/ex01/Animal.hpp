#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <string>
# include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal& operator=(const Animal &other);

		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string _type;
};

#endif
