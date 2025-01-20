/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:33:57 by aperez-b          #+#    #+#             */
/*   Updated: 2025/01/20 12:22:24 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &copy): AMateria(copy)
{
}

Ice const	&Ice::operator=(const Ice &copy)
{
	this->_type = copy._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
