/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:36:33 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/12 15:20:24 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MEHDI_
#define _MEHDI_

class Fixed
{
	int	fixed_point;
	static const int fractionl;
	public:
		Fixed() { fixed_point = 0; }
		int getRawBits(void) const { return (fixed_point); }
		void setRawBits(int const raw) { this->fixed_point = raw; }
};

#endif
