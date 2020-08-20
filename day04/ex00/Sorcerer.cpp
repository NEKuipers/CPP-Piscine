/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:41:34 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 11:26:24 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(void)
{
    this->_name = "Ralph";
    this->_title = "the confused wizard";
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
    return ;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) {
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
    return ;
}

Sorcerer::Sorcerer(const Sorcerer & copy) {
    *this = copy;
    return ;
}

Sorcerer &  Sorcerer::operator=(Sorcerer const & rhs) {
    this->_name = rhs._name;
    this->_title = rhs._title;
    return (*this);
}

void        Sorcerer::setName(std::string name) {
    this->_name = name;
    return ;
}

void        Sorcerer::setTitle(std::string title) {
    this->_title = title;
}

std::string Sorcerer::getName() const {
    return (this->_name);
}

std::string Sorcerer::getTitle() const {
    return (this->_title);
}

void    Sorcerer::polymorph(const Victim &victim) const {
    return (victim.getPolymorphed());
}

std::ostream    &operator<<(std::ostream & os, const Sorcerer & rhs) {
    os << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
    return (os);
}
