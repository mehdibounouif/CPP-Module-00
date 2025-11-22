/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:27:28 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/22 11:08:37 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name) :
	_name(name), _hitPoints(10), _energyPoints(10),_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " Constructed!" << std::endl;
}

ClapTrap::ClapTrap(){}

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
	 _name(obj._name), _hitPoints(obj._hitPoints),
	_energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "ClapTrap " << _name
		<< " Copy Constructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout <<  "ClapTrap " << _name
			<< " Cannot attack (no hit points)!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout <<  "ClapTrap " << _name
			<< " Cannot attack (no Energy points)!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout <<  "ClapTrap " << _name << " Attacks " << target
			<< " causing " << _attackDamage 
			<< " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "claptrap " << _name << " is already dead!" << std::endl;
	else
	{
		_hitPoints -= amount;
		std::cout  << "claptrap " << _name << " takes " << amount << " points of damage!" << std::endl;  
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << "claptrap " << _name << " cannot repair (no Energy points)!" << std::endl;
	else if (_hitPoints <= 0)
		std::cout << "claptrap " << _name << " cannot repair (no Hit points)!" << std::endl;
	else
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "claptrap " << _name << " repairs itself recovering "
			<< amount << " points" << std::endl;
	}
}
