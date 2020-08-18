/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:54:16 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & copy);
        ClapTrap &      operator=(ClapTrap const & rhs);
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            specialAttack(std::string const & target);
        void            ultraAttack(std::string const & target);
        void            uselessAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        std::string     getName(void);
        unsigned int    getHp(void);
        unsigned int    getMaxhp(void);
        unsigned int    getEp(void);
        unsigned int    getMaxep(void);
        unsigned int    getLv(void);
        unsigned int    getMelee_dmg(void);
        unsigned int    getRanged_dmg(void);
        unsigned int    getArmor_dmg_red(void);

    protected:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _maxhp;
        unsigned int    _ep;
        unsigned int    _maxep;
        unsigned int    _lv;
        unsigned int    _melee_dmg;
        unsigned int    _ranged_dmg;
        unsigned int    _armor_dmg_red;
};

#endif
