/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:05 by simon             #+#    #+#             */
/*   Updated: 2025/01/14 12:29:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal& operator=(Animal const &copy);
		
		virtual void	makeSound() const;

		std::string	getType()const;
};

#endif