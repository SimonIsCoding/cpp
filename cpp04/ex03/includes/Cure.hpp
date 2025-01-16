/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:57:48 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 21:22:18 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		~Cure();
		Cure(Cure const& copy);
		Cure const &operator=(Cure const& copy);
		
		virtual AMateria	*clone() const;
		void	use(ICharacter &target);
};

#endif