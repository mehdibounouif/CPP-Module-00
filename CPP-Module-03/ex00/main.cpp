/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:26:52 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/19 16:53:10 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main()
{
	ClapTrap clap("mehdi");
	clap.attack("taha");
	clap.beRepaired(2);
	clap.takeDamage(4);
}
