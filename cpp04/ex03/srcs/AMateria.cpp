/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:58:13 by simon             #+#    #+#             */
/*   Updated: 2025/01/15 13:09:57 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

AMateria& AMateria::operator=(AMateria const& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void use(ICharacter& target)
{
	if (target._type == )
}