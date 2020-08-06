/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:54 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 13:39:19 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib> 

ZombieEvent::ZombieEvent() {
	return ;
}

ZombieEvent::~ZombieEvent() {
	return ;
}

void		ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

std::string ZombieEvent::getZombieType(void) {
	return (this->type);
}

Zombie		*ZombieEvent::newZombie(std::string name) {
	return new Zombie(type, name);
}

Zombie		*ZombieEvent::randomChump(void) {
	std::string names[] = {"Barry", "Roger", "Jon", "Walter", "Rick", "Big Dave", "Peanut", "Eddie", "Noodle", "Clement"};

	int n = rand() % 10;
	if (this->type == "")
		this->setZombieType("Not actually a zombie, just really drunk");
	return (this->newZombie(names[n]));
}
