/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Farmer.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:15:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 16:31:08 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FARMER_HPP
# define FARMER_HPP
# include <iostream>
# include "Victim.hpp"

class Farmer : public Victim
{
    public:
        virtual ~Farmer();
        Farmer(std::string name);
        Farmer(const Farmer & copy);
        Farmer &          operator=(Farmer const &rhs);
        void            getPolymorphed() const;
        std::string     getName() const;
    private:
        Farmer();
};

#endif
