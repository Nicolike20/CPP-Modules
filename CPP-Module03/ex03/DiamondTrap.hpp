#ifndef DIAMOND_TRAP_
# define DIAMOND_TRAP_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
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


 //si le doy la vuelta a la herencia, diamond pilla todo lo del otro, funciona pa que ponga 30 pero no arregla el problema.