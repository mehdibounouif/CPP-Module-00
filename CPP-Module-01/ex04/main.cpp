/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:50:53 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/12 10:44:20 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

int	main(int c, char **v)
{
	if (c != 4)
	{
		std::cout << "Invalid arguments!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string s1 = v[1];
	std::string s2 = v[2];
	std::string s3 = v[3];
	if (s1.empty() || s2.empty() || s3.empty())
	{
		s1.clear();
		s2.clear();
		s3.clear();
		std::cout << "Invalid arguments!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream input(s1.c_str());
	if (!input.is_open())
	{
		std::cout << "Cannot open file!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ofstream output(((s1+".replace").c_str()));
	if (!output.is_open())
	{
		input.close();
		std::cout << "Cannot create file!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string line;
	while (std::getline(input, line))
	{
		for (int i = 0; line[i] != '\0'; i++)
		{
			size_t pos = line.find(s2);
			if (pos != std::string::npos)
			{
					line.insert(pos, s3);
					line.erase(pos + s3.length(), s2.length());
			}
		}
		output << line;
		output << '\n';
	}
	output.close();
	input.close();
	return (EXIT_SUCCESS);
}
