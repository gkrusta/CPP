/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:48:59 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/08 14:27:36 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const int nb);
		Fixed(float nb);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif