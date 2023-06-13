#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "Nameless";
    _hp = 100;
    _ep = 50;
    _ad = 20;
//    std::cout << "tenemo " << _hp << " de vida en scav\n";
//    std::cout << "tenemo " << _ep << " de enrg en scav\n";
//    std::cout << "tenemo " << _ad << " de daño en scav\n";
    std::cout << _name << " ScavTrap created\n";
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    _hp = 100;
    _ep = 50;
    _ad = 20;
    std::cout << _name << " ScavTrap created\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) { //ta bien??
    *this = copy;
    std::cout << copy._name << " ScavTrap copy created\n";
}

ScavTrap::~ScavTrap() {
    std::cout << _name << " ScavTrap destroyed\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    _name = other._name;
    _hp = other._hp;
    _ep = other._hp;
    _ad = other._ad;

    std::cout << "Operator = called for " << other._name << "\n";
    return *this;
}
		
void ScavTrap::attack(const std::string& target) {
	if (_hp == 0) {
		std::cout << _name << " ScavTrap can't attack, because it's dead!\n";
	} else if (_ep == 0) {
		std::cout << _name << " ScavTrap can't attack, because it has no Energy Points!\n";
	} else {
		--_ep;
		std::cout << _name << " ScavTrap attacks " << target << ", causing " << _ad << " points of damage!\n";
    }
}

void ScavTrap::guardGate() {
	if (_hp == 0) {
		std::cout << _name << " ScavTrap can't be in Gate keeper mode, because it's dead!\n";
		return ;
	}
	std::cout << _name << " ScavTrap is now in Gate keeper mode!\n";
}
