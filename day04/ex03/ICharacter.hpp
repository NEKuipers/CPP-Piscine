/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:48:23 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 12:49:32 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"
# include <iostream>

class AMateria;

class ICharacter
{
    public:
        virtual                     ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void                equip(AMateria* m) = 0;
        virtual void                unequip(int idx) = 0;
        virtual void                use(int idx, ICharacter& target) = 0;
};

#endif
