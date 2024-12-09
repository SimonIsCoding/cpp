/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:20 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/09 14:46:05 by simon            ###   ########.fr       */
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
		int		_current_size;

	public:
	Phonebook();
	~Phonebook();
	void	add_contact(Contact& contact);
	void	search_contact();
};

#endif