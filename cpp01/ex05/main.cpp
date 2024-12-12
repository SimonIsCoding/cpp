/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:16:30 by simon             #+#    #+#             */
/*   Updated: 2024/12/12 15:53:32 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "DEBUG Level" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO Level" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "WARNING Level" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "ERROR Level" << std::endl;
	harl.complain("ERROR");
	return (0);
}