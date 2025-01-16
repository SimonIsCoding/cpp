/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:44:34 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 19:08:02 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
	
	public:
		Ice();
		~Ice();
		Ice(Ice const& copy);
		Ice const& operator=(Ice const& Ice);
		
		virtual AMateria *clone() const;
		void use(ICharacter &target);
};

#endif