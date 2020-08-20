/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:28:11 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:30:28 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle & copy);
        PlasmaRifle   &operator=(const PlasmaRifle &rhs);
        virtual void  attack() const;
};

#endif
