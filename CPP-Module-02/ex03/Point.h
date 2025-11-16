/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:12:07 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/16 10:52:37 by mbounoui         ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &s,const Point &obj);
#endif
