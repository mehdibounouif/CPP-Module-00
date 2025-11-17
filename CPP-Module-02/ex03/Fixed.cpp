/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:09:35 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/17 11:18:05 by mbounoui         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &obj)
{
	this->fixed_point = obj.fixed_point;
}

Fixed::Fixed(const int fixed_point)
{
	this->fixed_point = fixed_point * (1 << fractional_bits);
}

Fixed::Fixed(const float fixed_point)
{
	this->fixed_point = roundf(fixed_point * (1 << fractional_bits));
}

Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point / (1 << fractional_bits));
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
	return (this->toFloat() + obj.toFloat());
}


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


Fixed	Fixed::operator--(int)
{
	Fixed	unchange = *this;
	--(*this);
	return (unchange);
}

Fixed	&Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed	&Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed unchange(*this);
	++(*this);
	return (unchange);
}

int Fixed::getRawBits(void) const
{
	return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

