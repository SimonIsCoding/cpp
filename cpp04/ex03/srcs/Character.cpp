/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:35:56 by aperez-b          #+#    #+#             */
/*   Updated: 2025/01/20 12:22:12 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("default"), _inventory()
{
}

Character::Character(std::string const &name): _name(name), _inventory()
{
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character::Character(Character const &copy): ICharacter(copy), _inventory()
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	}
	std::cout << "Character copied" << std::endl;
}

Character const	&Character::operator=(const Character &copy)
{
	this->_name = copy._name;
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Materia given is invalid" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			return ;
		}
	}
	std::cout << "Inventory full. Cannot equip " << _name << " with the Materia " << m << std::endl;
	if (inInventory(m) == 0)
		delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx] = NULL;
		std::cout << "inventory free for index " << idx << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "Inventory at index " << idx << "is already available" << std::endl;
		return ;
	}
	if (!(idx >= 0 && idx <= 3))
		std::cout << "index out of range" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "Inventory at index " << idx << "is already available" << std::endl;
		return ;
	}
	if (!(idx >= 0 && idx <= 3))
		std::cout << "index out of range" << std::endl;
}

int Character::inInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return (1);
	}
	return (0);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(std::string const &name)
{
	this->_name = name;
}
