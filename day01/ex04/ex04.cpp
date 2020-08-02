/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 13:09:00 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/02 13:12:41 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		brain(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*pointer = &brain;
	std::string &ref = brain;

	std::cout << "Normal string : " << brain << std::endl;
	std::cout << "Pointer to string : " << *pointer << std::endl;
	std::cout << "Reference to string : " << brain << std::endl;
}

int			main(void)
{
	brain();
	return (0);
}