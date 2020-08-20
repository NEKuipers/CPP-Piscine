/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:20:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 12:55:49 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon() : Victim() {
    std::cout << "Zog zog." << std::endl; 
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon & copy) : Victim(copy) {
}

Peon &  Peon::operator=(Peon const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

void    Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
