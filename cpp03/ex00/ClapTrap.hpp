/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:19 by simon             #+#    #+#             */
/*   Updated: 2025/01/08 15:58:42 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const &copy);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void	print_status();
};

#endif
