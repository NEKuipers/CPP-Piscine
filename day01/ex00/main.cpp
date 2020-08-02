/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:00:05 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 11:49:34 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 	ponyOnTheStack(std::string name, std::string section,
		std::string wine_pairing) {
	Pony ponyS = Pony(name, section, wine_pairing);
	std::cout << "Pony on the stack's name is " << ponyS.name << ", its best section is " << ponyS.section << ", and a " << ponyS.wine_pairing << " goes well with it." << std::endl;
	return ;
}

void	ponyOnTheHeap(std::string name, std::string section,
		std::string wine_pairing) {
	Pony *ponyH = new Pony(name, section, wine_pairing);
	std::cout << "Pony on the heap's name is " << ponyH->name << ", its best section is " << ponyH->section << ", and a " << ponyH->wine_pairing << " goes well with it." << std::endl;
	delete ponyH;
	return ;
}

int		main() { 
	ponyOnTheStack("Barry", "sirloin", "barolo");
	ponyOnTheHeap("Roger", "bavette", "pinot noir");
	
	return (0);
}
