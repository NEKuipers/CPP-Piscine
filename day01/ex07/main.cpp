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
	}
	std::string buffer;
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];


	return (0);
}
