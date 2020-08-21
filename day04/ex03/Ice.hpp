/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:40:19 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 11:42:29 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice & copy);
        Ice             &operator=(const Ice & rhs);
        AMateria        *clone() const;
        virtual void    use(ICharacter & target);
};

#endif
