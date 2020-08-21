/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:46:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 11:47:23 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure & copy);
        Cure             &operator=(const Cure & rhs);
        AMateria        *clone() const;
        virtual void    use(ICharacter & target);
};

#endif
