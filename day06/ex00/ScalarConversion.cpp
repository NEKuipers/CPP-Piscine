/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConversion.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 11:43:47 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/09 09:35:12 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <cmath>
#include <cfloat>
#include <limits>

ScalarConversion::ScalarConversion() {}

ScalarConversion::~ScalarConversion() {}

ScalarConversion::ScalarConversion(const ScalarConversion & copy) {
    *this = copy;
}

ScalarConversion    &ScalarConversion::operator=(const ScalarConversion & rhs) {
    static_cast<void>(rhs);
    return *this;
}

char                ScalarConversion::convchar(double x) {
    char c;
    if (std::isnan(x) || x > 128 || x < 0)
        throw (ScalarConversion::Impossible());
    c = static_cast<char>(x);
    if (c == 127 || c < 32)
        throw (ScalarConversion::NonDisplayable());
    return (c);
}

int                 ScalarConversion::convint(double x) {
    if (std::isnan(x) || std::isinf(x) || x > 2147483647 || x < -2147483648)
        throw (ScalarConversion::Impossible());
    return (static_cast<int>(x));
}

double              ScalarConversion::convdouble(double x) {
    if (x > __DBL_MAX__ || x < -__DBL_MAX__)
        throw (ScalarConversion::Impossible());
    return (static_cast<double>(x));
}

float              ScalarConversion::convfloat(double x) {
    if (x > __FLT_MAX__ || x < -__FLT_MAX__)
        throw (ScalarConversion::Impossible());
    return (static_cast<float>(x));
}

ScalarConversion::NonDisplayable::NonDisplayable() {}

ScalarConversion::NonDisplayable::~NonDisplayable() throw() {}

ScalarConversion::NonDisplayable::NonDisplayable(ScalarConversion::NonDisplayable const &src) {
    *this = src;
}

ScalarConversion::NonDisplayable    &ScalarConversion::NonDisplayable::operator=(const ScalarConversion::NonDisplayable &rhs) {
    static_cast<void>(rhs);
    return (*this);
}

const char                          *ScalarConversion::NonDisplayable::what() const throw() {
    return("Non displayable");
}

ScalarConversion::Impossible::Impossible() {}

ScalarConversion::Impossible::Impossible(ScalarConversion::Impossible const &src) {
    *this = src;
}

ScalarConversion::Impossible::~Impossible() throw() {}

ScalarConversion::Impossible        &ScalarConversion::Impossible::operator=(const ScalarConversion::Impossible &rhs) {
    static_cast<void>(rhs);
    return (*this);
}

const char                          *ScalarConversion::Impossible::what() const throw() {
    return("impossible");
}
