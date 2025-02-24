#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name") {

	this->name = "defaultDT";
	this->hitPoints = 0;
	this->energyPoints = 0;
	this->attackDamage = 0;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {

	*this = other;
	std::cout << "DiamondTrap " << this->name << " Copy-Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << this->name << " Contructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {

	if (this != &other) {

		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI() {

	std::cout << "I am " << this->name << ", my ClapTrap name is " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {

	ScavTrap::attack(target);
}


