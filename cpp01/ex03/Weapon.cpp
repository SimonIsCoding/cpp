/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:50:39 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 19:11:45 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string name)
{
	_type = name;
}