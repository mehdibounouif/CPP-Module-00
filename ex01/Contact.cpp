/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:57:25 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/07 09:51:58 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string Contact::fields[] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact() {}

void	Contact::seter(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter " << this->fields[i] << ": ";
		std::getline(std::cin, this->info[i]);
		while (!std::cin || this->info[i].empty())
		{
			if (std::cin.eof())
				return;
			if (this->info[i].empty())
			{
				info[i].clear();
				std::cout << "\e[1;31mLables must not be empty!\033[0m" << std::endl;
				std::cout << "Please enter " << this->fields[i] << ": ";
				std::getline(std::cin, this->info[i]);
			}
		}
	}
	std::cout << "\t\e[1;32mContact added sucessfully.\033[0m"<< std::endl;
	std::cout << "\t\e[1;32m**************************\033[0m\n"<< std::endl;
}

void	Contact::geter_one_contact()
{
	for (int i = 0; i < 5; i++)
		std::cout << "- " << this->fields[i] << ": " << this->info[i] << std::endl;
}

void	Contact::geter(int index)
{
	std::cout << '|' << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << '|';
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|\n";
}
