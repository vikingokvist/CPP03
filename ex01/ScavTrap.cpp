#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "ScavTrap " << this->name << " constructed!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {

	std::cout << "ScavTrap " << this->name << " copy-constructed" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {

	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {

	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " <<  target
		<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
		--this->energyPoints;
	}
	else if (hitPoints == 0) {
		std::cout << "ScavTrap " << this->name << " has no hitPoints left" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "ScavTrap " << this->name << " has no energyPoints left" << std::endl;
	}
}
