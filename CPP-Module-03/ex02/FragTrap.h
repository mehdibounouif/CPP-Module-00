#ifndef _FLAGTRAP_
#define _FLAGTRAP_

#include <iostream>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(const std::string& name);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string& target);
};

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
  _name = name;
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap " << _name << " Construct called!" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name << " hello guys, high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
  std::cout << "FragTrap " << _name << " attack" ;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << _name << " Destructor called!" << std::endl;
}

#endif