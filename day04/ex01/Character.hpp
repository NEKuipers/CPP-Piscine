/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:00:06 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 14:05:06 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "Enemy.hpp"
# include "AWeapon.hpp"
# include <iostream>
# include <string>

class Character
{
    private:
        std::string _name;
        int         _ap;
        AWeapon     *_weapon;
    public:
        Character();
        ~Character();
        Character   &operator=(const Character & rhs);
        Character(const Character & copy);
        Character(std::string const & name);
        void                recoverAP();
        void                equip(AWeapon*);
        void                attack(Enemy*);
        std::string const   getName() const;
        int                 getAP() const;
        AWeapon             *getWeapon() const;
};

std::ostream                &operator<< (std::ostream &os, const Character &rhs);

#endif
