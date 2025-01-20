/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:52:51 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 16:19:21 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Desctructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal Operator= Called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making sound" << std::endl;
}