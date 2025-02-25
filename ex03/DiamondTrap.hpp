#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		
		virtual ~DiamondTrap();

		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);

		void	whoAmI();
		void	attack(const std::string &target);
};

#endif