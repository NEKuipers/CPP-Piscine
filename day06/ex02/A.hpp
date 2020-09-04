/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:38:23 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:43:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
    public:
        A();
        ~A();
        A(const A &copy);
        A    &operator=(const A &rhs);
};

#endif
