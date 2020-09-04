/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:36:50 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:33 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}

Base::~Base() {}

Base::Base(const Base &copy) {*this = copy;}

Base        &Base::operator= (const Base &rhs) {
    static_cast<void>(rhs);
    return (*this);
}
