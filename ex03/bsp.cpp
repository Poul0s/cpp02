/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:25:30 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 23:39:50 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "iostream"

static Fixed	get_triangle_area(Point A, Point B, Point C)
{
	Point	VAB = Point(
		A.GetXValue() - B.GetXValue(),
		A.GetYValue() - B.GetYValue()
	);
	Point	VAC = Point(
		A.GetXValue() - C.GetXValue(),
		A.GetYValue() - C.GetYValue()
	);
	Fixed	res;

	res = VAB.GetXValue() * VAC.GetYValue() - VAB.GetYValue() * VAC.GetXValue();
	res = res / 2;
	if (res < 0)
		res = res * -1;
	return (res);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	AreaABC = get_triangle_area(a, b, c);

	Fixed	AreaPAB = get_triangle_area(point, a, b);
	Fixed	AreaPAC = get_triangle_area(point, a, c);
	Fixed	AreaPBC = get_triangle_area(point, b, c);

	if (AreaABC == AreaPAB + AreaPAC + AreaPBC)
		return (true);
	else
		return (false);
}
