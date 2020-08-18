/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:54:16 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & copy);
        FragTrap &      operator=(FragTrap const & rhs);
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            specialAttack(std::string const & target);
        void            ultraAttack(std::string const & target);
        void            uselessAttack(std::string const & target);
        void            vaulthunter_dot_exe(std::string const & target);

        unsigned int    getSpecial_dmg(void);
        unsigned int    getUltra_dmg(void);
        unsigned int    getUseless_dmg(void);
        unsigned int    getVHDE_dmg(void);

    private:
        unsigned int    _special_dmg;
        unsigned int    _ultra_dmg;
        unsigned int    _useless_dmg;
        unsigned int    _vhde_dmg;
};

#endif
