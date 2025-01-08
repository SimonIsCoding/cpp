/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:28 by simon             #+#    #+#             */
/*   Updated: 2025/01/08 11:53:48 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hit_points(10), _energy_points(10), _attack_damage(1)
{
	std::cout << "Constructor for " << _name << " Called" << std::endl;
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
		if (_hit_points > 10)
			_hit_points = 10;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
	std::cout << "ClapTrap has now " << _hit_points << " _hit_points." << std::endl;
}

void	ClapTrap::print_status(void)
{
	std::cout << "Clap Trap " << _name << " has " << _hit_points << " _hit_points, has a power of " << _attack_damage << " _attack_damage and has " << _energy_points << " _energy_points remaining." << std::endl;
}