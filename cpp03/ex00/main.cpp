/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:44:41 by simon             #+#    #+#             */
/*   Updated: 2025/01/07 19:49:17 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Pikachu("Pikachu");
	ClapTrap	Bulbizarre("Bulbizarre");

	Pikachu.attack("Bulbizarre");
		
	return (0);
}