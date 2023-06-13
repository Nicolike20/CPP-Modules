#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

	FragTrap f1;
	FragTrap f2("Frag");
	FragTrap f3(f1);
	ScavTrap s1("Scav");
	ClapTrap c1("Clap");

	std::cout << "\n";

	f1.attack("Test");
	f2.attack("You");
	f3.attack("Someone");
	s1.attack("Something");
	c1.attack("No one");

	std::cout << "\n";

	f1.takeDamage(115);
	f2.takeDamage(5);
	f3.takeDamage(10);
	s1.takeDamage(15);
	c1.takeDamage(20);

	std::cout << "\n";

	f1.beRepaired(10);
	f2.beRepaired(10);
	f3.beRepaired(10);
	s1.beRepaired(10);
	c1.beRepaired(10);

	std::cout << "\n";

	f1.highFivesGuys();
	f2.highFivesGuys();
	f3.highFivesGuys();

	std::cout << "\n";

	return 0;
}
