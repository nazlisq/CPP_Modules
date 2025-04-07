#include "zombie.hpp"
Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " has been destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name){
    this->name = name;
	std::cout << "Zombie " << this->name << " created" << std::endl;
}
