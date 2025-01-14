/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:05 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 16:17:13 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal const &copy);
		AAnimal& operator=(AAnimal const &copy);
		
		virtual void	makeSound() const = 0;

		std::string	getType()const;
};

#endif