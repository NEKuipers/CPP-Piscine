/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:35:53 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:52:56 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        virtual ~PowerFist();
        PowerFist(const PowerFist & copy);
        PowerFist   &operator=(const PowerFist &rhs);
        virtual void  attack() const;
};

#endif
