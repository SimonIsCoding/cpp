/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:12:56 by simon             #+#    #+#             */
/*   Updated: 2024/12/23 23:00:23 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

int Fixed::_fract = 8;

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed::Fixed(const int n)
{
	_value = n << _fract;
}

Fixed::Fixed(const float n)
{
	_value = (int)roundf(n * (1 << _fract));
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;	
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

int		Fixed::toInt(void) const
{
	return (_value >> _fract);
}

float Fixed::toFloat( void ) const
{
	return ((float)_value / (float)(1 << _fract));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->_value = copy._value;
	return (*this);
}

std::ostream& operator <<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed Fixed::operator++(int)
{
	_value++;
	return (*this);
}

Fixed& Fixed::operator++()
{
	Fixed	temp = *this;
	_value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	_value--;
	return (*this);
}

Fixed& Fixed::operator--()
{
	Fixed	temp = *this;
	_value--;
	return (temp);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_value + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_value - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_value * other.getRawBits());
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->_value / other.getRawBits());
	return (result);
}

const static Fixed	&min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const static Fixed	&min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed const	&max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed::~Fixed()
{
}
