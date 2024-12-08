/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:20 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/08 18:43:46 by simon            ###   ########.fr       */
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
	void	add_to_phonebook(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string darkest_secret, int index);
	void	search_contact(Contact& contact, int *nb_contact);
	void	show_contact_details(std::string input);
	Contact	get_contact_index(int index);
	int		get_current_size(int* number);
};

#endif