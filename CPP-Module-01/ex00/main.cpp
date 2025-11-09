/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 09:14:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/09 11:12:26 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	randomChump("mehdi");
	Zombie *zombie = newZombie("taha");
	zombie->announce();
	delete zombie;
	return (0);
}
