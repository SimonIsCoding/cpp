/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:50:05 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 19:41:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string	_name;
	Weapon		*_weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif