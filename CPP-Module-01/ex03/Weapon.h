/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:41:58 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 11:24:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_
#define _WEAPON_

#include <iostream>

class Weapon
{
	std::string type;
	public:
	Weapon(std::string type);
	std::string getType();
	void setType(std::string type);
};

#endif
