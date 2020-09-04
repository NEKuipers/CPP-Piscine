/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:45:04 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 17:24:06 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base        *generate(void)
{
    Base *newbase;
    srand(time(0));
    int x = rand();
    x = x % 3;
    if (x == 0)
    {
        newbase = new A();
        std::cout << "Created A class." << std::endl;
        return (newbase);
    }
    else if (x == 1)
    {
        newbase = new B();
        std::cout << "Created B class." << std::endl;
        return (newbase);
    }
    else
    {
        newbase = new C();
        std::cout << "Created C class." << std::endl;
        return (newbase);
    }
}

void        identify_from_pointer(Base *ptr)
{
    A   *ptra = dynamic_cast<A*>(ptr);
    if (ptra)
        std::cout << "Identified A from pointer." << std::endl;
    B   *ptrb = dynamic_cast<B*>(ptr);
    if (ptrb)
        std::cout << "Identified B from pointer." << std::endl;
    C   *ptrc = dynamic_cast<C*>(ptr);
    if (ptrc)
        std::cout << "Identified C from pointer." << std::endl;
}

void        identify_from_reference(Base &ptr)
{
    A   *refa = dynamic_cast<A*>(&ptr);
    if (refa)
        std::cout << "Identified A from reference." << std::endl;
    B   *refb = dynamic_cast<B*>(&ptr);
    if (refb)
        std::cout << "Identified B from reference." << std::endl;
    C   *refc = dynamic_cast<C*>(&ptr);
    if (refc)
        std::cout << "Identified C from reference." << std::endl;
}

int         main(void)
{
    Base    *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    return (0);
}
