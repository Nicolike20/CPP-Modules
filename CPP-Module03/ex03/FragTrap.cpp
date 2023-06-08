#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _name = "Nameless";
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "tenemo " << _hp << " de vida en frag\n";
    std::cout << "tenemo " << _ep << " de enrg en frag\n";
    std::cout << "tenemo " << _ad << " de daño en frag\n";
    std::cout << _name << " FragTrap created\n";
}

FragTrap::FragTrap(std::string name) {
    _name = name;
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << _name << " FragTrap created\n";
}

FragTrap::FragTrap(const FragTrap &copy) {
    *this = copy;
    std::cout << copy._name << " FragTrap copy created\n";
}
	
FragTrap::~FragTrap() {
    std::cout << _name << " FragTrap destroyed\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    _name = other._name;
    _hp = other._hp;
    _ep = other._ep;
    _ad = other._ad;

    std::cout << "Operator = called for " << other._name << "\n";
    return *this;
}

void FragTrap::highFivesGuys() {
    if (_hp == 0) {
        std::cout << _name << " FragTrap requested a high five from the grave...\n";
        return ;
    }
    std::cout << _name << " FragTrap requests high fives all around!!\n";
}