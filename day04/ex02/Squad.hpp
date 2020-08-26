/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:34:08 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 14:23:51 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        typedef struct          s_unit
        {
            ISpaceMarine        *soldier;
            struct s_unit       *next;
        }                       t_unit;
        int                     _count;
        t_unit                  *_squad;
    public:
        Squad();
        ~Squad();
        Squad(const Squad & copy);
        Squad                   &operator=(const Squad & rhs);
        virtual int             getCount() const;
        virtual ISpaceMarine    *getUnit(int n) const;
        virtual int             push(ISpaceMarine *marine);
        void                    copySquad(const Squad &squad);
        void                    destroySquad();
        int                     unitInSquad(ISpaceMarine *marine, t_unit *squad);
};

#endif
