/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:03:28 by aperez-b          #+#    #+#             */
/*   Updated: 2025/01/20 12:21:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria::~AMateria(void)
{
}

AMateria const	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}
