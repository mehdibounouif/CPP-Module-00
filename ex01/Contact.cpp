/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:18:21 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/28 10:55:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

std::string Contact::fields_name[] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		this->info[i] = std::string();
}

int	Contact::seter(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter the " << this->fields_name[i] << ":\n/> ";
		std::getline(std::cin, this->info[i]);
		while (!std::cin || this->info[i].empty())
		{
			if(std::cin.eof())
				exit(1);
			if (this->info[i].empty())
			{
				this->info[i].clear();
				std::cout << "\e[1;31mLables must not be empty!\033[0m" << std::endl;
				std::cout << "Please enter the " << this->fields_name[i] << ":\n/> ";
				std::getline(std::cin, this->info[i]);
			}
		}
	}
	std::cout << YELLOW << "\t\e[1;32mContact added sucessfully.\033[0m"<< std::endl;
	std::cout << YELLOW << "\t\e[1;32m**************************\033[0m\n"<< std::endl;
	return (1);
}

void	Contact::geter(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|\n";
}
