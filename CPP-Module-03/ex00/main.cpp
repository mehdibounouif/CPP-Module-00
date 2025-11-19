/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:26:52 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/18 19:28:54 by marvin           ###   ########.fr       */
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
