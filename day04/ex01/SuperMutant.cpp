/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:50:58 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:16:34 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : SuperMutant::Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src){
    *this = src;
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator= (const SuperMutant &rhs){
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

void        SuperMutant::takeDamage(int damage){
    damage -= 3;
    if (damage < 0)
        damage = 0;
    if (this->_hp - damage <= 0)
        this->_hp = 0;
    else
        this->_hp -= damage;
}
