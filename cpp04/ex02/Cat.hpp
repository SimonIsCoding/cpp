/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:44:27 by simon             #+#    #+#             */
/*   Updated: 2025/01/14 12:34:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain*	_mind;
	public:
		Cat();
		~Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &copy);

		virtual void	makeSound() const;

		std::string	getType();
};

#endif