/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 09:52:04 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/09 10:59:07 by mbounoui         ###   ########.fr       */
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
		void setName(std::string name);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
