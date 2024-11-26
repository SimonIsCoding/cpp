/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:14:47 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/26 20:38:14 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.class.hpp"

Contact::Contact(int idx, const std::string& fn, const std::string& ln, 
	const std::string& nick, const std::string& phone, const std::string& secret)
	: index(idx),  first_name(fn), last_name(ln), nickname (nick), phone_number(phone),
	darkest_secret(secret)
{}

Contact::~Contact(void) {}