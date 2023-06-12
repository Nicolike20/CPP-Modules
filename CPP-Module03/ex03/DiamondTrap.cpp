#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "Nameless";
    ClapTrap::_name = std::string("Nameless").append("_clap_name");
    _hp = FragTrap::_hp;
    _ep = ScavTrap::_ep;
    _ad = FragTrap::_ad;
    std::cout << FragTrap::_ad << "\n";
    std::cout << "tenemo " << this->FragTrap::_hp << " de vida en diamond\n";
    std::cout << "tenemo " << this->FragTrap::_ep << " de enrg en diamond\n";
    std::cout << _name << " DiamondTrap created\n";
}

DiamondTrap::DiamondTrap(std::string name) {
    _name = name;
    ClapTrap::_name = name.append("_clap_name");
    _hp = FragTrap::_hp;
    _ep = ScavTrap::_ep;
    _ad = FragTrap::_ad;
    std::cout << _name << " DiamondTrap created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
    *this = copy;
    std::cout << copy._name << " DiamondTrap copy created\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << _name << " DiamondTrap destroyed\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
    _name = other._name;
    ClapTrap::_name = other.ClapTrap::_name;
    _hp = other._hp;
    _ep = other._ep;
    _ad = other._ad;

    std::cout << "Operator = called for " << other._name << "\n";
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "Hi! This is " << _name << ", AKA " << ClapTrap::_name << "\n";
}

void DiamondTrap::attack(const std::string& target) {
    this->ScavTrap::attack(target); //por que salen 20 ad?
}