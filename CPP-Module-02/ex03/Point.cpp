/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:28:45 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/16 11:18:10 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const float x, const float y)
{
	this->x = x;
	this->y = y;
}

Point &Point::operator=(const Point &obj)
{
	if (this == &obj)
		return (*this);
	this->x = obj.x;
	this->y = obj.y;
	return (*this);
}

Point::Point(const Point &obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

Point::~Point()
{
}

Fixed Point::geterX() const
{
	return (x);
}

Fixed Point::geterY() const
{
	return (y);
}
