#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		virtual ~ScavTrap();

		ScavTrap& operator=(const ScavTrap &other);
		
		virtual void attack(const std::string& target);
		void guardGate();
	protected:
};

#endif
