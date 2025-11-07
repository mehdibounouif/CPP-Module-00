/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:47 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/07 09:51:23 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string prompt;
	PhoneBook phone;
	phone.prompt();
	while (std::getline(std::cin, prompt))
	{
		if (std::cin.eof())
		{
			std::cout << "\e[1;32mSee you homie.\033[0m" << std::endl;
			exit(0);
		}
		else if (!prompt.compare("ADD"))
			phone.seter();
		else if (!prompt.compare("SEARCH"))
			phone.geter();
		else if (!prompt.compare("EXIT"))
		{
			std::cout << "\e[1;32mSee you homie.\033[0m" << std::endl;
			return (1);
		}
		else
		{
			prompt.clear();
			phone.prompt();
			continue;
		}
		phone.prompt();
	}
}
