/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:35:22 by aperez-b          #+#    #+#             */
/*   Updated: 2025/01/20 11:43:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void): _learnInventory()
{
	std::cout << "MateriaSource created with default constructor" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
	}
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy): IMateriaSource(copy), _learnInventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._learnInventory[i])
			this->_learnInventory[i] = copy._learnInventory[i];
	}
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource const	&MateriaSource::operator=(const MateriaSource &copy)
{
	(void)copy;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_learnInventory[i] == NULL)
		{
			this->_learnInventory[i] = materia;
			std::cout << "Materia " << this->_learnInventory[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else
		std::cout << "Cannot learn invalid materia" << std::endl;
	if (!this->inLearnInventory(materia))
		delete materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnInventory[i] && _learnInventory[i]->getType() == type)
			return (_learnInventory[i]->clone());
	}
	return (0);
}

//function to check if the materia is in our inventory
int MateriaSource::inLearnInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] == materia)
			return (1);
	}
	return (0);
}
