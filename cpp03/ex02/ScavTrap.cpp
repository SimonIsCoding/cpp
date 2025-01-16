/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:28:51 by simon             #+#    #+#             */
/*   Updated: 2025/01/15 13:27:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)// : ClapTrap(name)
{
	std::cout << "ClavTrap Constructor for " << name << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guarded = 0;
	_max_hit_points = 100;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & copy)
{
	std::cout << "ScavTrap Operator = called" << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

void	ScavTrap::guardGate()
{
	if 	(_guarded == 0)
	{
		_guarded = 1;
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " is already in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " is attacking " << target << " causing " << _attack_damage << " damage points for " << target << std::endl;
		_energy_points -= 10;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack. He's weak." << std::endl;
}

