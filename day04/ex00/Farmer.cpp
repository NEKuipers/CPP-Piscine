/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Farmer.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:15:46 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:43:54 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Farmer.hpp"
#include "Victim.hpp"
#include <iostream>

Farmer::Farmer() {
    std::cout << "I'm just a simple farmer." << std::endl; 
}

Farmer::Farmer(std::string name) {
    this->_name = name;
    std::cout << "I'm just a simple farmer." << std::endl;
}

Farmer::~Farmer() {
    std::cout << "Bye Bye!" << std::endl;
}

Farmer::Farmer(const Farmer & copy) {
    *this = copy;
}

Farmer &  Farmer::operator=(Farmer const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

void    Farmer::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cow!" << std::endl;
}
