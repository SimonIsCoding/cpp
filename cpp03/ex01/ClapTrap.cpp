/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:28 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 15:54:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & copy)
{
	std::cout << "ClapTrap Operator = called" << std::endl;
	if (&copy != this)
		this->_name = copy._name;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0), _max_hit_points(10)
{
	std::cout << "ClapTrap Constructor for " << name << " Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		if (_energy_points == 0 || _hit_points == 0)
			std::cout << "ClapTrap " << _name << " is dead. He can not attack." << std::endl;
		else
			std::cout << "ClapTrap " << _name << " can not attack the other ClapTrap because the other is dead. Cheh!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && _energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " is getting " << amount << " points of damage from another ClapTrap." << std::endl;
		_hit_points -= amount;
	}
	else
	{
		if (_energy_points == 0 || _hit_points == 0)
			std::cout << "ClapTrap " << _name << " can't damage some other ClapTrap because " << _name << " is dead. RIP" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " can't damage some other ClapTrap because the other is dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " is being repaired for " << amount << " points" << std::endl;
		_hit_points += amount;
		if (_hit_points > _max_hit_points)
			_hit_points = _max_hit_points;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " _hit_points." << std::endl;
}

void	ClapTrap::print_status(void)
{
	std::cout << "ClapTrap " << _name << " has " << _hit_points << " _hit_points, has a power of " << _attack_damage << " _attack_damage and has " << _energy_points << " _energy_points remaining." << std::endl;
}