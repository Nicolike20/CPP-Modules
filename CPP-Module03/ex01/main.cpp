#include "ScavTrap.hpp"

int main(void) {

	ScavTrap s1;
	ScavTrap s2("Scav");
	ScavTrap s3(s1);
	ClapTrap c1("Clap");

	std::cout << "\n";

	s1.attack("Test");
	s2.attack("Someone");
	s3.attack("Something");
	c1.attack("You");

	std::cout << "\n";

	s1.takeDamage(115);
	s2.takeDamage(5);
	s3.takeDamage(10);
	c1.takeDamage(15);

	std::cout << "\n";

	s1.beRepaired(10);
	s2.beRepaired(10);
	s3.beRepaired(10);
	c1.beRepaired(10);

	std::cout << "\n";

	s1.guardGate();
	s2.guardGate();
	s3.guardGate();

	std::cout << "\n";

	return 0;
}
