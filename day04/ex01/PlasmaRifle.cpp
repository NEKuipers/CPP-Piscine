/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:29:19 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:13:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy){
    *this = copy;
}

PlasmaRifle   &PlasmaRifle::operator=(const PlasmaRifle &rhs) {
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    this->_name = rhs._name;
    return (*this);
}

void  PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
