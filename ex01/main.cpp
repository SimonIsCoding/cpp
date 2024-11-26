/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/26 18:59:01 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <stdio.h>

/*Contact::Contact(char first_name, char last_name, char nickname) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor Called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}*/

void	add_contact(int *nb_contact)
{
	printf("ADD written\n");

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Contact's first name: ";
	std::cin >> first_name;
	std::cout << "Contact's last name: ";
	std::cin >> last_name;
	std::cout << "Contact's nickname: ";
	std::cin >> nickname;
	std::cout << "Contact's phone_number: ";
	std::cin >> phone_number;
	std::cout << "Contact's darkest_secret: ";
	std::cin >> darkest_secret;
	Contact		contact(++(*(nb_contact)), first_name, last_name, nickname, phone_number, darkest_secret);
	printf("index = %i\n", *(nb_contact));
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

void	search_contact(int *nb_contact)
{
	printf("SEARCH written\n");
	if (*nb_contact == 0)
	{
		std::cout << "No contact added yet" << std::endl;	
		std::cout << " ___________________________________________" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	}
	else
	{
		std::cout << " ___________________________________________" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|" << std::endl;
		std::cout << "|         " << contact.index << "|" << "||" << std::endl;
	}
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << std::endl;
	return ;
}

int	main(void)
{
	char	input[32];
	int		nb_contact;

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
			add_contact(&nb_contact);
		else
			search_contact(&nb_contact);
		std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
		std::cin >> input;
	}
	return (0);
}