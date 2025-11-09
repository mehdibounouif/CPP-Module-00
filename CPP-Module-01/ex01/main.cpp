/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 09:51:55 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/09 10:58:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 10;
	Zombie *zombies;

	zombies = zombieHorde(N, "Mehdi");

	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}
