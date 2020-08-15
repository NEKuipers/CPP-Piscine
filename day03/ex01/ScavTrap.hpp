/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:54:16 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & copy);
        ScavTrap &      operator=(ScavTrap const & rhs);
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            challengeNewcomer(std::string const & target);

        std::string     getName(void);
        unsigned int    getHp(void);
        unsigned int    getMaxhp(void);
        unsigned int    getEp(void);
        unsigned int    getMaxep(void);
        unsigned int    getLv(void);
        unsigned int    getMelee_dmg(void);
        unsigned int    getRanged_dmg(void);
        unsigned int    getArmor_dmg_red(void);

    private:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _maxhp;
        unsigned int    _ep;
        unsigned int    _maxep;
        unsigned int    _lv;
        unsigned int    _melee_dmg;
        unsigned int    _ranged_dmg;
        unsigned int    _armor_dmg_red;
        std::string     _challenge;
};

#endif
