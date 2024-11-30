/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:20 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/30 19:06:57 by simon            ###   ########.fr       */
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
	void	add_to_phonebook(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string darkest_secret);
	void	search_contact();
	Contact	get_contact_index(int index);
};

#endif