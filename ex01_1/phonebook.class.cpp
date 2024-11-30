/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:22 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/30 19:06:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>

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
		 std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->_contact[this->_index % 8].set_first_name(first_name);
	this->_contact[this->_index % 8].set_last_name(last_name);
	this->_contact[this->_index % 8].set_nickname(nickname);
	this->_contact[this->_index % 8].set_phone_number(phone_number);
	this->_contact[this->_index % 8].set_darkest_secret(darkest_secret);
}