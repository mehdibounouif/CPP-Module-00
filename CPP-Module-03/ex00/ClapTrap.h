/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:28:31 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 17:17:23 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_
#define _CLAPTRAP_

#include <iostream>

class ClapTrap
{
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	public:
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &obj);
	ClapTrap(const ClapTrap &obj);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};
#endif
