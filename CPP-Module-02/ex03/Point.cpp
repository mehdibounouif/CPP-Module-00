/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:28:45 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/17 11:16:57 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point &Point::operator=(const Point &obj)
{
	return (*this);
}

Point::Point(const Point &obj) : x(obj.x), y(obj.y)
{
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
