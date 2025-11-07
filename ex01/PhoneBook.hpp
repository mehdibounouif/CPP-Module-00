/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/07 10:16:31 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook
{
	int		index;
	size_t	counter;
	Contact	contacts[8];
	public:
		PhoneBook(void);
		void	seter();
		void	geter();
		void	prompt();
		void	display_lables();
		void	display_all_contacts();
};

#endif
