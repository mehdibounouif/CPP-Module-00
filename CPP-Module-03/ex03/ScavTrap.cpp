/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 09:24:01 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/22 11:10:06 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"

void  ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << _name << " Cannot attack (no hit points)!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " Cannot attack (no energy points)!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " viciously attacks "
			<< target << ", causing " << _attackDamage
			<< " points of damage!\n";
	}
}

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap " << _name
		<< " Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name
		<< " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destractor called!" << std::endl;
}
