#ifndef AANIMAL_HPP_
# define AANIMAL_HPP_

# include <string>
# include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal &other);

		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif
