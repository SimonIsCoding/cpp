/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:31:03 by simon             #+#    #+#             */
/*   Updated: 2024/12/20 20:02:14 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_fractionnal;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		
		Fixed&	operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};