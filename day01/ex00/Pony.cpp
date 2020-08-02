/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:02:18 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 11:02:30 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string section, std::string wine_pairing) {
	std::cout << "Bought pony" << std::endl;
	this->name = name;
	this->section = section;
	this->wine_pairing = wine_pairing;
}

Pony::~Pony() {
	std::cout << "Pony served" << std::endl;
}
