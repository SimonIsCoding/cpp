/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:19:11 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 21:28:10 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class	ICharacter;

class AMateria
{
	protected:
		std::string _type;
		AMateria(AMateria const& copy);
		AMateria(std::string const& type);
	public:
		virtual ~AMateria();
		
		AMateria const& operator=(AMateria const& copy);

		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif