/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:29:50 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:31:12 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog Constructor Called" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(Dog const &copy)
{
	std::cout << "Dog's operator= called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << _type << " sound is Waouf" << std::endl;
}