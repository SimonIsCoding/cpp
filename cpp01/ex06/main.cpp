/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:07:39 by simon             #+#    #+#             */
/*   Updated: 2024/12/19 15:48:20 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string.h>

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
		return (std::cerr << "Arguments not well written" << std::endl, 1);
	if (strcmp(argv[1], "DEBUG") && strcmp(argv[1], "INFO")
		&& strcmp(argv[1], "WARNING") && strcmp(argv[1], "ERROR"))
		return (std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl, 0);
	std::string level(argv[1]);
	harl.complain(level);
	return (0);
}
