/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:00:17 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 17:03:29 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType()
{
	return (_type);
}
