/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:06:40 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/29 07:56:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::display_all_contacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		PhoneBook::contacts[i].geter(i + 1);
	}
}

void	PhoneBook::display_lables(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	PhoneBook::prompt(void)
{
	std::cout << "\n\t\e[1;33mHow i can serve you?\033[0m" << std::endl;
	std::cout << "\t\e[1;33m********************\033[0m\n" << std::endl;
	std::cout << "- To add new contact type     \e[1;34m\"ADD\"\033[0m" << std::endl;
	std::cout << "- To search for contact type \e[1;32m\"SEARCH\"\033[0m" << std::endl;
	std::cout << "- To exit type                \e[1;33m\"EXIT\"\033[0m" << std::endl;
	std::cout << "\n/> ";
}

void	PhoneBook::geter(void)
{
	if (!this->index)
	{
		std::cout << "You have no contacts." << std::endl;
		return ;
	}
	std::string input;
	while (1)
	{
		std::cout << "Enter contact's index that you want to see [0 => 8]." << std::endl;
		std::cout << "/> ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(1);
		if ((std::atoi(input.c_str()) - 1) > this->index)
		{
			input.clear();
			std::cout << "You have only " << this->index << " contacts." << std::endl;
		}
		else if (std::atoi(input.c_str()) <= 0)
		{
			input.clear();
			std::cout << "Range of index from 1 to 8." << std::endl;
		}
		else if (input.empty())
		{
			input.clear();
			std::cout << "Please enter a valid input." << std::endl;
		}
		else
			break;
	}
	int	index = std::atoi(input.c_str());
	this->display_lables();
	this->contacts[index - 1].geter(index);
	std::cout << "|-------------------------------------------|" << std::endl;
	return ;
}

void	PhoneBook::seter(void)
{
	std::string input;
	if (this->index < 7)
	{
		this->contacts[this->index].seter();
		this->index++;
	}
	else
	{
		std::cout << "\nThis is your all contact :" << std::endl;
		this->display_lables();
		this->display_all_contacts();
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "Do you want me to repleace 8th contact with new contact (Y or N) ?" << std::endl;
		while (true)
		{
			std::cout << "/> ";
			std::getline(std::cin, input);
			if (!input.compare("Y"))
				this->contacts[this->index].seter();
			else if (!input.compare("N"))
				std::cout << "No Update.";
			else
			{
				std::cout << "Please enter (Y or N): " << std::endl;
				continue;
			}
			break;
		}
	}
	return ;
}
