/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 09:48:07 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 10:14:44 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine & copy) {
    *this = copy;
}

TacticalMarine      &TacticalMarine::operator=(const TacticalMarine & rhs) {
    (void)rhs;
    return (*this);
}

TacticalMarine      *TacticalMarine::clone() const {
    return (new TacticalMarine);
}

void                TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void                TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}
