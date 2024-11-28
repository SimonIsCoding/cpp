/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/28 19:03:41 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <stdio.h>

void	add_contact(Contact &contact, int *nb_contact)
{
	printf("ADD written\n");

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	contact.set_index(++(*nb_contact));
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
	std::cout << "index: " << contact.get_contact_index() << std::endl;
	std::cout << "first_name: " << contact.get_first_name() << std::endl;
	std::cout << "last_name: " << contact.get_last_name() << std::endl;
	std::cout << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << "phone_number: " << contact.get_phone_number() << std::endl;
	std::cout << "darkest_secret: " << contact.get_darkest_secret() << std::endl;

	// printf("index = %i\n", *(nb_contact));
	return ;
}

void	complete_field(char	*str)
{
	int	len;
	int	whitespaces;
	int	i;

	i = -1;
	if (!str)
		return ;
	len = strlen(str);
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

void	search_contact(Contact& contact, int *nb_contact)
{
	printf("SEARCH written\n");
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	if (*nb_contact > 0)
	{
		std::cout << "       " << contact.get_first_name() << std::endl;
	}
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << std::endl;
	printf("*nb_contact = %i\n", *nb_contact);
	return ;
}

void	init_contact(Contact)
{
	
}

int	main(void)
{
	char		input[32];
	int			nb_contact;
	Contact		contact;

	nb_contact = 0;
	std::cout << "Welcome to the PhoneBook!\n";
	std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
	std::cin >> input;
	while (1)
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
			add_contact(contact, &nb_contact);
		else
			search_contact(contact, &nb_contact);
		std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
		std::cin >> input;
	}
	return (0);
}