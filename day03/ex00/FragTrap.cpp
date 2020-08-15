/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 09:35:35 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap is here!" << std::endl;
    return ;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap is retreating!" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : _name(name) {
    std::cout << "FragTrap " << name << " is here!" << std::endl;
    return ;
}

void        FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << "at range, causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a melee attack, causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        FragTrap::specialAttack(std::string const & target) {

}

void        FragTrap::ultraAttack(std::string const & target) {

}

void        FragTrap::uselessAttack(std::string const & target) {

}

void        FragTrap::takeDamage(std::string const & target) {

}

void        FragTrap::beRepaired(std::string const & target) {

}

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {

}
