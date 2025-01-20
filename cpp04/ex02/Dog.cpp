/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:29:50 by simon             #+#    #+#             */
/*   Updated: 2025/01/20 16:37:41 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Default Dog Constructor Called" << std::endl;
	_type = "Dog";
	_mind = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete _mind;
}

Dog::Dog(Dog const &copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_mind = new Brain();
	*this = copy;
}

Dog& Dog::operator=(Dog const &copy)
{
	std::cout << "Dog's operator= called" << std::endl;
	if (this != &copy)
	{
		*(this->_mind) = *(copy._mind);
		_type = copy._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << _type << " sound is Waouf" << std::endl;
}
