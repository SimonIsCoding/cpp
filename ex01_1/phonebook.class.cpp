/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:22 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/08 18:43:40 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>
void	complete_field(std::string str);
void	show_contact_details(std::string input);

Phonebook::Phonebook(void)
{
	
}

Phonebook::~Phonebook(void)
{
	
}

Contact	Phonebook::get_contact_index(int index)
{
	return (this->_contact[index % 8]);
}

void	Phonebook::add_to_phonebook(std::string first_name, std::string last_name,
		 std::string nickname, std::string phone_number, std::string darkest_secret, int index)
{
	this->_index = index;
	std::cout << "add to phonebook function: " << this->_index << std::endl;
	this->_contact[this->_index % 8].set_first_name(first_name);
	this->_contact[this->_index % 8].set_last_name(last_name);
	this->_contact[this->_index % 8].set_nickname(nickname);
	this->_contact[this->_index % 8].set_phone_number(phone_number);
	this->_contact[this->_index % 8].set_darkest_secret(darkest_secret);
}

void	Phonebook::search_contact(Contact& contact, int *nb_contact)
{
	int			i;
	std::string	input;

	i = -1;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	if (*nb_contact > 0)
	{	
		while (++i < *nb_contact)
		{
			std::cout << "|         " << contact.get_contact_index() << "|";
			complete_field(contact.get_first_name());
			complete_field(contact.get_last_name());
			complete_field(contact.get_nickname());
			// complete_field(contact.get_phone_number());
			// complete_field(contact.get_darkest_secret());
			std::cout << std::endl;
		}
	}
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << std::endl;
	std::cout << " What is the Index of the user you are looking for: ";
	std::cin >> input;
	show_contact_details(input);
	return ;
}

int	Phonebook::get_current_size(int *number)
{
	if (*number > 8)
		*number = 8;
	return (this->_current_size = *number);
}