/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:50:44 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 19:58:33 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// static utils

static float	ft_power(int number, int power)
{
	float	res = 1;

	for (int i = 0; i < power; i++)
		res *= number;
	return (res);
}

// Constructors

Fixed::Fixed( void )
{
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed& number )
{
	*this = number;
}

Fixed::Fixed( const int number )
{
	this->fixed_point = number << this->fractional_bits; 
}
Fixed::Fixed( const float number )
{
	int	fixed_point;

	fixed_point = roundf(ft_power(2, this->fractional_bits) * number);
	this->fixed_point = fixed_point;
}

Fixed::~Fixed( void )
{
}

std::ostream&	operator<<( std::ostream&output, const Fixed& number )
{
	output << number.toFloat();
	return output;
}

bool	Fixed::operator>(const Fixed& number) const
{
	return (this->fixed_point > number.fixed_point);
}

bool	Fixed::operator<(const Fixed& number) const
{
	return (this->fixed_point < number.fixed_point);
}

bool	Fixed::operator>=(const Fixed& number) const
{
	return (this->fixed_point >= number.fixed_point);
}

bool	Fixed::operator<=(const Fixed& number) const
{
	return (this->fixed_point <= number.fixed_point);
}

bool	Fixed::operator==(const Fixed& number) const
{
	return (this->fixed_point == number.fixed_point);
}

bool	Fixed::operator!=(const Fixed& number) const
{
	return (this->fixed_point != number.fixed_point);
}

Fixed	Fixed::operator+(const Fixed& number)
{
	Fixed	res;

	res.setRawBits(this->fixed_point + number.fixed_point);
	return (res);
}

Fixed	Fixed::operator-(const Fixed& number)
{
	Fixed	res;

	res.setRawBits(this->fixed_point - number.fixed_point);
	return (res);
}

Fixed	Fixed::operator*(const Fixed& number)
{
	float	res = this->toFloat() * number.toFloat();
	return (Fixed(res));
}

Fixed	Fixed::operator/(const Fixed& number)
{
	float	res = this->toFloat() / number.toFloat();
	return (Fixed(res));
}

Fixed&	Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy = *this;
	this->fixed_point++;
	return (copy);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy = *this;
	this->fixed_point--;
	return (copy);
}



// Operators

Fixed&	Fixed::operator=( const Fixed& number )
{
	this->fixed_point = number.fixed_point;
	return (*this);
}


// Functions

int		Fixed::getRawBits( void ) const
{
	return this->fixed_point;
}

void	Fixed::setRawBits( int const rawNumber )
{
	this->fixed_point = rawNumber;
}

float	Fixed::toFloat( void ) const {
	float res;

	res = this->fixed_point / ft_power(2, this->fractional_bits);
	return (res);
}

int	Fixed::toInt( void ) const {
	return (this->fixed_point >> this->fractional_bits);
}

Fixed&		Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed&		Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	else
		return (a);
}
