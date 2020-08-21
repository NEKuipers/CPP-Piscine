/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:47:31 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 13:26:41 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure & copy) {
    *this = copy;
}

Cure         &Cure::operator=(const Cure & rhs) {
    this->_xp = rhs.getXP();
    return (*this);
}

AMateria    *Cure::clone() const {
    return (new Cure);
}

void        Cure::use(ICharacter & target) {
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
    AMateria::use(target);
}
