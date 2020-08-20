/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:54:26 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:59:31 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : RadScorpion::Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src) {
    *this = src;
}

RadScorpion &RadScorpion::operator= (const RadScorpion &rhs){
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}
