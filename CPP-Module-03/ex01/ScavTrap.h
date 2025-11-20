
#ifndef _SCAVTRAP_
#define _SCAVTRAP_

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap &obj);
		ScavTrap(const ScavTrap &obj);
		void attack(const std::string& target);
		void guardGate();
};

#endif
