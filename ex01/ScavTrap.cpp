#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), isGuardingTheGate(false) {

	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "ScavTrap " << this->name << " constructed!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->isGuardingTheGate = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {

	*this = other;
	std::cout << "ScavTrap " << this->name << " Copy-Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {

	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		this->isGuardingTheGate = other.isGuardingTheGate;
	}
	return (*this);
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {

	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ScavTrap " << this->name << " kamekamehas " <<  target
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
