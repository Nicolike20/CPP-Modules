#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, const Weapon &weapon) : weapon_(weapon) {
    name_ = name;
}

HumanA::~HumanA() {}

void HumanA::attack(){
    std::cout << name_ << " attacks with their " << weapon_.getType() << "\n";
}

//TODO entender todo esto mejor