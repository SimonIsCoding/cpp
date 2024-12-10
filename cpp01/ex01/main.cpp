/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:10:59 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 15:42:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *heapzombie;
	int		N = 3;
	
	heapzombie = zombieHorde(N, "horde");
	for (int i = 0; i < N; i++)
	{
		heapzombie[i].announce();
	}
	delete[] heapzombie;
	return (0);
}