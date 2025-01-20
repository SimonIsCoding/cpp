/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:08:34 by simon             #+#    #+#             */
/*   Updated: 2025/01/20 16:29:04 by simarcha         ###   ########.fr       */
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
	*this = copy;
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
	std::cout << "Animal sound is GRRR" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

Animal::~Animal()
{
	std::cout << "Desctructor Animal Called" << std::endl;
}