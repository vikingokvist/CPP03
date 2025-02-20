#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		unsigned int	hitPoints; //health
		unsigned int	energyPoints;
		unsigned int	attackDamage; //when attacked it loses this
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);

		ClapTrap &operator=(const ClapTrap &other);

		void	attack(const std::string &target); // attackDamage--
		void	takeDamage(unsigned int amount); //	hitPoints - attackDamage && energyPoints--
		void	beRepaired(unsigned int amount); // hitPoints++ & energPoints--

};

#endif