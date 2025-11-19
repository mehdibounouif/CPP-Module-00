
#ifndef _SCAVTRAP_
#define _SCAVTRAP_

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif