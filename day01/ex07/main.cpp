/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:09:17 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 11:33:32 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Incorrect amount of arguments." << std::endl;
		std::cout << "Correct entry: ./replace <text file> " <<
			"'string one' 'string two'." << std::endl;
		return (1);
	}
	std::string 	buffer;
	std::string 	file = av[1];
	std::string		output = file + ".replace";
	std::string 	s1 = av[2];
	std::string 	s2 = av[3];
	std::ifstream	ifs(file);
	if (ifs.fail())
	{
		std::cout << "File could not be opened." << std::endl;
		return (-1);
	}
	std::ofstream 	ofs(output);
	if (ofs.fail())
	{
		std::cout << "Could not create new file."<< std::endl;
		return (-1);
	}
	while (std::getline(ifs, buffer))
	{
		while (buffer.find(s1) != std::string::npos)
			buffer.replace(buffer.find(s1), s1.length(), s2);
		(ifs.eof()) ? ofs << buffer : ofs << buffer << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
