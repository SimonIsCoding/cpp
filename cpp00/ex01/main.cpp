/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/09 14:40:00 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <stdio.h>

void	complete_field(std::string str)
{
	int	len;
	int	whitespaces;
	int	i;

	i = -1;
	len = str.size();
	if (len > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << '.';
	}
	else
	{
		whitespaces = 10 - len;
		while (whitespaces-- > 0)
			std::cout << ' ';
		while (++i < len)
			std::cout << str[i];
	}
	std::cout << '|';
}
void	print_contact_details(Contact& contact)
{
	std::cout << "first_name: " << contact.get_first_name() << std::endl;
	std::cout << "last_name: " << contact.get_last_name() << std::endl;
	std::cout << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << "phone_number: " << contact.get_phone_number() << std::endl;
	std::cout << "darkest_secret: " << contact.get_darkest_secret() << std::endl;
}

int	main(void)
{
	char		input[32];
	Contact		contact;
	Phonebook	phonebook;

	std::cout << "Welcome to the PhoneBook!\n";
	std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
	std::cin >> input;
	while (!std::cin.eof())
	{
		while ((strcmp(input, "SEARCH") &&  strcmp(input, "ADD")
				&& strcmp(input, "EXIT")))
		{
			std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
		if (strcmp(input, "EXIT") == 0)
			return (0);
		else if (strcmp(input, "ADD") == 0)
			phonebook.add_contact(contact);
		else
			phonebook.search_contact();
		std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
		std::cin >> input;
	}
	return (0);
}