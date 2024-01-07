/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:03:08 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 23:39:14 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors

Point::Point( void )
{
	this->x = Fixed(0);
	this->y = Fixed(0);
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Fixed x, const Fixed y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& point)
{
	this->x = Fixed(point.x);
	this->y = Fixed(point.y);
}

Point::~Point( void )
{
}


// Operator

Point&	Point::operator=(Point& point)
{
	this->x = Fixed(point.x);
	this->y = Fixed(point.y);

	return (*this);
}


// Functions

const Fixed&	Point::GetXValue( void )
{
	return (this->x);
}

const Fixed&	Point::GetYValue( void )
{
	return (this->y);
}
