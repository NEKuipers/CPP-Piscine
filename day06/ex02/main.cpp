/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 16:45:04 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/05 15:02:18 by nkuipers      ########   odam.nl         */
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
        std::cout << "Identified A." << std::endl;
    B   *ptrb = dynamic_cast<B*>(ptr);
    if (ptrb)
        std::cout << "Identified B." << std::endl;
    C   *ptrc = dynamic_cast<C*>(ptr);
    if (ptrc)
        std::cout << "Identified C." << std::endl;
}

void        identify_from_reference(Base &ptr)
{
   identify_from_pointer(&ptr);
}

int         main(void)
{
    Base    *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    return (0);
}
