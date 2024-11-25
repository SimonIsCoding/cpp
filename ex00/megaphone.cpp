/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:26:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/25 11:42:17 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//this function convert every lower case into upper case
char	toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			std::cout << toupper(argv[1][i]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}