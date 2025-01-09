/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:19:07 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 16:03:07 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Pikachu("Pikachu");
	ScavTrap	Bulbizarre("Bulbizarre");

	std::cout << std::endl;
	Bulbizarre.print_status();
	Pikachu.print_status();
	std::cout << std::endl;

	Pikachu.guardGate();
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(20);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(20);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(20);

	Bulbizarre.print_status();

	// Bulbizarre.beRepaired(20);
	Bulbizarre.print_status();
	Pikachu.print_status();
	Pikachu.guardGate();
	
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(20);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(20);
	
	std::cout << std::endl;
	Pikachu.print_status();
	Bulbizarre.print_status();

	std::cout << std::endl;
	return (0);
}