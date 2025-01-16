/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:07:59 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 19:10:15 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor Called" << std::endl;
}

Cure const &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure operator= Called" << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure (*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
}