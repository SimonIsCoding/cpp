/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/25 20:25:56 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	is_correct_input(char *str)
{
	printf("strcmp result = %i\n", strcmp(str, "SEARCH"));
	if (strcmp(str, "SEARCH") != 0)
		return (0);
	else
	{
		if (!strcmp(str, "SEARCH"))
			return (2);
	}
	return (21);
	// if (strncmp(str, "SEARCH", 6) != 0 || strncmp(str, "ADD", 3) || strncmp(str, "EXIT", 4))
	// 	return (0);
	// else
	// {
	// 	if (!strcmp(str, "ADD\n"))
	// 		return (1);
	// 	else if (!strcmp(str, "SEARCH\n"))
	// 		return (2);
	// 	else
	// 		return (3);
	// }
}

void	add_contact(void)
{
	printf("ADD written\n");
	return ;
}

void	search_contact(void)
{
	printf("SEARCH written\n");
	return ;
}

int	main(void)
{
	char	input[32];
	int		input_result;

	std::cout << "Welcome to the PhoneBook!\n";
	std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
	std::cin >> input;
	printf("1\n");
	input_result = is_correct_input(input);
	printf("before while(1) input_result = %i\n", input_result);
	while (1)
	{
		while (input_result == 0)
		{
			// printf("in while\n");
			std::cout << "Enter a command like ADD, SEARCH or EXIT: ";
			std::cin >> input;
			sleep(1);
			input_result = is_correct_input(input);
			printf("input_result = %i\n", input_result);
		}
		printf("2\n");
		input_result = is_correct_input(input);
		printf("input_result = %i\n", input_result);
			return (0);
		if (input_result == 3)
			return (0);
		else if (input_result == 2)
			add_contact();
		else
			search_contact();
	}
	return (0);
}