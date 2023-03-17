#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    type_ = type;
}

Weapon::~Weapon() {};

std::string Weapon::getType() const{ //cosnt va ahi o detras de getType()? referencia?
    return (type_);
}

void Weapon::setType(std::string type) {
    type_ = type;
}