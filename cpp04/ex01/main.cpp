/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:59:19 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 20:06:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal*	Animals[100];

	for (int k = 0; k < 100; k++)
	{
		if (k < 50)
			Animals[k] = new Dog();
		else
			Animals[k] = new Cat();
	}
	
	delete j;//should not create a leak
	delete i;
	
	for (int k = 0; k < 100; k++)
	{
		if (k < 50)
			delete Animals[k];
		else
			delete Animals[k];
	}

	return (0);
}