/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:38:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/10/25 09:55:56 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int c, char **v)
{
	int	i;
	int	j;
	if (c == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}

	i = 1;
	while (i < c)
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			std::cout << (char)toupper(v[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
