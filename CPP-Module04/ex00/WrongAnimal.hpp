#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal &other);

		void makeSound() const;
		std::string getType() const;
	protected:
		std::string _type;
};

#endif
