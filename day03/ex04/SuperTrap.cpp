/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 14:01:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <cstdlib>
#include <ctime>

SuperTrap::SuperTrap() {
    std::cout << "SuperTrap is here, it's showtime!" << std::endl;
    return ;
}

SuperTrap::~SuperTrap() {
    std::cout << "Incredible! SUP3R-TP " << this->_name << " has been defeated!" << std::endl;
    return ;
}

SuperTrap::SuperTrap(const SuperTrap & copy) {
    *this = copy;
}

SuperTrap::SuperTrap(std::string name) {
    std::cout << "SUP3R-TP " << name << " is here, it's showtime!" << std::endl;
    this->_name = name;
    this->_hp   = 100;
    this->_maxhp = 100;
    this->_ep = 120;
    this->_maxep = 120;
    this->_lv = 1;
    this->_melee_dmg = 60;
    this->_ranged_dmg = 20;
    this->_armor_dmg_red = 5; 
    return ;
}

SuperTrap &  SuperTrap::operator=(SuperTrap const & rhs) {
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

void    SuperTrap::meleeAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void    SuperTrap::rangedAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}
