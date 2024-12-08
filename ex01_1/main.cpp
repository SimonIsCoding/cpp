/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/12/08 18:43:30 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdio.h>

void	add_contact(Contact &contact, int *nb_contact, Phonebook phonebook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	contact.set_index(++(*nb_contact));//il faut s'assurer que si l'index est superieur a 8, on efface le premier et on soustrait de 1 tous les autres
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
	// std::cout << "index: " << contact.get_contact_index() << std::endl;
	// std::cout << "first_name: " << contact.get_first_name() << std::endl;
	// std::cout << "last_name: " << contact.get_last_name() << std::endl;
	// std::cout << "nickname: " << contact.get_nickname() << std::endl;
	// std::cout << "phone_number: " << contact.get_phone_number() << std::endl;
	// std::cout << "darkest_secret: " << contact.get_darkest_secret() << std::endl;

	phonebook.add_to_phonebook(first_name, last_name, nickname, phone_number, darkest_secret, *nb_contact);
	return ;
}

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

void	Phonebook::show_contact_details(std::string input)
{
	int	number;

	std::istringstream(input) >> number;
	if (number <= _current_size)//si le number n'appartient a aucun index de phonebook
	{
		std::cout << "The Index is out of range" << std::endl;//on imprime un message d'erreur et on a arrete cette fonction
		return ;
	}
	else
	{
		for (int i = 1; i < _current_size; i++)
			if (_contact[i].get_contact_index() == number)
				print_contact_details(_contact[i]);
	}
}

int	main(void)
{
	char		input[32];
	int			nb_contact;
	Contact		contact;
	Phonebook	phonebook;

	nb_contact = 0;
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
			add_contact(contact, &nb_contact, phonebook);
		else
			phonebook.search_contact(contact, &nb_contact);
		std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
		std::cin >> input;
	}
	return (0);
}