/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:20:45 by nkuipers      ########   odam.nl         */
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

FragTrap::FragTrap(const FragTrap & copy) {
    *this = copy;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FragTrap " << name << " is here!" << std::endl;
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
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << "at range, causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a melee attack, causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        FragTrap::specialAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a special attack, causing " << _special_dmg << " points of damage!" << std::endl;
}

void        FragTrap::ultraAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with an ultra attack, causing " << _ultra_dmg << " points of damage!" << std::endl;
}

void        FragTrap::uselessAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
        << " with a useless attack, causing " << _useless_dmg << " points of damage!" << std::endl;
}

void        FragTrap::takeDamage(std::string const & target) {

}

void        FragTrap::beRepaired(std::string const & target) {

}

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {

}

std::string     FragTrap::getName(void) {
    return(this->_name);
}
unsigned int    FragTrap::getHp(void) {
    return(this->_hp);
}
unsigned int    FragTrap::getMaxhp(void){
    return (this->_maxhp);
}
unsigned int    FragTrap::getEp(void){
    return (this->_ep);
}
unsigned int    FragTrap::getMaxep(void){
    return (this->_maxep);
}
unsigned int    FragTrap::getLv(void){
    return (this->_lv);
}
unsigned int    FragTrap::getMelee_dmg(void){
    return (this->_melee_dmg);
}
unsigned int    FragTrap::getRanged_dmg(void){
    return (this->_ranged_dmg);
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
unsigned int    FragTrap::getArmor_dmg_red(void){
    return (this->_armor_dmg_red);
}
