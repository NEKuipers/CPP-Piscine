/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:54:16 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap();
        ~NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap & copy);
        NinjaTrap &      operator=(NinjaTrap const & rhs);
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            ninjaShoebox(FragTrap & fragtrap);
        void            ninjaShoebox(ScavTrap & scavtrap);
        void            ninjaShoebox(NinjaTrap & ninjatrap);
        void            ninjaShoebox(ClapTrap & claptrap);
    private:
};

#endif
