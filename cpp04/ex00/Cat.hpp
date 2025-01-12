/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:44:27 by simon             #+#    #+#             */
/*   Updated: 2025/01/12 19:31:26 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		
	public:
		Cat();
		~Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &copy);

		virtual void	makeSound() const;

		std::string	getType();
};

#endif