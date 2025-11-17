/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:17:09 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/17 10:53:55 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <math.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const int num)
{
	this->fixed_point = (num << fractional_bits);
	std::cout << "int constructor called\n";
}

Fixed::Fixed(const float num)
{
	this->fixed_point = roundf(num * (1 << fractional_bits));
	std::cout << "float constructor called\n";
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed::Fixed(const Fixed &obj)
{
	this->fixed_point = obj.fixed_point;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->fixed_point = obj.fixed_point;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point / (1 << fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> fractional_bits);
}

int Fixed::getRawBits(void) const
{
	return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
