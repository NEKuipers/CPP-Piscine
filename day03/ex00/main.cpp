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

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap    jim("Jim");
    FragTrap    bob("Bob");

    jim.meleeAttack(bob.getName());
    bob.takeDamage(jim.getMelee_dmg());

    bob.rangedAttack(jim.getName());
    jim.takeDamage(bob.getRanged_dmg());

    jim.vaulthunter_dot_exe(bob.getName());
    bob.takeDamage(jim.getVHDE_dmg());
	
    bob.vaulthunter_dot_exe(jim.getName());
    jim.takeDamage(bob.getVHDE_dmg());

    jim.meleeAttack(bob.getName());
    bob.takeDamage(jim.getMelee_dmg());
    bob.beRepaired(30);
    return (0);
}
