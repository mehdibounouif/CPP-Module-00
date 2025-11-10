/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:51:06 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 10:55:15 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &wep) : weapon(wep)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attack with " << this->weapon.getType() << std::endl;
}
