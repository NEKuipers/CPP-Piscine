/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:09:17 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 17:12:18 by nkuipers      ########   odam.nl         */
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
		return (0);
	}
	std::ifstream	r;
	std::ofstream	w;
	std::string 	buffer;
	std::string 	file = av[1];
	std::string 	s1 = av[2];
	std::string 	s2 = av[3];
	r.open(av[1]);
	if (r.fail())
	{
		std::cout << "File could not be opened." << std::endl;
		return (-1);
	}
	w.open(file.append(".replace"));
	if (w.fail())
	{
		std::cout << "Could not create new file."<< std::endl;
		return (-1);
	}
	while (std::getline(r, buffer))
	{
		if (buffer.find(s1) < buffer.length())
			buffer.replace(buffer.find(s1), s1.length(), s2);
		if (r.eof())
			w << buffer;
		else
			w << buffer << std::endl;
	}
	r.close();
	w.close();
	return (0);
}
