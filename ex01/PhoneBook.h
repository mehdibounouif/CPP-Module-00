/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:19:34 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/28 11:21:58 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cstdlib>

# define YELLOW "\e[0;33m"
# define GREEN "\e[0;32m"
# define RED "\e[0;31m"

class	Contact
{
	static std::string	fields_name[5];
	std::string			info[5];
	public:
		Contact(void);
		int		seter();
		void	geter(int index);
};

class	PhoneBook
{
	int		index;
	Contact	contacts[8];
	public:
		PhoneBook(void);
		void	seter();
		void	geter();
		void	prompt();
		void	display_lables();
		void	display_all_contacts();
};
