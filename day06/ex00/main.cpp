/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:59 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/11 11:32:45 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <string>
#include "ScalarConversion.hpp"

static void        makechar(ScalarConversion sc, double val)
{
    try
    {
        std::cout << "char:   " << sc.convchar(val) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

static void        makeint(ScalarConversion sc, double val)
{
    try
    {
        std::cout << "int:    " << sc.convint(val) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

static void        makefloat(ScalarConversion sc, double val, int p)
{
    try
    {
        std::cout << "float:  " << std::setprecision(p) << std::fixed << sc.convfloat(val) << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

static void        makedouble(ScalarConversion sc, double val, int p)
{
    try
    {
        std::cout << "double: " << std::setprecision(p) << std::fixed << sc.convdouble(val) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

static int         find_point(char *str)
{
    int i = 0;

    while (str[i] && str[i] != '.')
        i++;
    if (str[i] == '\0')
        return (1);
    else
        return (strlen(&str[i]) - 1);
}

int                 main(int ac, char **av) 
{
    int                 p;
    long double         val;
    ScalarConversion    sc;


    if (ac == 2)
    {
        val = atof(av[1]);
        p = find_point(av[1]);
        makechar(sc, val);
        makeint(sc, val);
        makefloat(sc, val, p);
        makedouble(sc, val, p);
    }
    else
        std::cout << "Error: please enter one parameter to convert." << std::endl;
    return (0);
}
