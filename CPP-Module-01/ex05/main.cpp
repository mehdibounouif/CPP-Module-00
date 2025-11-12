/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:45:32 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/12 09:38:49 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"ERROR", "WARNING", "DEBUG", "INFO"};

	void	(Harl::*functions[4])() = 
	{
		&Harl::error,
		&Harl::warning,
		&Harl::debug,
		&Harl::info,
	};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*functions[i])();
}

int	main()
{
	Harl h;
	h.complain("DEBUG");
	h.complain("ERROR");
	h.complain("WARNING");
	h.complain("INFO");
}
