#pragma once
#include <iostream>

class Zombie{
	public:
		void announce(void);
		Zombie(std::string name);
		Zombie();
		~Zombie();
	private:
		std::string name;
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );