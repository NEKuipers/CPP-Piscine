/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:31:05 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 12:59:25 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>
# include <cstdlib>

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(const std::string & type);
        AMateria(const AMateria & copy);
        virtual             ~AMateria();
        AMateria            &operator=(const AMateria & rhs);
        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter & target) = 0;
        unsigned int        getXP() const;
        const std::string   &getType() const;
    protected:
        unsigned int        _xp;
        std::string         _type;
};

#endif
