/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 09:48:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 10:14:57 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();
        TacticalMarine(const TacticalMarine & copy);
        TacticalMarine      &operator=(const TacticalMarine & rhs);
        virtual TacticalMarine  *clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;
};

#endif
