/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:22 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/09 14:46:59 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>
#include <sstream>
void	complete_field(std::string str);
void	print_contact_details(Contact& contact);

Phonebook::Phonebook(void) : _current_size(0)
{
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::add_contact(Contact& contact)
{
	contact.set_contact_details(contact);
	if (_current_size < 8)
		_contact[_current_size++] = contact;
	else
	{
		for (int i = 1; i < 8; ++i)
			_contact[i - 1] = _contact[i];
		_contact[7] = contact;
	}
}

void	Phonebook::search_contact(void)
{
	int			i;
	std::string	input;
	int			number;

	i = -1;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	while (++i < _current_size)
	{
		std::cout << "|         " << i + 1 << "|";
		complete_field(_contact[i].get_first_name());
		complete_field(_contact[i].get_last_name());
		complete_field(_contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << std::endl;
	std::cout << "What is the Index of the user you are looking for: ";
	std::cin >> input;
	std::istringstream(input) >> number;
	if (number >= 1 && number <= _current_size)
		print_contact_details(_contact[number - 1]);
	else
		std::cout << "The Index is out of range" << std::endl;
}