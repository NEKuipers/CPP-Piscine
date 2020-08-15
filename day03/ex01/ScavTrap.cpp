/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 14:01:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>
#include <ctime>

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap has arrived to defend my evil lair!" << std::endl;
    return ;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP " << this->_name << " will let you pass!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap & copy) {
    *this = copy;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "SC4V-TP " << name << " has arrived to defend my evil lair!" << std::endl;
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

ScavTrap &  ScavTrap::operator=(ScavTrap const & rhs) {
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

void        ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "SC4V-TP " << this->_name << " performs a ranged attack on " << target
        << ", causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "SC4V-TP " << this->_name << " performs a melee attack on " << target
        << ", causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount) {
    unsigned int dmg;

    dmg = amount - this->_armor_dmg_red;
    this->_hp = (dmg > this->_hp ? 0 : (this->_hp - dmg));
    if (this->_hp == 0)
        std::cout << "SC4V-TP " << this->_name << " has been wiped out." << std::endl;
    else
    {
        std::cout << "SC4V-TP " << this->_name << " has taken " << dmg << " points of damage." << std::endl;
        std::cout << "SC4V-TP " << this->_name << " now has " << this->_hp << " hit points left." << std::endl;
    }
}

void        ScavTrap::beRepaired(unsigned int amount) {
    if (this->_hp == this->_maxhp)
        std::cout << "SC4V-TP " << this->_name << " is already at full health!" << std::endl;
    else
    {
        unsigned int old_hp = this->_hp;
        this->_hp = ((this->_hp + amount) > this->_maxhp) ? this->_maxhp : (this->_hp + amount);
        std::cout << "SC4V-TP " << this->_name << " gets repaired for " << (this->_hp - old_hp) << " hit points." << std::endl;
        std::cout << "Current hp: " << this->_hp << std::endl;
    }
}

void        ScavTrap::challengeNewcomer(std::string const & target) {
    int challenge;

    srand(time(NULL));
    challenge = rand() % 5;
    std::string challenges[] = {
        "drink a bottle of beer tornado style",
        "put shoe on head",
        "slap yourself in the face with a fish",
        "do 20 pushups",
        "take a shot of jagermeister"
    };
    this->_challenge = challenges[challenge];
    std::cout << this->_name << " says: I challenge " << target << " to " << this->_challenge << "!!" << std::endl;
    return ;
}

std::string     ScavTrap::getName(void) {
    return(this->_name);
}

unsigned int    ScavTrap::getHp(void) {
    return(this->_hp);
}

unsigned int    ScavTrap::getMaxhp(void){
    return (this->_maxhp);
}

unsigned int    ScavTrap::getEp(void){
    return (this->_ep);
}

unsigned int    ScavTrap::getMaxep(void){
    return (this->_maxep);
}

unsigned int    ScavTrap::getLv(void){
    return (this->_lv);
}

unsigned int    ScavTrap::getMelee_dmg(void){
    return (this->_melee_dmg);
}

unsigned int    ScavTrap::getRanged_dmg(void){
    return (this->_ranged_dmg);
}

unsigned int    ScavTrap::getArmor_dmg_red(void){
    return (this->_armor_dmg_red);
}

