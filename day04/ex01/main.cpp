/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:12:03 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:19:38 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "FeralGhoul.hpp"
#include "FatMan.hpp"
#include <iostream>

int main()
{
    Character* me = new Character("Nick");
    std::cout << *me;
    Enemy* radscorpion = new RadScorpion();
    Enemy* mutant = new SuperMutant();
    Enemy* feralghoul = new FeralGhoul();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* fm = new FatMan();


    me->equip(pr);
    std::cout << std::endl;
    std::cout << *me;
    me->attack(radscorpion);
    std::cout << "This attack does " << pr->getDamage() << " points of damage. RadScorpion has remaining HP of " << radscorpion->getHP() << std::endl;
    std::cout << std::endl;
    std::cout << *me;
    me->attack(radscorpion);
    std::cout << "This attack does " << pr->getDamage() << " points of damage. RadScorpion has remaining HP of " << radscorpion->getHP() << std::endl;
    std::cout << *me;
    std::cout << std::endl;
    me->equip(pf);
    std::cout << *me;
    me->attack(mutant);
    std::cout << "This attack does " << pf->getDamage() << " points of damage. Super Mutant has remaining HP of " << mutant->getHP() << std::endl;
    std::cout << std::endl;
    me->attack(mutant);
    std::cout << "This attack does " << pf->getDamage() << " points of damage. Super Mutant has remaining HP of " << mutant->getHP() << std::endl;
    std::cout << std::endl;
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->equip(fm);
    std::cout << std::endl;
    std::cout << *me;
    me->attack(feralghoul);
    std::cout << "This attack does " << fm->getDamage() << " points of damage. Super Mutant has remaining HP of " << feralghoul->getHP() << std::endl;
    delete mutant;
    delete radscorpion;
    delete pr;
    delete pf;
    delete fm;
    delete me;
    return 0;
}
