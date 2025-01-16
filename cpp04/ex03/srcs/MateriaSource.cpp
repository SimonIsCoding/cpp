/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:04:35 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 21:12:00 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _learnInventory()
{
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnInventory[i])
			delete _learnInventory[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const& copy): IMateriaSource(copy), _learnInventory()
{
	for (int i = 0; i < 4; i++)
		if (copy._learnInventory[i])
			_learnInventory[i] = copy._learnInventory[i];
}

MateriaSource const&	MateriaSource::operator=(MateriaSource const& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && !_learnInventory[i])
		{
			_learnInventory[i] = materia;
			std::cout << "Materia " << _learnInventory[i]->getType() << "learnt at index " << i << std::endl;
		}
		return ;
	}
	if (materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else
		std::cout << "Cannot learn invalid materia" << std::endl;
	if (!inLearnInventory(materia))
		delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const& type)
{
	std::cout << "entered in createMateria" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_learnInventory[i] && _learnInventory[i]->getType() == type)
			return (_learnInventory[i]->clone());
	}
	std::cout << "Couldn't create materia, " << type << "'s invalid" << std::endl;
	return (0);
}

int	MateriaSource::inLearnInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
		if (_learnInventory[i] == materia)
			return (1);
	return (0);
}