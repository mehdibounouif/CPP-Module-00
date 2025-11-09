/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 09:14:27 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/09 11:12:10 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MEHDI_
#define _MEHDI_

#include <iostream>

class Zombie
{
	std::string name;
	public:
		void announce();
		Zombie(std::string name);
		~Zombie(void);
};

void	randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif
