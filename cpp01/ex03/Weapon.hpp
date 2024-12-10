/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:52:54 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 19:12:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class 	Weapon
{
	private:
		std::string _type;
		
	public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	std::string	getType() const {return _type;}
	
	void		setType(std::string str);
};

#endif