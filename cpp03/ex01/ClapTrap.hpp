/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:19 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 15:50:02 by simon            ###   ########.fr       */
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
		unsigned int	_max_hit_points;

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

		void	print_status();

};

#endif