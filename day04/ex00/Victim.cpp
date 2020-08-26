/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:10:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 16:25:54 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim() {
    this->_name = "Barry";
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string name): _name(name) {
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & copy) {
    *this = copy;
}

Victim &  Victim::operator=(Victim const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

void        Victim::setName(std::string name) {
    this->_name = name;
}

std::string Victim::getName() const {
    return (this->_name);
}


std::ostream    &operator<<(std::ostream & os, const Victim & rhs) {
    os << "I am " << rhs.getName()  << ", and I like otters!" << std::endl;
    return (os);
}

void    Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
