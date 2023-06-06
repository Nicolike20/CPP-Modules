#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("Nameless")
    , _hp(10)
    , _ep(10)
    , _ad(0) {
    std::cout << _name << " ClapTrap created\n";
}

ClapTrap::ClapTrap(std::string name)
    : _name(name)
    , _hp(10)
    , _ep(10)
    , _ad(0) {
    std::cout << _name << " ClapTrap created\n";
    }

ClapTrap::ClapTrap(const ClapTrap &copy) {
    *this = copy;
    std::cout << "Copy of " << copy._name << " ClapTrap created\n";
}

ClapTrap::~ClapTrap() {
    std::cout << _name << " ClapTrap destroyed\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    _name = other._name;
    _hp = other._hp;
    _ep = other._hp;
    _ad = other._ad;

    std::cout << "Operator = called for " << other._name << "\n";
    return *this;
}


//he tenido que cambiar algunos mensajes, porque ahora hay distintos tipos de robots y no solo claptraps
void ClapTrap::attack(const std::string& target) {
    if (_hp == 0) {
        std::cout << _name << " ClapTrap can't attack, because it's dead!\n";
    } else if (_ep == 0) {
        std::cout << _name << " ClapTrap can't attack, because it has no Energy Points!\n";
    } else {
        --_ep;
        std::cout << _name << " ClapTrap attacks " << target << ", causing " << _ad << " points of damage!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hp == 0) {
        std::cout << _name << " ClapTrap can't take damage, because it's already dead!\n";
        return ;
    }
    _hp -= amount;
    if (_hp <= 0) {
        std::cout << _name << " ClapTrap takes " << amount << " points of damage, and is now dead!\n";
        _hp = 0;
        return ;
    }
    std::cout << _name << " ClapTrap takes " << amount << " points of damage, and is left with " << _hp << " Hit Points!\n";
}


void ClapTrap::beRepaired(unsigned int amount) {
    if (_hp == 0) {
        std::cout << _name << " ClapTrap can't repair itself, because it's aready dead!\n";
    } else if (_ep == 0){
        std::cout << _name << " ClapTrap can't repair itself, because it has no Energy Points!\n";
    } else {
        _hp += amount;
        --_ep;
        std::cout << _name << " ClapTrap repairs itself, and now has " << _hp << " Hit Points!\n";
    }
}