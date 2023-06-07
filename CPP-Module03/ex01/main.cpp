#include "ScavTrap.hpp"

int main(void) {

	//TODO: cambiar main y probar mas cosas;

	/*ClapTrap c1;
	ClapTrap c2("Clapini");
	ClapTrap c3(c2);
	std::cout << "\n";

	c1.attack("Test");
	c2.attack("Maming");
	c3.attack("Yuping");
	std::cout << "\n";

	c1.takeDamage(115);
	c2.takeDamage(5);
	c3.takeDamage(1);
	std::cout << "\n";

	c1.beRepaired(115);
	c2.beRepaired(1);
	c3.beRepaired(5);
	std::cout << "\n";

	c2.attack("Spam3");
	c2.attack("Spam4");
	c2.attack("Spam5");
	c2.attack("Spam6");
	c2.attack("Spam7");
	c2.attack("Spam8");
	c2.attack("Spam9");
	c2.attack("Spam10");
	c2.attack("Spam11");
	std::cout << "\n";*/

	ScavTrap s1;
	ScavTrap s2("Test");
	ScavTrap s3(s1);
	ClapTrap c1("Clap");

	std::cout << "\n";

	s1.attack("Test");
	s2.attack("Maming");
	s3.attack("Someone");
	c1.attack("Something");

	std::cout << "\n";

	s1.takeDamage(115);
	s2.takeDamage(5);
	s3.takeDamage(10);
	c1.takeDamage(15);

	std::cout << "\n";

	s1.beRepaired(10); //esto tiene el mensaje de los claptrap...
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
