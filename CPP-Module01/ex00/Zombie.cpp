#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
    std::cout << "Created zombie " << _name << "\n";
}

Zombie::~Zombie() {
    std::cout << "Destroyed zombie " << _name << "\n";
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}