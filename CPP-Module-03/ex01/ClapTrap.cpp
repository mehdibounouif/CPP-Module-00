/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/21 09:35:40 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name):
	_name(name), _attackDamage(0), _energyPoints(10), _hitPoints(10)
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

ClapTrap::ClapTrap(const ClapTrap &obj) :
	 _name(obj._name), _attackDamage(obj._attackDamage),
	 _energyPoints(obj._energyPoints), _hitPoints(obj._hitPoints)
{
	std::cout << "ClapTrap " << _name
		<< " Copy Constructor called!" << std::endl;
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
		_energyPoints--;
		std::cout << _name << " Attack " << target 
			<< " causing " << _attackDamage 
			<< " points of damage" << std::endl;
	}
}
