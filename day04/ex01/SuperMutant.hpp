/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:50:57 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:53:10 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        virtual ~SuperMutant();
        SuperMutant(const SuperMutant &src);
        SuperMutant   &operator= (const SuperMutant &rhs);
        virtual void  takeDamage(int damage);
};

#endif
