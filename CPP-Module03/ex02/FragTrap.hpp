#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const ScavTrap &copy);
		~FragTrap();

		FragTrap& operator=(const FragTrap &other);

		void highFivesGuys();
	private:
};

#endif