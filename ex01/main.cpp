#include "ScavTrap.hpp"

int		main(void)
{
	std::string nameSteve = "STEVE";
	std::string nameHerobrine = "HEROBRINE";
	ClapTrap steve(nameSteve);
	ScavTrap herobrine(nameHerobrine);


	std::cout << std::endl;

	steve.attack("HEROBRINE");
	steve.takeDamage(5);
	steve.beRepaired(1);

	std::cout << std::endl;

	herobrine.attack("STEVE");
	herobrine.guardGate();
	
	std::cout << std::endl;
	return (0);
}