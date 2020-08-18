/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:54:16 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
    public:
        SuperTrap();
        ~SuperTrap();
        SuperTrap(std::string name);
        SuperTrap(const SuperTrap & copy);
        SuperTrap &      operator=(SuperTrap const & rhs);
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);

};

#endif
