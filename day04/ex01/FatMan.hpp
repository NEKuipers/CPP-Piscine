/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FatMan.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:09:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:10:57 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef FATMAN_HPP
# define FATMAN_HPP
# include <iostream>
# include "AWeapon.hpp"

class FatMan : public AWeapon
{
    public:
        FatMan();
        virtual ~FatMan();
        FatMan(const FatMan & copy);
        FatMan   &operator=(const FatMan &rhs);
        virtual void  attack() const;
};

#endif
