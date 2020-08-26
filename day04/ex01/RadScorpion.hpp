/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:54:28 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:53:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(const RadScorpion & copy);
        RadScorpion     &operator=(const RadScorpion &rhs);
};

#endif
