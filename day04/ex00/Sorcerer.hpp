/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:42:00 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:11:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Victim;

class Sorcerer
{
    public:
        ~Sorcerer();
        Sorcerer(const Sorcerer & copy);
        Sorcerer(std::string name, std::string title);

        Sorcerer     &operator= (const Sorcerer &rhs);
        void         setName(std::string name);
        void         setTitle(std::string title);
        void         polymorph(Victim const &victim) const;
        std::string  getName() const;
        std::string  getTitle() const;

    private:
        Sorcerer();
        std::string  _name;
        std::string  _title;
};

std::ostream         &operator<< (std::ostream &os, const Sorcerer &rhs);

#endif
