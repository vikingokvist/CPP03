#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
		this->name = other.name;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " <<  target
		<< ", causing " << 1 << " points of damage!" << std::endl;
		--this->energyPoints;
	}
	else if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hitPoints left" << std::endl;
	}
	else if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energyPoints left" << std::endl;
	}

}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " took " 
	<< amount << " points of damage" << std::endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	--this->energyPoints;
	std::cout << "ClapTrap " << this->name << " repaired their armour by " 
	<< amount << std::endl;
}
