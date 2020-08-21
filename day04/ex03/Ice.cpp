/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:40:14 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 13:26:51 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice & copy) {
    *this = copy;
}

Ice         &Ice::operator=(const Ice & rhs) {
    this->_xp = rhs.getXP();
    return (*this);
}

AMateria    *Ice::clone() const {
    return (new Ice);
}

void        Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
    AMateria::use(target);
}
