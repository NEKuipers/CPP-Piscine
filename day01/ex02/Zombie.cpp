/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:49 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 12:47:23 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) 
{
	this->type = type;
	this->name = name;
	return ;
}

Zombie::~Zombie() 
{
	return ;
}

std::string	Zombie::announce()
{
	std::string text;
	text = "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss...";
	return (text);
}
