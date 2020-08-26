/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Farmer.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:15:46 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 16:21:20 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Farmer.hpp"
#include "Victim.hpp"
#include <iostream>

Farmer::Farmer(std::string name): Victim(name) {
    std::cout << "I'm just a simple farmer." << std::endl;
}

Farmer::~Farmer() {
    std::cout << "Bye Bye!" << std::endl;
}

Farmer::Farmer(const Farmer & copy): Victim(copy) {
    *this = copy;
}

std::string		Farmer::getName(void) const
{
	return (this->_name);
}

Farmer &  Farmer::operator=(Farmer const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

void    Farmer::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a cow!" << std::endl;
}
