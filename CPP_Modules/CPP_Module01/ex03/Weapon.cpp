#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::~Weapon(){};

const std::string &Weapon::getType(void)
{
    return this->type;
}