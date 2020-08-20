/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:42:00 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 11:08:55 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include "Victim.hpp"
# include <iostream>

class Sorcerer
{
    public:
        Sorcerer();
        ~Sorcerer();
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer & copy);
        Sorcerer &      operator=(Sorcerer const & rhs);
        void            polymorph(Victim const &) const;
        void            setName(std::string name);
        void            setTitle(std::string title);
        std::string     getName() const;
        std::string     getTitle() const;

    private:
        std::string _name;
        std::string _title;
        
};

std::ostream    &operator<<(std::ostream & os, const Sorcerer & rhs);

#endif
