#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap() {

	std::cout << "FlagTrap Default Destructor Called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {

	std::cout << "FlagTrap " << this->name << " constructed!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other) {

	std::cout << "FlagTrap " << this->name << " Copy-Constructor called" << std::endl;
}

FlagTrap::~FlagTrap() {

	std::cout << "FlagTrap "<< this->name << " Destructor called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap &other) {

	if (this != &other) {

		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	FlagTrap::highFivesGuys(void) {

	std::cout << "Flagtrap " << this->name << " asks politely if you'd like to high five ?! :D" << std::endl;
}