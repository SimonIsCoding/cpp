/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:52:13 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:04:10 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &copy)
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

void	Cat::makeSound()
{
	std::cout << _type << " sound is Moew" << std::endl;
}
