/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:38:20 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:03:12 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <fstream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed& number );
		Fixed( const int number );
		Fixed( const float number );
		~Fixed( void );
		Fixed&			operator=( const Fixed& number);
		int				getRawBits( void ) const;
		void			setRawBits( int const rawNumber );
		float			toFloat( void ) const;
		int				toInt( void ) const;

	private:
		int					fixed_point;
		static const int	fractional_bits = 8;
};

std::ostream&	operator<<( std::ostream&output, const Fixed& number );

#endif