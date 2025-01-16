/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:56:39 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 20:04:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_learnInventory[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& copy);
		~MateriaSource(void);

		MateriaSource const& operator=(MateriaSource const& copy);

		virtual	void		learnMateria(AMateria *materia);
		virtual	AMateria*	createMateria(std::string const& type);
		int					inLearnInventory(AMateria *materia);
		
};

#endif