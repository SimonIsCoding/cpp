/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:41:27 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 16:20:31 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat& operator=(WrongCat const &copy);
		
		void	makeSound() const;

		std::string getType() const;
};

#endif
