#ifndef DIAMOND_TRAP_
# define DIAMOND_TRAP_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap { //si le doy la vuelta a la herencia, diamond pilla todo lo del otro
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap &other);

		void whoAmI();
		void attack(const std::string& target);
	private:
		std::string _name;
};

#endif
