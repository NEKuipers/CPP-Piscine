/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:43:08 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/20 12:55:31 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        ~Peon();
        Peon(std::string name);
        Peon(const Peon & copy);
        Peon &          operator=(Peon const &rhs);
        void            setName(std::string name);
        std::string     getName() const;
        virtual void    getPolymorphed() const;
    private:
        std::string _name;
};



#endif
