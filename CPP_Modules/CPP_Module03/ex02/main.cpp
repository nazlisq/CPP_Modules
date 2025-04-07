#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a("ugur");
	ScavTrap b("Bocegi");
	FragTrap c("prenses");
	b.attack("prenses123");
	b.guardGate();
	c.highFivesGuys();
	a.attack("kral");
	a.beRepaired(4);
	a.takeDamage(0);
}
