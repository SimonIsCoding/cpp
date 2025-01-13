/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:28:03 by simon             #+#    #+#             */
/*   Updated: 2025/01/13 19:14:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	protected:
		std::string	_ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const& copy);
		Brain& operator=(Brain const& copy);
};

#endif