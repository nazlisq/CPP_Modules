#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a("Oley");
	ScavTrap b("Baba");

	b.attack("kral32");
	b.guardGate();
	a.attack("kral");
	a.beRepaired(4);
	a.takeDamage(0);
}
