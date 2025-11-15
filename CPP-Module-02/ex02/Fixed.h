/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:30:23 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/15 16:04:42 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MEHDI_ 
#define _MEHDI_

#include <iostream>
#include <math.h>

class Fixed
{
	int	fixed_point;
	static const int fractions = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		float toFloat( void ) const;
		int toInt( void ) const;



		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	&operator++(int);
		Fixed	&operator--(int);

		Fixed&	min(Fixed &a, Fixed &b);
		const Fixed&	min(const Fixed &a, const Fixed &b);
		Fixed&	max(Fixed &a, Fixed &b);
		const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &obj);

#endif
