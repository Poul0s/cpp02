/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:19 by psalame           #+#    #+#             */
/*   Updated: 2024/02/08 16:57:23 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
# define Point_HPP
# include <iostream>
# include "Fixed.hpp"

class Point {
	public:
		Point( void );
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& point);
		~Point( void );

		const Fixed&	GetXValue( void ) const;
		const Fixed&	GetYValue( void ) const;

	private:
		Fixed const	x;
		Fixed const	y;
};

#endif
