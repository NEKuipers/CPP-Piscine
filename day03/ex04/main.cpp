/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 09:34:39 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 13:58:03 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int     main(void)
{
    FragTrap    freddy("Freddy");
    ScavTrap    steve("Steve");
    ClapTrap    carl("Carl");
    NinjaTrap   nick("Nick");
    SuperTrap   shawn("Shawn");

    shawn.ninjaShoebox(nick);
    shawn.ninjaShoebox(steve);
    shawn.ninjaShoebox(carl);
    shawn.ninjaShoebox(freddy);

    shawn.meleeAttack(carl.getName());
    carl.takeDamage(shawn.getName());

    carl.rangedAttack(shawn.getName());
    shawn.takeDamage(carl.getName());

    return (0);
}
