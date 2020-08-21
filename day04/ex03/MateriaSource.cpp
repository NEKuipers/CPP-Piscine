/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 12:25:52 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 12:48:32 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    int i = 0;
    while (i < 4)
    {
        this->_inventory[i] = NULL;
        i++;
    }
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource & copy) {
    *this = copy;
}

MateriaSource       &MateriaSource::operator=(const MateriaSource & rhs){
    int i = 0;
    while (i < 4)
    {
        this->_inventory[i] = rhs._inventory[0]->clone();
        i++;
    }
    return (*this);
}

void                MateriaSource::learnMateria(AMateria *m) {
    int i = 0;
    while (this->_inventory[i] != NULL && i < 4)
        i++;
    if (i == 4)
        return ;
    this->_inventory[i] = m;
}

AMateria            *MateriaSource::createMateria(const std::string & type) {
    if (type == "cure")
        return (new Cure());
    else if (type == "ice")
        return (new Ice());
    else
        return (NULL);
}
