/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FeralGhoul.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:12:12 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:12:31 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FERALGHOUL_HPP
# define FERALGHOUL_HPP
# include "Enemy.hpp"
# include <iostream>

class FeralGhoul : public Enemy
{
    public:
        FeralGhoul();
        virtual ~FeralGhoul();
        FeralGhoul(const FeralGhoul & copy);
        FeralGhoul     &operator=(const FeralGhoul &rhs);
};

#endif
