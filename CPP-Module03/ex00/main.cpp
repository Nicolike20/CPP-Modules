#include "ClapTrap.hpp"

int main(void) {

	//new?;
	//no use of ep?;
	//cambiar los nombres lol;
	//CAMBIAR LOS ATRIBUTOS INT A UNSIGNED INT; -> check si está bien hecho fr, y cambiarlo en ex01

	ClapTrap c1;
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
	std::cout << "\n";


	return 0;
}