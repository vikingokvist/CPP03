
#include "DiamondTrap.hpp"

int		main(void)
{
	std::string nameSteve = "STEVE";
	std::string nameHerobrine = "HEROBRINE";
	std::string nameVillager = "VILLAGER";
	std::string diamondName = "DIAMONDS";
	ClapTrap steve(nameSteve);
	ScavTrap herobrine(nameHerobrine);
	FragTrap villager(nameVillager);
	DiamondTrap diamond(diamondName);

	std::cout << std::endl;

	steve.attack("HEROBRINE");
	steve.takeDamage(5);
	steve.beRepaired(1);

	std::cout << std::endl;

	herobrine.attack("STEVE");
	herobrine.guardGate();

	std::cout << std::endl;

	villager.highFivesGuys();

	std::cout << std::endl;
	return (0);
}