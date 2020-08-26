/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FatMan.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:09:24 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:10:03 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FatMan.hpp"

FatMan::FatMan() : AWeapon("Fat Man", 15, 100) {}

FatMan::~FatMan() {}

FatMan::FatMan(const FatMan &copy){
    *this = copy;
}

FatMan   &FatMan::operator=(const FatMan &rhs) {
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    this->_name = rhs._name;
    return (*this);
}

void  FatMan::attack() const {
    std::cout << "* KABOOOOOOOOM *" << std::endl;
}
