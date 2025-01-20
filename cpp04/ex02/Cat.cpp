/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:52:13 by simon             #+#    #+#             */
/*   Updated: 2025/01/20 16:37:41 by simarcha         ###   ########.fr       */
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
	_mind = new Brain();
	*this = copy;
}

Cat&	Cat::operator=(Cat const &copy)
{
	std::cout << "Cat operator= Called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
		*(this->_mind) = *(copy._mind);
	}
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
