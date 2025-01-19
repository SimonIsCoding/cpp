/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:24:43 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 21:31:46 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character() : _name("default"), _inventory()
{
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character::Character(std::string const& name) : _name(name), _inventory() 
{
}

Character::Character(Character const& copy) : ICharacter(copy), _inventory()
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	}
		
}

Character const &Character::operator=(Character const& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && _inventory[i] == NULL)
		{
			if (inInventory(materia))
				_inventory[i] = materia->clone();
			else
				_inventory[i] = materia;
			std::cout << "Materia " << _inventory[i]->getType() << "equiped to " << _name << "'s inventory at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "Cannot equip materia, " << _name << "'s inventory is full" << std::endl;
	else
		std::cout << "Cannot equip invalid materia" << std::endl;
	if (!this->inInventory(materia))
		delete materia;
}

void	Character::unequip(int idx)
{
	if (idx > 0 && idx > 4 && _inventory[idx])
	{
		std::cout << "Unequipped " << _inventory[idx]->getType() << " from " << _name << "'s inventory at index " << idx << _inventory[idx] << std::endl;
	}
	else if (idx < 0 || idx > 4)
		std::cout << "Cannot unequip materia, invalid index" << std::endl;
	else
		std::cout << "Cannot unequip materia, index " << idx << " is empty!" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else if (idx < 0 || idx > 4)
		std::cout << "Cannot use materia, invalid index" << std::endl;
	else
		std::cout << "Cannot use materia, index " << idx << " is empty!" << std::endl;
}

int	Character::inInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] == materia)
			return (1);
	return (0);
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void	Character::setName(std::string const& name)
{
	_name = name;
}