/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:45:38 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/11 10:17:53 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
		void  complain(std::string level);
};
