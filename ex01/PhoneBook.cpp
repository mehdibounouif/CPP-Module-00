/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:06:40 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/27 11:16:10 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::display(void)
{
	std::cout << "Enter your command:" << std::endl;
	std::cout << "  *** ADD ******" << std::endl;
	std::cout << "  *** SEARCH ***" << std::endl;
	std::cout << "  *** EXIT *****" << std::endl;
	std::cout << "/> ";
}

void	PhoneBook::geter(void)
{
	std::cout << "Get Information" << std::endl;
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
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	this->contacts[index - 1].geter(index);
	std::cout << "|-------------------------------------------|" << std::endl;
	return ;
}

void	PhoneBook::seter(void)
{
	std::cout << "Set Information" << std::endl;
	std::string input;
	if (this->index < 7)
	{
		if (this->contacts[this->index].seter())
			this->index++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i+1];
		std::cout << "This is yout contact 8" << std::endl;
		std::cout << "Do you want me to repleace this with new contact (Y or N) ?" << std::endl;
		while (true)
		{
			std::cout << "/> ";
			std::getline(std::cin, input);
			if (input.compare("Y"))
				this->contacts[this->index].seter();
			else if (input.compare("N"))
				std::cout << "No create No delete.";
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
