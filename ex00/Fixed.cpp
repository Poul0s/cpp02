/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:50:44 by psalame           #+#    #+#             */
/*   Updated: 2023/12/27 15:25:03 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Constructors

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( Fixed& number )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}


// Operators

Fixed&	Fixed::operator=( Fixed& number )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = number.getRawBits();
	return (*this);
}


// Functions

int		Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits( int const rawNumber )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = rawNumber;
}
