/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:25:52 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/04 16:14:31 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int c, char **v)
{
	if (c == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < c; i++)
	{
		for(int j = 0; v[i][j] != '\0'; j++)
			std::cout << (char)toupper(v[i][j]);
		if (i != c - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
