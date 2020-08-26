/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 12:59:56 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 15:04:36 by nkuipers      ########   odam.nl         */
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
    ICharacter* bob = new Character("Bob");
    std::cout << "Nick's current " << tmp->getType() << " Materia xp is " << tmp->getXP() << "." << std::endl;
    Nick->use(0, *bob);
    std::cout << "Nick's current " << tmp->getType() << " Materia xp is " << tmp->getXP() << "." << std::endl;
    Nick->use(0, *bob);
    std::cout << "Nick's current " << tmp->getType() << " Materia xp is " << tmp->getXP() << "." << std::endl;

    std::cout << std::endl;

    AMateria* tmp2;
    tmp2 = src->createMateria("cure");
    Nick->equip(tmp2);
    std::cout << "Nick's current " << tmp2->getType() << " Materia xp is " << tmp2->getXP() << "." << std::endl;
    Nick->use(1, *bob);
    std::cout << "Nick's current " << tmp2->getType() << " Materia xp is " << tmp2->getXP() << "." << std::endl;
    Nick->use(1, *bob);
    std::cout << "Nick's current " << tmp2->getType() << " Materia xp is " << tmp2->getXP() << "." << std::endl;


    Nick->unequip(1);
    Nick->unequip(0);
    Nick->use(0, *bob);
    delete bob;
    delete Nick;
    delete src;
    return (0);
}
