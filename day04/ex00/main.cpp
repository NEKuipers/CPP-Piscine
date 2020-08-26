/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:40:38 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 16:31:53 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Farmer.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << joe.getName() << std::endl;
    Farmer wim("Wim");
    std::cout << robert << jim << joe << wim;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(wim);
    return (0);
}
