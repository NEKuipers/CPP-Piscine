/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:12:03 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:31:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include <iostream>

int main()
{
    Character* me = new Character("Nick");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    Enemy* two = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(pf);
    me->attack(two);
    me->attack(two);
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->attack(b);
    return 0;
}
