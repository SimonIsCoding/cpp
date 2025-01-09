/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:27:37 by simon             #+#    #+#             */
/*   Updated: 2025/01/09 18:59:50 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	Pikachu("Pikachu");
	FragTrap	Bulbasaur("Bulbasaur");
	ScavTrap	Charmander("Charmander");

	Pikachu.highFivesGuys();
	Pikachu.print_status();
	Bulbasaur.print_status();

	std::cout << std::endl;
	Pikachu.attack("Bulbasaur");
	Bulbasaur.takeDamage(30);
	Bulbasaur.print_status();
	Bulbasaur.beRepaired(20);
	Bulbasaur.print_status();
	Pikachu.print_status();

	std::cout << std::endl;
	Charmander.attack("Pikachu");
	Pikachu.takeDamage(20);
	Pikachu.print_status();
	
	std::cout << std::endl;
	return (0);
}