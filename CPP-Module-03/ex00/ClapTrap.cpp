/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/18 19:08:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string name) :
 _name(name),_attack_damage(0), _energy_points(10), _hit_points(10)
{
  std::cout << "Defualt Constructor called!\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
  std::cout << _name << " Destroyed! " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (_hit_points <= 0)
    std::cout << _name << "Cannot attack (no hit points)!" << std::endl;
  else if (_energy_points <= 0)
    std::cout << _name << "Cannot attack (no Energy points!" << std::endl;
  else
  {
    _energy_points--;
    std::cout << _name << target 
    << " causing " << _attack_damage 
    << " points of damage " << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  _hit_points -= amount;
  if (_hit_points <= 0)
    std::cout << _name << "is already dead!" << std::endl;
  else 
    std::cout << _name << " take " << amount << " points of damage!" << std::endl;  
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (_energy_points <= 0)
    std::cout << _name << " cannot repair (no Energy points)!" << std::endl;
  else if (_hit_points <= 0)
    std::cout << _name << " cannot repair (no Hit points)!" << std::endl;
  else
  {
    _hit_points += amount;
    _energy_points--;
    std::cout << _name << " repairs itself recovering "
    << amount << " points" << std::endl;
  }
}