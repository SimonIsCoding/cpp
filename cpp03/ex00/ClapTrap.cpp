/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:28 by simon             #+#    #+#             */
/*   Updated: 2025/01/07 20:27:21 by simon            ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor for " << _name << " Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	// std::cout << " in attack function name is: " << _name << std::endl;
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead. He can not attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && _energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " is causing " << amount << "points of damage to another ClapTrap" << std::endl;
		_energy_points -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " can't damage some other ClapTrap" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > amount)
	{
		std::cout << "ClapTrap " << _name << " is being repaired for " << amount << " points" << std::endl;
		_energy_points += amount;	
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have any energy point. He is dead." << std::endl;
}