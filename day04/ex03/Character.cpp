/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:50:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/03 17:49:44 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character() {}

Character::~Character() {}

Character::Character(const Character & copy)
{
	this->_name = copy._name;
	this->_inventory[0] = copy._inventory[0];
	this->_inventory[1] = copy._inventory[1];
	this->_inventory[2] = copy._inventory[2];
	this->_inventory[3] = copy._inventory[3];
	return;
}

Character               &Character::operator=(const Character & rhs) {
    int i = 0;
    this->_name = rhs._name;
    while (i < 4)
    {
        this->_inventory[i] = rhs._inventory[i]->clone();
        i++;
    }
    return (*this);
}

Character::Character(const std::string & name) : _name(name) {
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

const std::string       &Character::getName() const {
    return (this->_name);
}

std::string             Character::getInventory(int n) const {
    if (this->_inventory[n] != NULL)
        return (this->_inventory[n]->getType());
    else
        return ("");
}

int                     Character::getXP(int n) const {
    if (this->_inventory[n] != NULL)
        return (this->_inventory[n]->getXP());
    else
        return (0); 
}

void                    Character::equip(AMateria *m) {
    int i = 0;
    while (this->_inventory[i] != NULL && i < 4)
        i++;
    if (i == 4 || m == NULL)
        return ;
    this->_inventory[i] = m;
}

void                    Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3)
        this->_inventory[idx] = NULL;
}

void                    Character::use(int idx, ICharacter & target) {
    if (idx >= 0 && idx <= 3)
        if (this->_inventory[idx] != NULL)
            this->_inventory[idx]->use(target);
}

