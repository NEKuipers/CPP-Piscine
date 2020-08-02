/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 13:43:59 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"



int		main() {
	int n = 20;
	ZombieHorde Uno = ZombieHorde(n);
	Uno.announce(n);
	return (0);
}
