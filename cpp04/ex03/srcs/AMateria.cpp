/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:58:13 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 21:31:48 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = copy;
}

AMateria const& AMateria::operator=(AMateria const& copy)
{
	_type = copy._type;
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	return (*this);

	// std::cout << "AMateria Operator= called" << std::endl;
	// if (this != &copy)
	// 	*this = copy;
	// return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}