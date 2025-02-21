#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap " << this->name << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {

	std::cout << "ClapTrap " << this->name << " Copy-Constructor called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {

	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " <<  target
		<< ", causing " << 1 << " points of damage!" << std::endl;
		--this->energyPoints;
	}
	else if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no hitPoints left" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energyPoints left" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->hitPoints > amount) {
		this->hitPoints -= amount;
	}
	else if (this->hitPoints > 0) {
		this->hitPoints = 0;
	}
	else {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->energyPoints > 0 && this->hitPoints > 0 && this->hitPoints + amount <= 10) {
		this->hitPoints += amount;
		--this->energyPoints;
		std::cout << "ClapTrap " << this->name << " repaired their armour by " << amount << std::endl;
	}
	else if (this->energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " doesnt have enough energyPoints to repair" << std::endl;
	}
	else if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " can't repair while dead" << std::endl;
	}
}
