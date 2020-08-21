/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 12:24:10 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 12:24:55 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIAL_SOURCE_HPP
# define IMATERIAL_SOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual             ~IMateriaSource() {}
        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria    *createMateria(std::string const & type) = 0;
};

#endif
