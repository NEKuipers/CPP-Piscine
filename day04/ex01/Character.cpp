/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:00:04 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:14:18 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::Character(const Character &src) {
    *this = src;
}

Character::Character(const std::string &name) {
    this->_ap = 40;
    this->_name = name;
    this->_weapon = NULL;
}

Character::~Character() {
}

Character           &Character::operator= (const Character &rhs) {
    this->_ap = rhs._ap;
    this->_name = rhs._name;
    this->_weapon = rhs._weapon;
    return (*this);
}

std::ostream        &operator<<(std::ostream &os, const Character &rhs) {
    if (rhs.getWeapon() == NULL)
        os << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed." << std::endl;
    else
        os << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << "." << std::endl;
    return (os);
}

void                Character::recoverAP() {
    this->_ap = (this->_ap + 10 > 40) ? 40 : this->_ap + 10;
}

void                Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

void                Character::attack(Enemy *enemy) {
    int   apc;

    if (this->_weapon != NULL && enemy != NULL)
    {
        apc = this->_weapon->getAPCost();
        if (this->_ap - apc >= 0)
        {
          this->_weapon->attack();
          enemy->takeDamage(this->_weapon->getDamage());
          if (enemy->getHP() <= 0)
              delete enemy;
          this->_ap -= apc;
          std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << "." << std::endl;
        }
    }
}

int                 Character::getAP() const {
    return (this->_ap);
}

AWeapon             *Character::getWeapon() const {
    return (this->_weapon);
}

const std::string   Character::getName() const {
    return (this->_name);
}
