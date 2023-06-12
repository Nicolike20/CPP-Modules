#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <string>
# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		virtual ~ClapTrap();

		ClapTrap& operator=(const ClapTrap &other);

		virtual void attack(const std::string& target); //xq virtual?
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _ad;
};

#endif