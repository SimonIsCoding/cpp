/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:08:34 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:16:12 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor Animal Called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Copy Constructor Animal Called" << std::endl;
	_type = copy._type;
}

Animal& Animal::operator=(Animal const &copy)
{
	std::cout << "Animal Operator = Called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal is making sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

Animal::~Animal()
{
	std::cout << "Desctructor Animal Called" << std::endl;
}