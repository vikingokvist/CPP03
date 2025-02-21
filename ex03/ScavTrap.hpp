#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap();

		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);

		void	guardGate();

	protected:
		unsigned int	energyPoints;
		void	attack(const std::string &target);

};

#endif