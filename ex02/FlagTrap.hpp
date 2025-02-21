#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);

		virtual ~FlagTrap();

		FlagTrap(const FlagTrap &other);
		FlagTrap	&operator=(const FlagTrap &other);

		void	highFivesGuys(void);
};

#endif