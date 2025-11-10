/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:23:14 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/10 11:24:58 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
