/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:18:21 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/28 10:40:12 by mbounoui         ###   ########.fr       */
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
				std::cout << "Lables must not be empty!" << std::endl;
				std::cout << "Please enter the " << this->fields_name[i] << ":\n/> ";
				std::getline(std::cin, this->info[i]);
			}
		}
	}
	std::cout << "\tContact added sucessfully."<< std::endl;
	std::cout << "\t**************************\n"<< std::endl;
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
