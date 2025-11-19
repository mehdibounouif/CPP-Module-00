/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 17:50:57 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name):
  _name(name), _attackDamage(20), _energyPoints(50), _hitPoints(100)
{
  std::cout << "ClapTrap " << _name << " Constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << _name << " Destroyed!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
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
