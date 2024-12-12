/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:47:07 by simon             #+#    #+#             */
/*   Updated: 2024/12/12 11:59:47 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	read_and_replace_occurrence(std::string reference, std::string replaced,
		std::ifstream& filename, std::ofstream& filename_replace)
{
	std::string		line;
	size_t			pos;

	while (std::getline(filename, line))
	{
		pos = 0;
		while ((pos = line.find(reference, pos)) != std::string::npos)
		{
			line.erase(pos, reference.length());
			line.insert(pos, replaced);
			pos += replaced.length();
		}
		if (!filename.eof())
			filename_replace << line << std::endl;
		else
			filename_replace << line;
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	filename;
	std::ofstream	filename_replace;//type output file
	std::string		filename_replace_name;

	if (argc != 4)
		return (std::cerr << "Not good input." << std::endl, 1);
	filename.open(argv[1]);
	if (!filename.is_open())
		return (2);
	filename_replace_name = std::string(argv[1]) + ".replace";
	filename_replace.open(filename_replace_name.c_str());
	if (!filename.is_open())
		return (filename.close(), 3);
	read_and_replace_occurrence(argv[2], argv[3], filename, filename_replace);
	filename.close();
	filename_replace.close();
	return (0);
}