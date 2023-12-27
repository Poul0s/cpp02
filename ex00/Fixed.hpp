/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:38:20 by psalame           #+#    #+#             */
/*   Updated: 2023/12/27 14:59:06 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed& number );
		~Fixed( void );
		Fixed&	operator=( Fixed& number);
		int		getRawBits( void );
		void	setRawBits( int const rawNumber );

	private:
		int					fixed_point;
		static const int	fractional_bits = 8;
};

#endif