/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:54:36 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/17 09:53:30 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.h"
#include "Point.h"

static Fixed area(Point const &a, Point const &b, Point const &c)
{
	Fixed A = (a.geterX() * (b.geterY() - c.geterY()) +
			b.geterX() * (c.geterY() - a.geterY()) +
			c.geterX() * (a.geterY() - b.geterY()));

	if (A < Fixed(0))
		A = A * Fixed(-1);

	return (A / Fixed(2));
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed A  = area(a, b, c);
	Fixed A1 = area(p, b, c);
	Fixed A2 = area(a, p, c);
	Fixed A3 = area(a, b, p);

	if (A1 == 0 || A2 == 0 || A3 == 0)
		return false;

	return (A == A1 + A2 + A3);
}
