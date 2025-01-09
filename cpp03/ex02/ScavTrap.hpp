/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:25:01 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 17:06:47 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	protected:
		int		_guarded;
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();

	ScavTrap & operator=(ScavTrap const &copy);
	void attack(const std::string& target);

};

#endif