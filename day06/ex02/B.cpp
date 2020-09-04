/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:41:46 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:09 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {}

B::~B() {}

B::B(const B &copy) {*this = copy;}

B   &B::operator= (const B &rhs) {
    static_cast<void>(rhs);
    return (*this);
}
