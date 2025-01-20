/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:08:48 by simon             #+#    #+#             */
/*   Updated: 2025/01/20 16:37:41 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain*	_mind;
	public:
		Dog();
		~Dog();
		Dog(Dog const &copy);
		Dog& operator=(Dog const &copy);
		
		virtual void	makeSound() const;
};

#endif
