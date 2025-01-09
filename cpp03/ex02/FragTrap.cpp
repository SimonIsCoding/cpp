/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:20:27 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 18:46:27 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor" << std::endl;
}

FragTrap::FragTrap(const std::string name)// : _name(name), _hit_points(100), _energy_points(100), _attack_damage(30), _max_hit_points(100)
{
	std::cout << "FragTrap Constructor for " << name << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_max_hit_points = 100;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	std::cout << "FragTrap copy Constructor Called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "FragTrap Operator = called" << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys is the most useless function ever" << std::endl;
}