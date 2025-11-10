/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:41:55 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 11:15:24 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HB_
#define _HB_

#include <iostream>
#include "Weapon.h"

class HumanB
{
	Weapon *weapon;
	std::string name;
	public:
		void attack();
		void	setWeapon(Weapon &wep)
		{
			this->weapon = &wep;
		}
		HumanB(std::string name) : weapon(0)
		{
			this->name = name;
		}
};

#endif
