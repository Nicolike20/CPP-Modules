#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap d1;
	DiamondTrap d2("Diamond");
	DiamondTrap d3(d2);
	FragTrap f1("Frag");
	ScavTrap s1("Scav");
	ClapTrap c1("Clap");
	
	std::cout << "\n";

	d1.attack("Test");
	d2.attack("You");
	d3.attack("Someone");
	f1.attack("Someone else");
	s1.attack("Something");
	c1.attack("No one");

	std::cout << "\n";

	d1.takeDamage(115);
	d2.takeDamage(5);
	d3.takeDamage(10);
	f1.takeDamage(15);
	s1.takeDamage(20);
	c1.takeDamage(25);

	std::cout << "\n";

	d1.beRepaired(10);
	d2.beRepaired(10);
	d3.beRepaired(10);
	f1.beRepaired(10);
	s1.beRepaired(10);
	c1.beRepaired(10);

	std::cout << "\n";

	d1.whoAmI();
	d2.whoAmI();
	d3.whoAmI();

	std::cout << "\n";
	return 0;
}
