/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:13:12 by simon             #+#    #+#             */
/*   Updated: 2024/12/19 16:40:32 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int	index;

	index = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			index = i;
	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			_debug();
			std::cout << "[ INFO ]" << std::endl;
			_info();
			std::cout << "[ WARNING ]" << std::endl;
			_warning();
			std::cout << "[ ERROR ]" << std::endl;
			_error();
			break ;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			_info();
			std::cout << "[ WARNING ]" << std::endl;
			_warning();
			std::cout << "[ ERROR ]" << std::endl;
			_error();
			break ;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			_warning();
			std::cout << "[ ERROR ]" << std::endl;
			_error();
			break ;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			_error();
			break ;
	}
}