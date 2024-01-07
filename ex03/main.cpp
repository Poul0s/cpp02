/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:13:10 by psalame           #+#    #+#             */
/*   Updated: 2024/01/07 23:39:41 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point	a = Point(1.1, 1.1);
	Point	b = Point(2, 6);
	Point	c = Point(4, 2);

	Point	Inside = Point(2.4, 3);
	Point	Outside = Point(7, 1);

	std::cout << "Is x=" << Inside.GetXValue() << ", y=" << Inside.GetYValue() << " inside : " << bsp(a, b, c, Inside) << std::endl;
	std::cout << "Is x=" << Outside.GetXValue() << ", y=" << Outside.GetYValue() << " inside : " << bsp(a, b, c, Outside) << std::endl;
}
