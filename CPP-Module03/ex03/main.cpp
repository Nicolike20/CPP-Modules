#include "DiamondTrap.hpp"

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

	/*ScavTrap s1;
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

	s1.beRepaired(10);
	s2.beRepaired(10);
	s3.beRepaired(10);
	c1.beRepaired(10);

	std::cout << "\n";

	s1.guardGate();
	s2.guardGate();
	s3.guardGate();

	std::cout << "\n";*/

	/*FragTrap f1;
	FragTrap f2("Test");
	FragTrap f3(f1);
	ScavTrap s1("Scav");
	ClapTrap c1("Clap");

	std::cout << "\n";

	f1.attack("Test");
	f2.attack("Maming");
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

	std::cout << "\n";*/

	DiamondTrap d1;
	DiamondTrap d2("Test");
	DiamondTrap d3(d2);
	FragTrap f1("Frag");
	ScavTrap s1("Scav");
	ClapTrap c1("Clap");
	
	std::cout << "\n";

	d1.attack("Test"); //not working
	d2.attack("Maming");
	d3.attack("Someone");
	f1.attack("Someone else");
	s1.attack("Something");
	c1.attack("No one");

	std::cout << "\n";


	//TODO: attack no muestra el mensaje correcto
	//TODO: pueden recibir ataque si estan muertos? si esto falla cambiarlo en los anteriores tb
	//TODO: los diamond deberian mostrar su nombre o su nombre_clap_name?
	//TODO: no parece que el problema esté en diamond ni en clap. probar en las otras clases. -> probar cambiando lo de hp a ad en scavtrap
	return 0;
}