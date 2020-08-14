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
    std::cout << "Default constructor called." << std::endl;
    return ;
}

Fixed::~Fixed() {
    std::cout << "Destructor called." << std::endl;
    return ;
}

Fixed::Fixed(const Fixed & copy) {
    *this = copy;
    std::cout << "Copy constructor called." << std::endl;
}

Fixed   &Fixed::operator=(const Fixed & rhs) {
    this->_fpval = rhs.getRawBits();
    std::cout << "Assignation operator called." << std::endl;
    return (*this);
}

int    Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called." << std::endl;
    return (this->_fpval);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called." << std::endl;
    this->_fpval = raw;
    return ;
}
