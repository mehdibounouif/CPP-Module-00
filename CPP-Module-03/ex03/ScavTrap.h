/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 09:23:55 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/22 11:05:47 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SCAVTRAP_
#define _SCAVTRAP_

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap &obj);
		ScavTrap(const ScavTrap &obj);
		void attack(const std::string& target);
		void guardGate();
};

#endif
