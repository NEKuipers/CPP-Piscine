/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:16:34 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:46:07 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
    protected:
        int                 _apcost;
        int                 _damage;
        std::string         _name;
    public:
        AWeapon();
        virtual ~AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon & copy);
        AWeapon             &operator=(const AWeapon & rhs);
        const std::string   getName() const;
        int                 getAPCost() const;
        int                 getDamage() const;
        virtual void        attack() const = 0;
};

#endif
