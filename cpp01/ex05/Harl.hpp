/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:12:53 by simon             #+#    #+#             */
/*   Updated: 2024/12/12 15:24:11 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <fstream>
#include <iostream>

class	Harl
{
	private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

	public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif