#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap &other);
		
		void attack(const std::string& target);
		void guardGate();
	private:
};

#endif
