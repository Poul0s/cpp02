/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:50:44 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 19:17:30 by psalame          ###   ########.fr       */
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
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed& number )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = number << this->fractional_bits; 
}
Fixed::Fixed( const float number )
{
	std::cout << "Float constructor called" << std::endl;
	int	fixed_point;

	fixed_point = roundf(ft_power(2, this->fractional_bits) * number);
	this->fixed_point = fixed_point;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<( std::ostream&output, const Fixed& number )
{
	output << number.toFloat();
	return output;
}



// Operators

Fixed&	Fixed::operator=( const Fixed& number )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = number.getRawBits();
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

