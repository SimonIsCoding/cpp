/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:26:19 by simon             #+#    #+#             */
/*   Updated: 2025/01/14 17:10:24 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource::IMateriaSource(IMateriaSource const& copy)
{
	*this = copy;
}

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

