/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:13:10 by psalame           #+#    #+#             */
/*   Updated: 2024/02/08 16:14:37 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	Fixed const c( Fixed( 10.5f ) / Fixed( 2 ) );
// 	Fixed const d( Fixed( 10.5f ) + Fixed( 2 ) );
// 	Fixed const e( Fixed( 10.5f ) - Fixed( 2 ) );
// 	Fixed const f( Fixed( 10.5f ) - Fixed( 2 ) );
	
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << d << std::endl;
// 	std::cout << e << std::endl;
	
// 	std::cout << "Is " << d << " > " << e << " : " << (d > e) << std::endl;
// 	std::cout << "Is " << d << " < " << e << " : " << (d < e) << std::endl;
// 	std::cout << "Is " << d << " >= " << e << " : " << (d >= e) << std::endl;
// 	std::cout << "Is " << d << " <= " << e << " : " << (d <= e) << std::endl;
// 	std::cout << "Is " << d << " == " << e << " : " << (d == e) << std::endl;
// 	std::cout << "Is " << d << " != " << e << " : " << (d != e) << std::endl;
	
// 	std::cout << "Is " << e << " > " << f << " : " << (e > f) << std::endl;
// 	std::cout << "Is " << e << " < " << f << " : " << (e < f) << std::endl;
// 	std::cout << "Is " << e << " >= " << f << " : " << (e >= f) << std::endl;
// 	std::cout << "Is " << e << " <= " << f << " : " << (e <= f) << std::endl;
// 	std::cout << "Is " << e << " == " << f << " : " << (e == f) << std::endl;
// 	std::cout << "Is " << e << " != " << f << " : " << (e != f) << std::endl;
	
// 	return 0;
// }
