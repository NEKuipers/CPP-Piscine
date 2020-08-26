/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:34:08 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:26:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad() {
    this->_count = 0;
    this->_squad = NULL;
}

Squad::~Squad() {
    this->destroySquad();
}

Squad::Squad(const Squad & copy) {
    this->copySquad(copy);
    this->_count = copy._count;
}

Squad           &Squad::operator=(const Squad & rhs) {
    this->destroySquad();
    this->copySquad(rhs);
    this->_count = rhs._count;
    return (*this);
}

int             Squad::getCount() const {
    return (this->_count);
}

ISpaceMarine    *Squad::getUnit(int n) const {
    t_unit      *temp;
    
    temp = this->_squad;
    if (n >= this->_count || n < 0)
        return (NULL);
    while (n != 0)
    {
        temp = temp->next;
        n--;
    }
    return (temp->soldier);
}

int             Squad::push(ISpaceMarine *marine) {
    t_unit  *temp;

    temp = this->_squad;
    if (marine != NULL && unitInSquad(marine, temp) == 0)
    {
        temp = this->_squad;
        if (temp == NULL)
        {
            this->_squad = new t_unit;
            this->_squad->soldier = marine;
            this->_squad->next = NULL;
        }
        else
        {
            while (temp->next)
                temp = temp->next;
            temp->next = new t_unit;
            temp->next->soldier = marine;
            temp->next->next = NULL;
        }
        this->_count++;
    }
    return (this->_count);
}

void            Squad::copySquad(const Squad &squad) {
    int i;

    i = 0;
    while (i < squad.getCount())
    {
        push(squad.getUnit(i));
        i++;
    }
}

void            Squad::destroySquad() {
    t_unit      *temp;

    while (this->_squad != NULL)
    {
        delete this->_squad->soldier;
        temp = this->_squad;
        this->_squad = this->_squad->next;
        delete temp;
    }
}

int            Squad::unitInSquad(ISpaceMarine *marine, t_unit *squad)
{
    if (squad == NULL)
        return (0);
    else if (marine == squad->soldier)
        return (1);
    else
        return (this->unitInSquad(marine, squad->next));
}
