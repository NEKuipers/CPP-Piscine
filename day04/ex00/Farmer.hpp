/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Farmer.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:15:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:40:42 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FARMER_HPP
# define FARMER_HPP
# include <iostream>
# include "Victim.hpp"

class Farmer : public Victim
{
    public:
        Farmer();
        virtual ~Farmer();
        Farmer(std::string name);
        Farmer(const Farmer & copy);
        Farmer &          operator=(Farmer const &rhs);
        void            getPolymorphed() const;
    private:
        std::string _name;
};

#endif
