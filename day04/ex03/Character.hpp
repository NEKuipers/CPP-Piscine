/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 11:50:48 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 13:33:48 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        ~Character();
        Character(const Character & copy);
        Character(const std::string & name);
        Character                   &operator=(const Character & rhs);
        virtual void                equip(AMateria *m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter & target);
        virtual const std::string   &getName() const;
        std::string                 getInventory(int n) const;
    private:
        std::string                 _name;
        AMateria                    *_inventory[4];
};

#endif
