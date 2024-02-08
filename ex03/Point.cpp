/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:03:08 by psalame           #+#    #+#             */
/*   Updated: 2024/02/08 16:57:20 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors

Point::Point( void )
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) 
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

Point::Point(const Point& point) : x(point.GetXValue()), y(point.GetYValue())
{
}

Point::~Point( void )
{
}


// Functions

const Fixed&	Point::GetXValue( void ) const
{
	return (this->x);
}

const Fixed&	Point::GetYValue( void ) const
{
	return (this->y);
}
