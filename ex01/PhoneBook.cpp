/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:26:25 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/07 10:46:30 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->counter = 0;
}

void	PhoneBook::display_all_contacts(void)
{
	for (int i = 0; i < this->index; i++)
		PhoneBook::contacts[i].geter(i + 1);
}

void	PhoneBook::display_lables(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	PhoneBook::prompt(void)
{
	std::cout << "\n\t\e[1;33mHow i can serve you?\033[0m" << std::endl;
	std::cout << "\t\e[1;33m********************\033[0m\n" << std::endl;
	std::cout << "- To add new contact enter:     \e[1;34m\"ADD\"\033[0m" << std::endl;
	std::cout << "- To search for contact enter: \e[1;32m\"SEARCH\"\033[0m" << std::endl;
	std::cout << "- To exit enter:                \e[1;33m\"EXIT\"\033[0m" << std::endl;
	std::cout << "\n/> ";
}

void	PhoneBook::geter(void)
{
	std::string input;
	int	index;
	if (!this->index)
	{
		std::cout << "You have no contacts." << std::endl;
		return ;
	}
	this->display_lables();
	this->display_all_contacts();
	std::cout << "|-------------------------------------------|" << std::endl;
	while (1)
	{
		std::cout << "Enter contact's index that you want to see [1 BTW 8]: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		else if (input.empty())
		{
			input.clear();
			std::cout << "Please enter a valid input." << std::endl;
		}
		else if ((std::atoi(input.c_str())) > this->index)
		{
			input.clear();
			std::cout <<  "You have only " << this->index << " contacts." << std::endl;
		}
		else if (std::atoi(input.c_str()) <= 0)
		{
			input.clear();
			std::cout << "Range of index from 1 to 8." << std::endl;
		}
		else
			break;
	}
	index = std::atoi(input.c_str());
	std::cout << "|-------------------------------------------|" << std::endl;
	this->contacts[index - 1].geter_one_contact();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::seter()
{
	std::string input;
	if (this->index < 3)
	{
		this->contacts[this->index].seter();
		this->index++;
		this->counter++;
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
			{
				this->contacts[this->counter++ % 3].seter();
			}
			else if (!input.compare("N"))
				std::cout << "No update.";
			else
			{
				std::cout << "Please enter (Y or N)" << std::endl;
				continue;
			}
			break;
		}
	}
}
