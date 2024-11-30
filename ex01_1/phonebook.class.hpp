/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:20 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/30 16:51:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
#define	PHONEBOOK_CLASS_H
#include "contact.class.hpp"

class	Phonebook
{
	private:
		Contact	_contact[8];
		int		_index;

	public:
		
	Phonebook();
	~Phonebook();
	
};

#endif