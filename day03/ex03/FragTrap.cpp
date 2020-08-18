/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 14:01:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap() {
    std::cout << "FragTrap is here!" << std::endl;
    return ;
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP " << this->_name << " is retreating!" << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap & copy) {
    *this = copy;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FR4G-TP " << name << " is here!" << std::endl;
    this->_name = name;
    this->_hp   = 100;
    this->_maxhp = 100;
    this->_ep = 100;
    this->_maxep = 100;
    this->_lv = 1;
    this->_melee_dmg = 30;
    this->_ranged_dmg = 20;
    this->_special_dmg = 50;
    this->_ultra_dmg = 75;
    this->_useless_dmg = 1;
    this->_armor_dmg_red = 5;
    return ;
}

FragTrap &  FragTrap::operator=(FragTrap const & rhs) {
    this->_name = rhs._name;
    this->_hp   = rhs._hp;
    this->_maxhp = rhs._maxhp;
    this->_ep = rhs._ep;
    this->_maxep = rhs._maxep;
    this->_lv = rhs._lv;
    this->_melee_dmg = rhs._melee_dmg;
    this->_ranged_dmg = rhs._ranged_dmg;
    this->_special_dmg = rhs._special_dmg;
    this->_ultra_dmg = rhs._ultra_dmg;
    this->_useless_dmg = rhs._useless_dmg;
    this->_armor_dmg_red = rhs._armor_dmg_red;
    return (*this);
}

void        FragTrap::rangedAttack(std::string const & target) {
    this->_vhde_dmg = this->_ranged_dmg;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " at range, causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target) {
    this->_vhde_dmg = this->_melee_dmg;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a melee attack, causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        FragTrap::specialAttack(std::string const & target) {
    this->_vhde_dmg = this->_special_dmg;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a special attack, causing " << _special_dmg << " points of damage!" << std::endl;
}

void        FragTrap::ultraAttack(std::string const & target) {
    this->_vhde_dmg = this->_ultra_dmg;
    std::cout << "BOOM! FR4G-TP " << this->_name << " attacks " << target
        << " with an ultra attack, causing " << _ultra_dmg << " points of damage!" << std::endl;
}

void        FragTrap::uselessAttack(std::string const & target) {
    this->_vhde_dmg = this->_useless_dmg;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a useless attack, causing " << _useless_dmg << " points of damage!" << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    int attack;

    srand(time(NULL));
    attack = rand() % 5;
    if (this->_ep < 25)
        std::cout << "FR4G-TP " << this->_name << " is out of energy." << std::endl;
    else
    {
        if (attack == 0)
            FragTrap::meleeAttack(target);
        if (attack == 1)
            FragTrap::rangedAttack(target);
        if (attack == 2)
            FragTrap::specialAttack(target);
        if (attack == 3)
            FragTrap::ultraAttack(target);
        if (attack == 4)
            FragTrap::uselessAttack(target);
        this->_ep -= 25;
    }
}

unsigned int    FragTrap::getSpecial_dmg(void){
    return (this->_special_dmg);
}

unsigned int    FragTrap::getUltra_dmg(void){
    return (this->_ultra_dmg);
}

unsigned int    FragTrap::getUseless_dmg(void){
    return (this->_ultra_dmg);
}

unsigned int    FragTrap::getVHDE_dmg(void) {
    return (this->_vhde_dmg);
}
