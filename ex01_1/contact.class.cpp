/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:47 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/09 13:15:56 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.class.hpp"
#include <iostream>

Contact::Contact(void){}

Contact::~Contact(void) {}

void	Contact::set_first_name(std::string str)
{
	this->_first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->_last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->_phone_number = str;
}

void	Contact::set_darkest_secret(std::string str)
{
	this->_darkest_secret = str;
}

// void	Contact::set_index(int idx)
// {
// 	if (idx > 8)
// 		idx = 8;
// 	this->index = idx;
// }

void	Contact::set_contact_details(Contact& contact, int nb_contact)
{	
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	(void)nb_contact;
	// contact.set_index(++(nb_contact));
	std::cout << "Contact's first name: ";
	std::cin >> first_name;
	contact.set_first_name(first_name);
	std::cout << "Contact's last name: ";
	std::cin >> last_name;
	contact.set_last_name(last_name);
	std::cout << "Contact's nickname: ";
	std::cin >> nickname;
	contact.set_nickname(nickname);
	std::cout << "Contact's phone_number: ";
	std::cin >> phone_number;
	contact.set_phone_number(phone_number);
	std::cout << "Contact's darkest_secret: ";
	std::cin >> darkest_secret;
	contact.set_darkest_secret(darkest_secret);
}

/*std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}*/
