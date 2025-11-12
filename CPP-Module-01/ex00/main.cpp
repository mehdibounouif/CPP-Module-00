/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 09:14:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/12 10:02:24 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	randomChump("mehdi");
	Zombie *zombie = newZombie("marwan");
	zombie->announce();
	delete zombie;
	return (0);
}
