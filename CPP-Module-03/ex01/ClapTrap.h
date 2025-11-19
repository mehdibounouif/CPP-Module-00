/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:28:31 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 17:18:16 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_
#define _CLAPTRAP_

#include <iostream>

class ClapTrap
{
  protected:
    std::string _name;
    unsigned int _attackDamage;
    unsigned int _energyPoints;
    unsigned int _hitPoints;
  public:
    ClapTrap(const std::string& name);
    ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &obj);
	ClapTrap(const ClapTrap &obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif // !_CLAPTRAP_
