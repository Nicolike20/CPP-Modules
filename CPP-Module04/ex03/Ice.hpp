#ifndef ICE_HPP_
# define ICE_HPP_

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();

		Ice& &operator=(const Ice &other);

		AMateria* clone() const;
		void use(Icharacter &target);
};

#endif
