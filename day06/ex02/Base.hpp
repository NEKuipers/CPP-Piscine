/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:36:26 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 17:01:43 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class A;
class B;
class C;

class Base
{
    public:
        Base();
        virtual ~Base();
        Base(const Base &copy);
        Base    &operator=(const Base &rhs);
};

#endif
