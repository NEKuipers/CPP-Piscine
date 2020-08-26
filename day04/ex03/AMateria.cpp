/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:29:29 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:40:46 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(const std::string & type) : _xp(0) {
    this->_type = type;
}

AMateria::AMateria(const AMateria & copy) {
    *this = copy;
}

AMateria    &AMateria::operator=(const AMateria & rhs) {
    this->_type = rhs._type;
    this->_xp = rhs._xp;
    return (*this);
}

const std::string       &AMateria::getType() const {
    return (this->_type);
}

unsigned int            AMateria::getXP() const {
    return (this->_xp);
}

void	AMateria::use(ICharacter & target) {
	(void)target;
}

void    AMateria::XPinc() {
    this->_xp += 10;
}
