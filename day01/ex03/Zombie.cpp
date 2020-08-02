/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:49 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 13:37:48 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{
	return ;
}

Zombie::~Zombie() 
{
	return ;
}

void	Zombie::setType(std::string type)
{
    this->type = type;
    return ;
}


void	Zombie::setName(std::string name) {
    this->name = name;
    return ;
}

std::string	Zombie::announce()
{
	std::string text;
	text = "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss...";
	return (text);
}
