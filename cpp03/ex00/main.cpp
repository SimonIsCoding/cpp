/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:41 by simon             #+#    #+#             */
/*   Updated: 2025/01/08 17:52:32 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Pikachu("Pikachu");
	ClapTrap	Bulbizarre("Bulbizarre");
	ClapTrap	test(Pikachu);
	ClapTrap	test2 = test;

	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	
	Bulbizarre.beRepaired(3);
	
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	Bulbizarre.takeDamage(1);
	Pikachu.attack("Bulbizarre");
	
	std::cout << std::endl;
	Pikachu.print_status();
	Bulbizarre.print_status();
	return (0);
}