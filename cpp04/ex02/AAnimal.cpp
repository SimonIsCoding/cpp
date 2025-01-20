/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:08:34 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:16:12 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default Constructor AAnimal Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Copy Constructor AAnimal Called" << std::endl;
	*this = copy;
}

AAnimal& AAnimal::operator=(AAnimal const &copy)
{
	std::cout << "AAnimal Operator = Called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (_type);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal Called" << std::endl;
}