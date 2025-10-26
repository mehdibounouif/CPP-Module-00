/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:19:34 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/26 17:26:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class	Contact
{
	static std::string	fields_name[5];
	std::string			info[5];
	enum Field {
		FirstName,
		LastName,
		NickName,
		PhoneNumber,
		DarkestSecret
	};
	public:
		Contact(void);
		bool	seter();
		void	geter();
};

class	PhoneBook
{
	int	indix;
	public:
		PhoneBook(void);
		void	seter();
		void	geter();
		void	display();
};
