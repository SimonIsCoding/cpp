/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:52:13 by simon             #+#    #+#             */
/*   Updated: 2025/01/14 12:34:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	_type = "Cat";
	_mind = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete _mind;
}

Cat::Cat(Cat const &copy) : AAnimal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_type = copy._type;
}

Cat&	Cat::operator=(Cat const &copy)
{
	std::cout << "Cat operator= Called" << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

std::string	Cat::getType()
{
	return (_type);
}

void	Cat::makeSound() const
{
	std::cout << _type << " sound is Moew" << std::endl;
}
