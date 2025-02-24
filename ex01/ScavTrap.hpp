#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool isGuardingTheGate;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap();

		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);

		void	guardGate();
		virtual void	attack(const std::string &target);

};

#endif