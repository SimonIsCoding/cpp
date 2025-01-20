/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:46:50 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 16:20:29 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const& copy);
		WrongAnimal& operator=(WrongAnimal const& copy);

		void	makeSound() const;

		std::string getType() const;
};

#endif