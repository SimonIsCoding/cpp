/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:22 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/09 13:22:50 by simon            ###   ########.fr       */
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

void	Phonebook::add_contact(Contact& contact, int *nb_contact)
{
	contact.set_contact_details(contact, *nb_contact);
	std::cout << "add_contact FUNCTION: _current_size: " << _current_size << std::endl;
	if (_current_size < 8)
		_contact[_current_size++] = contact;
	else
	{
		for (int i = 1; i < 8; ++i)
			_contact[i - 1] = _contact[i];
		_contact[7] = contact;
	}
}

void	Phonebook::add_to_phonebook(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string darkest_secret, int nb_contact)
{
	// if (nb_contact > 8)
	// {
	// 	this->_index -= 1;//withdraw 1 for every index and set index to 8
	// 	nb_contact = 8;
	// }
	this->_index = nb_contact;
	this->_current_size = nb_contact;
	std::cout << "add to phonebook function: " << this->_index << std::endl;
	std::cout << "add to phonebook function: _current_size = " << this->_current_size << std::endl;
	this->_contact[this->_index].set_first_name(first_name);
	this->_contact[this->_index].set_last_name(last_name);
	this->_contact[this->_index].set_nickname(nickname);
	this->_contact[this->_index].set_phone_number(phone_number);
	this->_contact[this->_index].set_darkest_secret(darkest_secret);
	std::cout << "after setting the first contact" << this->_contact[this->_index].get_first_name() << std::endl;
}

void	Phonebook::show_contact_details(std::string input)
{
	int	number;

	std::istringstream(input) >> number;
	if (number >= 1 && number <= _current_size)
		print_contact_details(_contact[number - 1]);
	else
		std::cout << "The Index is out of range" << std::endl;
}

void	Phonebook::search_contact(void)
{
	int			i;
	std::string	input;

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
	show_contact_details(input);
	return ;
}

/*int	Phonebook::get_current_size(int *number)
{
	if (*number > 8)
		*number = 8;
	return (this->_current_size = *number);
}*/