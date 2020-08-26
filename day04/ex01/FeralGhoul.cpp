/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FeralGhoul.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:11:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:11:52 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FeralGhoul.hpp"
#include "Enemy.hpp"

FeralGhoul::FeralGhoul() : FeralGhoul::Enemy(100, "FeralGhoul") {
    std::cout << "* waaaaaaahhhhh *" << std::endl;
}

FeralGhoul::~FeralGhoul() {
    std::cout << "* uuuuuhgghhhh *" << std::endl;
}

FeralGhoul::FeralGhoul(const FeralGhoul &src) {
    *this = src;
}

FeralGhoul &FeralGhoul::operator= (const FeralGhoul &rhs){
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}
