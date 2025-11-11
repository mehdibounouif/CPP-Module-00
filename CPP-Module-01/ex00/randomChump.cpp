/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 09:27:45 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/11 14:09:25 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
