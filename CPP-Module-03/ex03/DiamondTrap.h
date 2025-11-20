/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:03:26 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/20 10:26:07 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_
#define _DIAMONDTRAP_

#include <iostream>
#include "ScavTrap.h" 
#include "FragTrap.h"
#include "ClapTrap.h"

class	DiamondTrap : public ScavTrap , public FragTrap
{
	std::string _name;
	public:
		DiamondTrap(const std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &obj);
		DiamondTrap(const DiamondTrap &obj);
		void	whoAmI();
};


#endif
