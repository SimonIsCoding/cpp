/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:47 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/08 18:33:16 by simon            ###   ########.fr       */
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

void	Contact::set_index(int idx)
{
	if (idx > 8)
		idx = 8;
	this->index = idx;
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
