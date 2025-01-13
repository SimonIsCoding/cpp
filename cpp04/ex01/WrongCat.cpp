/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:53:05 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 16:19:51 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	_type = copy._type;
}

WrongCat&	WrongCat::operator=(WrongCat const& copy)
{
	std::cout << "WrongCat Operator= Called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound is WrongMeow" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (_type);
}