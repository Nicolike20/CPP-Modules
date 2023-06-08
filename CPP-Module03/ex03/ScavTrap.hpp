#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(); //virtual?

		ScavTrap& operator=(const ScavTrap &other);
		
		void attack(const std::string& target); //virtual? const?
		void guardGate();
	protected: //private?;
};

#endif
