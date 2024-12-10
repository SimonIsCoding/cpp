/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:53:32 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 11:38:31 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

int	main(void)
{
	Zombie	*new_zombie;

	randomChump("stack_zombie");
	new_zombie = newZombie("heap_zombie");
	new_zombie->announce();
	delete(new_zombie);
	return (0);
}