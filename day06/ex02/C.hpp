/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:39:37 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:44 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
    public:
        C();
        ~C();
        C(const C &copy);
        C    &operator=(const C &rhs);
};

#endif
