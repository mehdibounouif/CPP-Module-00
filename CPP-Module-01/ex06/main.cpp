/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:22:40 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/11 13:41:14 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include <cstdlib>

void	Harl::complain(std::string level)
{
	int	flag;

	std::string levels[4] = {"ERROR", "WARNING", "DEBUG", "INFO"};
	
	void	(Harl::*functions[4])() =
	{
		&Harl::error,
		&Harl::warning,
		&Harl::debug,
		&Harl::info,
	};

	flag = -1;
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			flag = i;

	switch (flag)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			(this->*functions[flag])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	};
}

int	main(int c, char **v)
{
	Harl h;
	if (c != 2)
		return (EXIT_FAILURE);
	h.complain(v[1]);
}
