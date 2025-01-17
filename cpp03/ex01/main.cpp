/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:19:07 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 18:54:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Pikachu("Pikachu");
	ScavTrap	Bulbasaur("Bulbasaur");

	std::cout << std::endl;
	Bulbasaur.print_status();
	Pikachu.print_status();
	std::cout << std::endl;

	Pikachu.guardGate();
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(20);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(20);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(20);

	Bulbasaur.print_status();

	// Bulbasaur.beRepaired(20);
	Bulbasaur.print_status();
	Pikachu.print_status();
	Pikachu.guardGate();
	
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(20);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(20);
	
	std::cout << std::endl;
	Pikachu.print_status();
	Bulbasaur.print_status();

	std::cout << std::endl;
	return (0);
}