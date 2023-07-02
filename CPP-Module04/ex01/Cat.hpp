#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat& operator=(const Cat &other);

		void makeSound() const;
	
	private:
		Brain *_brain; //xq puntero?;
};

#endif
