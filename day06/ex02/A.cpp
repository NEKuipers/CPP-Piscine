/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:40:10 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:18 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A() {}

A::~A() {}

A::A(const A &copy) {*this = copy;}

A   &A::operator= (const A &rhs) {
    static_cast<void>(rhs);
    return (*this);
}
