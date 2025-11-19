/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 09:03:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name):
  _name(name), _attackDamage(20), _energyPoints(50), _hitPoints(100)
{
  std::cout << _name << " Constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << _name << " Destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (_hitPoints <= 0)
    std::cout << _name << " Cannot repair (no hit points)" << std::endl;
  else if (_energyPoints <= 0)
    std::cout << _name << " Cannot repair (no energy points)" << std::endl;
  else
  {
    _energyPoints--;
    _hitPoints += amount;
    std::cout << _name
    << " repairs itself recovering "
    << amount << " points" << std::endl;
  }
}


void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hitPoints <= 0)
    std::cout << _name << " is already dead!" << std::endl;
  else
  {
    _hitPoints -= amount;
    std::cout << _name << " take " << amount << " points of damage!" << std::endl;  
  }
}

void ClapTrap::attack(const std::string& target)
{
  if (_hitPoints <= 0)
    std::cout << _name << " Cannot attack (no hit points)!" << std::endl;
  else if (_energyPoints <= 0)
    std::cout << _name << " Cannot attack (no energy points)!" << std::endl;
  else
  {
    std::cout << _name << " Attack " << target 
    << " causing " << _attackDamage 
    << " points of damage " << std::endl;
  }
}