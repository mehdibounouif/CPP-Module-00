/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:41:53 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 11:15:53 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HA_
#define _HA_

#include <iostream>
#include "Weapon.h"

class HumanA
{
	Weapon &weapon;
	std::string name;
	public:
		void	attack();
		HumanA(std::string name, Weapon &wep);
};
#endif
