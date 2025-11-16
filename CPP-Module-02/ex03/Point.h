/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:12:07 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/16 14:08:53 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_
#define _POINT_

#include <iostream>
#include "Fixed.h"

class Point
{
	Fixed x;
	Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point &operator=(const Point &obj);
		Point(const Point &obj);
		Fixed geterX() const;
		Fixed geterY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &s,const Point &obj);
#endif
