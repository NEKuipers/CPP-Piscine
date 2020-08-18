/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:35 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 14:01:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <cstdlib>
#include <ctime>

NinjaTrap::NinjaTrap() {
    std::cout << "NinjaTrap is ready to fight!" << std::endl;
    return ;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "N1NJ4-TP " << this->_name << " retreats with honor!" << std::endl;
    return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap & copy) {
    *this = copy;
}

NinjaTrap::NinjaTrap(std::string name) {
    std::cout << "N1NJ4-TP " << name << " is ready to fight!" << std::endl;
    this->_name = name;
    this->_hp   = 60;
    this->_maxhp = 60;
    this->_ep = 120;
    this->_maxep = 120;
    this->_lv = 1;
    this->_melee_dmg = 60;
    this->_ranged_dmg = 5;
    this->_armor_dmg_red = 0; 
    return ;
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const & rhs) {
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

void        NinjaTrap::rangedAttack(std::string const & target) {
    std::cout << "N1NJ4-TP " << this->_name << " performs a ranged attack on " << target
        << ", causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void        NinjaTrap::meleeAttack(std::string const & target) {
    std::cout << "N1NJ4-TP " << this->_name << " performs a melee attack on " << target
        << ", causing " << _melee_dmg << " points of damage!" << std::endl;
}

void        NinjaTrap::ninjaShoebox(ClapTrap & claptrap) {
    std::cout << this->_name << " : ClapTraps stand no chance against me, " << claptrap.getName() << "!" << std::endl;
}

void        NinjaTrap::ninjaShoebox(FragTrap & fragtrap) {
    std::cout << this->_name << " : FragTraps stand no chance against me, " << fragtrap.getName() << "!" << std::endl;
}

void        NinjaTrap::ninjaShoebox(ScavTrap & scavtrap) {
    std::cout << this->_name << " : ScavTraps stand no chance against me, " << scavtrap.getName() << "!" << std::endl;    
}

void        NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap) {
    std::cout << this->_name << " : NinjaTraps stand no chance against me, " << ninjatrap.getName() << "!" << std::endl;    
}
