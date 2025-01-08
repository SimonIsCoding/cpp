/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:28:51 by simon             #+#    #+#             */
/*   Updated: 2025/01/08 20:00:39 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ClavTrap Constructor for " << name << std::endl;
	_name = name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
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

void	ClapTrap::attack(const std::string& target)
{
	
}

