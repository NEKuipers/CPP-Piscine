/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 09:52:21 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:29:12 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* billy = new TacticalMarine;
    ISpaceMarine* hans = new AssaultTerminator;
    Squad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(billy);
    vlc->push(hans);
    std::cout << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        std::cout << std::endl;
    }
    vlc->destroySquad();
    delete vlc;
    return 0;
}
