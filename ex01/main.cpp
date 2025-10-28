/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:08:27 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/28 10:40:54 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int	main()
{
	std::string prompt;
	PhoneBook phone;
	phone.display();
	while (std::getline(std::cin, prompt))
	{
		if (std::cin.eof())
		{
			std::cout << "Exiting phonebook." << std::endl;
			exit(0);
		}
		else if (!prompt.compare("ADD"))
			phone.seter();
		else if (!prompt.compare("SEARCH"))
			phone.geter();
		else if (!prompt.compare("EXIT"))
		{
			std::cout << "See you homie." << std::endl;
			return (0);
		}
		else
		{
			prompt.clear();
			phone.display();
			continue;
		}
		phone.display();
	}
}
