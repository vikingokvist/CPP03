#include "ClapTrap.hpp"

int		main(void)
{
	std::string name = "JOHNNY";
	const std::string &enemy = "EVIL";
	ClapTrap johnny(name);

	johnny.attack(enemy);
	johnny.takeDamage(5);
	johnny.beRepaired(1);
	johnny.attack(enemy);


	return (0);
}