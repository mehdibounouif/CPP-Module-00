/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:33:25 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/20 08:47:27 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FLAGTRAP_
#define _FLAGTRAP_

#include <iostream>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string& name);
		~FragTrap();
		FragTrap&	operator=(const	FragTrap &obj);
		FragTrap(const	FragTrap &obj);
		void highFivesGuys(void);
		void attack(const std::string& target);
};
#endif
