/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 09:27:45 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/08 13:34:59 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.annouce();
}
