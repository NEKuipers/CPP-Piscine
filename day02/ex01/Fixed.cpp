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
#include <cmath>

const int      Fixed::_fbits = 8;

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

Fixed::Fixed(const int val) {
    std::cout << "Int constructor called." << std::endl;
    setRawBits(val << this->_fbits);
    return ;
}

Fixed::Fixed(const float val) {
    setRawBits(roundf(val * (1 << this->_fbits)));
    std::cout << "Float constructor called." << std::endl;
    return ;
}

Fixed   &Fixed::operator=(const Fixed & rhs) {
    if (this != &rhs)
        this->_fpval = rhs.getRawBits();
    std::cout << "Assignation operator called." << std::endl;
    return (*this);
}

int    Fixed::getRawBits(void) const {
    return (this->_fpval);
}

void    Fixed::setRawBits(int const raw) {
    this->_fpval = raw;
    return ;
}

float   Fixed::toFloat(void) const {
    return ((float)getRawBits() / (1 << this->_fbits));
}

int     Fixed::toInt(void) const {
    return (getRawBits() >> this->_fbits);
}

std::ostream            &operator<<(std::ostream & out, Fixed const & rhs) {
    return (out << rhs.toFloat());
}
