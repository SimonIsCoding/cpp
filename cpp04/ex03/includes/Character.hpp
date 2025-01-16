/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:22:31 by simon             #+#    #+#             */
/*   Updated: 2025/01/16 19:25:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character(std::string const& _name);
		Character(Character const& copy);
		~Character();
		
		Character const& operator=(Character const& copy);

		std::string const& getName() const;
		void				setName(std::string const &name);
		
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
		int				inInventory(AMateria *materia);	
};
#endif