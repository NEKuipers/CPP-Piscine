/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 09:46:54 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 10:00:58 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>


class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        ~AssaultTerminator();
        AssaultTerminator(const AssaultTerminator & copy);
        AssaultTerminator           &operator=(const AssaultTerminator & rhs);

        virtual AssaultTerminator   *clone() const;
        virtual void                battleCry() const;
        virtual void                rangedAttack() const;
        virtual void                meleeAttack() const;
};

#endif
