#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <string>
# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		int _hp; //cambiar estos a nombre completo?;
		int _ep; //inicializar estos aqui?;
		int _ad;
};

#endif