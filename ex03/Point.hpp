/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:19 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 23:38:47 by psalame          ###   ########.fr       */
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

		Point&	operator=(Point& point);

		const Fixed&	GetXValue( void );
		const Fixed&	GetYValue( void );

	private:
		Fixed	x;
		Fixed	y;
};

#endif
