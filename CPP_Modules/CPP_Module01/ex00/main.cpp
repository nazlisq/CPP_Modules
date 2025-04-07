#include "zombie.hpp"
int main()
{
	Zombie firstzombie("Arda");
	std::cout << "Arda has been created for stack" << std::endl;
	firstzombie.announce();
	Zombie *thirdzombie = newZombie("Turan");
	std::cout << "Turan has been created for heap" << std::endl;
	thirdzombie->announce();
	delete(thirdzombie);
	randomChump("Nazli");
}