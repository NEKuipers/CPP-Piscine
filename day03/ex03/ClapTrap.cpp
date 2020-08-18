/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 14:01:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>
#include <ctime>

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap has arrived!" << std::endl;
    return ;
}

ClapTrap::~ClapTrap() {
    std::cout << "CL4P-TP " << this->_name << " is done!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap & copy) {
    *this = copy;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "CL4P-TP " << name << " has arrived!" << std::endl;
    this->_name = name;
    this->_hp   = 100;
    this->_maxhp = 100;
    this->_ep = 50;
    this->_maxep = 50;
    this->_lv = 1;
    this->_melee_dmg = 20;
    this->_ranged_dmg = 15;
    this->_armor_dmg_red = 3; 
    return ;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & rhs) {
    this->_name = rhs._name;
    this->_hp   = rhs._hp;
    this->_maxhp = rhs._maxhp;
    this->_ep = rhs._ep;
    this->_maxep = rhs._maxep;
    this->_lv = rhs._lv;
    this->_melee_dmg = rhs._melee_dmg;
    this->_ranged_dmg = rhs._ranged_dmg;
    this->_armor_dmg_red = rhs._armor_dmg_red;
    return (*this);
}

void        ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "CL4P-TP " << this->_name << " performs a ranged attack on " << target
        << ", causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "CL4P-TP " << this->_name << " performs a melee attack on " << target
        << ", causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    unsigned int dmg;

    dmg = amount - this->_armor_dmg_red;
    this->_hp = (dmg > this->_hp ? 0 : (this->_hp - dmg));
    if (this->_hp == 0)
        std::cout << "CL4P-TP " << this->_name << " has been wiped out." << std::endl;
    else
    {
        std::cout << "CL4P-TP " << this->_name << " has taken " << dmg << " points of damage." << std::endl;
        std::cout << "CL4P-TP " << this->_name << " now has " << this->_hp << " hit points left." << std::endl;
    }
}

void        ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hp == this->_maxhp)
        std::cout << "CL4P-TP " << this->_name << " is already at full health!" << std::endl;
    else
    {
        unsigned int old_hp = this->_hp;
        this->_hp = ((this->_hp + amount) > this->_maxhp) ? this->_maxhp : (this->_hp + amount);
        std::cout << "CL4P-TP " << this->_name << " gets repaired for " << (this->_hp - old_hp) << " hit points." << std::endl;
        std::cout << "Current hp: " << this->_hp << std::endl;
    }
}

std::string     ClapTrap::getName(void) {
    return(this->_name);
}

unsigned int    ClapTrap::getHp(void) {
    return(this->_hp);
}

unsigned int    ClapTrap::getMaxhp(void){
    return (this->_maxhp);
}

unsigned int    ClapTrap::getEp(void){
    return (this->_ep);
}

unsigned int    ClapTrap::getMaxep(void){
    return (this->_maxep);
}

unsigned int    ClapTrap::getLv(void){
    return (this->_lv);
}

unsigned int    ClapTrap::getMelee_dmg(void){
    return (this->_melee_dmg);
}

unsigned int    ClapTrap::getRanged_dmg(void){
    return (this->_ranged_dmg);
}

unsigned int    ClapTrap::getArmor_dmg_red(void){
    return (this->_armor_dmg_red);
}

