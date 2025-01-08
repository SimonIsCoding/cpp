/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:19 by simon             #+#    #+#             */
/*   Updated: 2025/01/08 19:33:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		//Constructors
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap const &copy);
		
		//Destructor
		virtual ~ClapTrap();

		//Overloaded Operator
		ClapTrap & operator=(ClapTrap const &copy);

		//Public Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();

		void	print_status();

};

#endif