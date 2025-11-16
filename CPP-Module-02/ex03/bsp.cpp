/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:54:36 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/16 14:32:22 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A;
	Fixed A1;
	Fixed A2;
	Fixed A3;

	// ABC
	A = ((a.geterX() * (b.geterY() - c.geterY())) +
		(b.geterX() * (c.geterY() - a.geterY())) +
		(c.geterX() * (a.geterY() - b.geterY())));

	if (A < 0)
		A = A * -1;

	// PAB
	A1 = ((point.geterX() * (b.geterY() - a.geterY())) +
		(b.geterX() * (a.geterY() - point.geterY())) +
		(a.geterX() * (point.geterY() - b.geterY())));

	if (A1 < 0)
		A1 = A1 * -1;

	// PBC
	A2 = ((point.geterX() * (b.geterY() - c.geterY())) +
		(b.geterX() * (c.geterY() - point.geterY())) +
		(c.geterX() * (point.geterY() - b.geterY())));
	
	if (A2 < 0)
		A2 = A2 * -1;

	// PAC
	A3 = ((point.geterX() * (a.geterY() - c.geterY())) +
		(a.geterX() * (c.geterY() - point.geterY())) +
		(c.geterX() * (point.geterY() - a.geterY())));

	if (A3 < 0)
		A3 = A3 * -1;

	if ((A1 + A2 + A3) == A)
		return (true);
	return (false);
}
