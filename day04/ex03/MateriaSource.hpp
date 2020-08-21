/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 12:25:53 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 12:51:27 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource & copy);
        MateriaSource       &operator=(const MateriaSource & rhs);
        virtual void        learnMateria(AMateria *m);
        virtual AMateria    *createMateria(const std::string & type);

    private:
        AMateria            *_inventory[4];
};

#endif
