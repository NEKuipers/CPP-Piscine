/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:16:09 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:27:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
    this->_damage = damage;
    this->_apcost = apcost;
    this->_name = name;
}

AWeapon::AWeapon(const AWeapon &src) {
    *this = src;
}

AWeapon             &AWeapon::operator= (const AWeapon &rhs) {
    this->_damage = rhs._damage;
    this->_apcost = rhs._apcost;
    this->_name = rhs._name;
    return (*this);
}

int                 AWeapon::getAPCost() const {
    return (this->_apcost);
}

int                 AWeapon::getDamage() const {
    return (this->_damage);
}

const std::string   AWeapon::getName() const {
    return (this->_name);
}
