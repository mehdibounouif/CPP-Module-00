/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:53:44 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 11:22:35 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

void	HumanB::attack()
{
	std::cout << this->name << " attack with " << this->weapon->getType() << std::endl;
}
void	HumanB::setWeapon(Weapon &wep)
{
	this->weapon = &wep;
}
HumanB::HumanB(std::string name) : weapon(0)
{
	this->name = name;
}


