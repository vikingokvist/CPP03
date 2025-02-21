#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);

		virtual ~FragTrap();

		FragTrap(const FragTrap &other);
		FragTrap	&operator=(const FragTrap &other);

		void	highFivesGuys(void);

	protected:
		unsigned int	attackDamage;
		unsigned int	hitPoints;
};

#endif