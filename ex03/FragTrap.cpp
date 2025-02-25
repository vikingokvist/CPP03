#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {

	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "FragTrap " << this->name << " constructed!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {

	std::cout << "FragTrap " << this->name << " Copy-Constructor called" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap "<< this->name << " Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {

	if (this != &other) {

		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "Fragtrap " << this->name << " asks politely if you'd like to high five ?! :D" << std::endl;
}
