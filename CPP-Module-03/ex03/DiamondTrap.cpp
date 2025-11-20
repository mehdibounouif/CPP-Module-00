/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:16:05 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/20 17:47:10 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(const std::string name):
	 ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
//	 ScavTrap(name),  FragTrap(name), _name(name), ClapTrap(name + "_clap_name")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " constructor called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :
	ClapTrap(obj._name + "_clap_name"), ScavTrap(obj._name),
	FragTrap(obj._name), _name(obj._name)
//	ScavTrap(obj._name), FragTrap(obj._name),
//	ClapTrap(obj._name + "_clap_name") , _name(obj._name)
{
	std::cout << "DiamondTrap " << _name << " Copy constructor called!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is" << this->ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Destructor called!" << std::endl;
}
