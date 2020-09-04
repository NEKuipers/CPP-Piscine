/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:42:21 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:44:46 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C() {}

C::~C() {}

C::C(const C & copy) {*this = copy;}

C   &C::operator=(const C & rhs) {
    static_cast<void>(rhs);
    return *this;
}
