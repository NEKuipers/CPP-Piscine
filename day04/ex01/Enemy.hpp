/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 13:39:33 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 13:50:38 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
    protected:
        int               _hp;
        std::string       _type;
    public:
        Enemy();
        virtual           ~Enemy();
        Enemy(const Enemy &copy);
        Enemy(int hp, const std::string &type);
        Enemy             &operator= (const Enemy &rhs);
        int               getHP() const;
        const std::string getType() const;
        virtual void      takeDamage(int damage);
};

#endif
