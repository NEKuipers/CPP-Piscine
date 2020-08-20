/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:35:56 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:13:22 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist &copy){
    *this = copy;
}

PowerFist   &PowerFist::operator=(const PowerFist &rhs) {
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    this->_name = rhs._name;
    return (*this);
}

void  PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
