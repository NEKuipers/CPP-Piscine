/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:39:32 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:50:21 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::~Enemy()  {}

Enemy::Enemy(const Enemy & copy) {
    *this = copy;
}

Enemy::Enemy(int hp, const std::string &type) {
    this->_hp = hp;
    this->_type = type;
}

Enemy               &Enemy::operator= (const Enemy &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

int                 Enemy::getHP() const {
    return (this->_hp);
}

const std::string   Enemy::getType() const {
    return (this->_type);
}

void                Enemy::takeDamage(int damage) {
    if (this->_hp - damage <= 0)
        this->_hp = 0;
    else
        this->_hp -= damage;
}
