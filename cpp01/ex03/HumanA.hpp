/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:49:33 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 19:41:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
	std::string	_name;
	Weapon		&_weapon;

	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void	attack();
};

#endif