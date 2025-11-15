/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:32:50 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/15 16:04:42 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed&	Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
		return (*this);
	this->fixed_point = obj.fixed_point;
	return (*this);
}

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called\n";
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point / (1 << fractions));
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->toFloat() > obj.toFloat());
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->toFloat() < obj.toFloat());
}

bool	Fixed::operator>=(const Fixed &obj)  const
{
	return (this->toFloat() >= obj.toFloat());
}

bool	Fixed::operator<=(const Fixed &obj)  const
{
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->toFloat() == obj.toFloat());
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->toFloat() != obj.toFloat());
}

Fixed	Fixed::operator+(const Fixed &obj) const
{
	return (this->toFloat() + obj.toFloat()); }

Fixed	Fixed::operator-(const Fixed &obj) const
{
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	return (this->toFloat() / obj.toFloat());
}

std::ostream &operator<<(std::ostream &s, const Fixed &obj)
{
	s << obj.toFloat();
	return (s);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const	Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed	&Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed	&Fixed::operator++(int)
{
	Fixed unchange = *this;
	operator++();
	return (unchange);
}

Fixed	&Fixed::operator--(int)
{
	Fixed	unchange = *this;
	operator--();
	return (unchange);
}






















