/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:39:03 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:24 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
    public:
        B();
        ~B();
        B(const B &copy);
        B    &operator=(const B &rhs);
};

#endif
