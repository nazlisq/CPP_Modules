#include "HumanB.hpp"

HumanB::HumanB(std::string nameTmp) : name(nameTmp)
{
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB() {}


void HumanB::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}