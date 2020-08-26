/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:42:51 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:41:13 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include "Sorcerer.hpp"

class Sorcerer;

class Victim
{
    public:
        Victim();
        virtual ~Victim();
        Victim(std::string name);
        Victim(const Victim & copy);        
        Victim &    operator=(Victim const &rhs) ;
        void                setName(std::string name);
        std::string         getName() const ;
        virtual void        getPolymorphed() const;
    private:
        std::string _name;
};

std::ostream    &operator<<(std::ostream & os, const Victim & rhs);

#endif
