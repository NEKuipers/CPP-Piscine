/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 09:46:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 10:01:10 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & copy) {
    *this = copy;
}

AssaultTerminator   &AssaultTerminator::operator=(const AssaultTerminator & rhs) {
    (void)rhs;
    return (*this);
}

AssaultTerminator   *AssaultTerminator::clone() const {
    return (new AssaultTerminator);
}

void        AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void        AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void        AssaultTerminator::meleeAttack() const {
    std::cout <<  "* attacks with chainfists *" << std::endl;
}
