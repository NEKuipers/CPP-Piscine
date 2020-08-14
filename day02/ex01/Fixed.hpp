/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 16:21:14 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 16:44:51 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed & copy);
        Fixed(const int val);
        Fixed(const float val);
        Fixed &     operator=(const Fixed & rhs);
        int         getRawBits(void) const;
        void        setRawBits(int const);
        float       toFloat(void) const;
        int         toInt(void) const;

    private:
            int                 _fpval;
            static const int    _fbits = 8;
};

std::ostream            &operator<<(std::ostream & out, Fixed const & rhs);

#endif
