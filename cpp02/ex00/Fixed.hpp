/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:00:32 by simon             #+#    #+#             */
/*   Updated: 2024/12/15 21:48:14 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			_number;
		static int	_fractional_part;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif