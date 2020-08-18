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


int     main(void)
{
    FragTrap    freddy("Freddy");
    ScavTrap    steve("Steve");
    ClapTrap    carl("Carl");
    NinjaTrap   nick("Nick");
    NinjaTrap   neil("Neil");

    nick.ninjaShoebox(neil);
    nick.ninjaShoebox(steve);
    nick.ninjaShoebox(carl);
    nick.ninjaShoebox(freddy);

    return (0);
}
