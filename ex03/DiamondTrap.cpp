#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {

	this->name = name;
	std::cout << "DiamondTrap " << this->name << " Contructor called" << std::endl;

}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {

	std::cout << "DiamondTrap " << this->name << " Copy-Constructor called" << std::endl;
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

	std::cout << "I am " << this->name << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {

	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " stomps " <<  target
		<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
		--this->energyPoints;
	}
	else if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no hitPoints left" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energyPoints left" << std::endl;
	}
}

/* 
	std::string	name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		
		~DiamondTrap();

		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);

		void	whoAmI();
		void	attack(const std::string &target);

}; */