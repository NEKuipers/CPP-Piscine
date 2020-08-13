/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 16:21:13 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 16:33:36 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed() {
    this->_fpval = 0;
    return ;
}

Fixed::~Fixed() {
    return ;
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

Fixed   &Fixed::operator=(const Fixed &rhs) {

    
}