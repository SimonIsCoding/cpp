/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:41 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 18:54:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Pikachu("Pikachu");
	ClapTrap	Bulbasaur("Bulbasaur");
	ClapTrap	test(Pikachu);
	ClapTrap	test2 = test;

	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	
	Bulbasaur.beRepaired(3);
	
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(1);
	Pikachu.attack("Bulbasaur");
	
	std::cout << std::endl;
	Pikachu.print_status();
	Bulbasaur.print_status();
	return (0);
}