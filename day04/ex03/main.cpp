/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 12:59:56 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 13:40:02 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* Nick = new Character("Nick");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    Nick->equip(tmp);
    tmp = src->createMateria("cure");
    Nick->equip(tmp);
    ICharacter* bob = new Character("bob");
    std::cout << "Nick's current Materia xp is " << tmp->getXP() << "." << std::endl;
    Nick->use(1, *bob);
    std::cout << "Nick's current Materia xp is " << tmp->getXP() << "." << std::endl;
    Nick->use(0, *bob);
    delete bob;
    delete Nick;
    delete src;
    return (0);
}
