/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 13:18:01 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 13:42:58 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->zombie = new Zombie[n];
	
	for (int i = 0; i < n; i++)
	{
		this->zombie[i].setType("zombie horde member");
		this->zombie[i].setName(this->randomChump());
	}
	return ;
}

ZombieHorde::~ZombieHorde(void) {
	return ;
}


std::string	ZombieHorde::randomChump(void) {
	std::string names[] = {"Barry", "Roger", "Jon", "Walter", "Rick", "Big Dave", "Peanut", "Eddie", "Noodle", "Clement"};

	int n = rand() % 10 + 1;
	return (names[n]);
}

void		ZombieHorde::announce(int n) {
	for (int i = 0; i < n; i++)
		std::cout << this->zombie[i].announce() << std::endl;
	return ;
}
