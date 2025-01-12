/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:08:48 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:30:56 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	private:

	public:
		Dog();
		~Dog();
		Dog(Dog const &copy);
		Dog& operator=(Dog const &copy);
		
		virtual void	makeSound() const;
};

#endif
