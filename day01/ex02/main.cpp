/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 13:01:04 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int		main() {
	Zombie *A;
	Zombie *B;
	Zombie *C;
	ZombieEvent event;

	srand(time(NULL));
	event.setZombieType("");
	A = event.randomChump();
	std::cout << A->announce() << std::endl;
	delete A;
	event.setZombieType("actual zombie");
	B = event.randomChump();
	std::cout << B->announce() << std::endl;
	delete B;
	event.setZombieType("senior citizen");
	C = event.randomChump();
	std::cout << C->announce() << std::endl;
	delete C;
	return (0);
}
