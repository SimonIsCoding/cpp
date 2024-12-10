/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:58:13 by simon             #+#    #+#             */
/*   Updated: 2024/12/10 17:13:54 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "&string memory address    : " << &string << std::endl;
	std::cout << "stringPTR memory address  : " << stringPTR << std::endl;
	std::cout << "&stringREF memory address : " << &stringREF << std::endl;
	
	std::cout << "string content    : " << string << std::endl;
	std::cout << "*stringPTR content: " << *stringPTR << std::endl;
	std::cout << "stringREF content : " << stringREF << std::endl;
	return (0);
}