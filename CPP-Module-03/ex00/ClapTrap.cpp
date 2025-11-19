/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 08:24:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name) :
 _name(name), _hitPoints(10), _energyPoints(10),_attackDamage(0)
{
  std::cout << _name << " Constructed!\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << _name << " Destroyed! " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (_hitPoints <= 0)
    std::cout << _name << " Cannot attack (no hit points)!" << std::endl;
  else if (_energyPoints <= 0)
    std::cout << _name << " Cannot attack (no Energy points!" << std::endl;
  else
  {
    _energyPoints--;
    std::cout << _name << " Attack " << target 
    << " causing " << _attackDamage 
    << " points of damage " << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hitPoints <= 0)
    std::cout << _name << "is already dead!" << std::endl;
  else
  {
    _hitPoints -= amount;
    std::cout << _name << " take " << amount << " points of damage!" << std::endl;  
    if (_hitPoints <= 0)
      std::cout << "is dead!" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (_energyPoints <= 0)
    std::cout << _name << " cannot repair (no Energy points)!" << std::endl;
  else if (_hitPoints <= 0)
    std::cout << _name << " cannot repair (no Hit points)!" << std::endl;
  else
  {
    _hitPoints += amount;
    _energyPoints--;
    std::cout << _name << " repairs itself recovering "
    << amount << " points" << std::endl;
  }
}