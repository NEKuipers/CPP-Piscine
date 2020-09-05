/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 17:30:13 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/05 11:11:00 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void        searchforvalue(int x)
{
    std::list<int>  list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    list.push_back(8);
    list.push_back(9);
    list.push_back(10);

    try
    {
        easyfind<std::list<int> > (list, x);
    }
    catch(std::string e)
    {
        std::cout << e << std::endl;
    }
}

int         main(void)
{
    searchforvalue(2);
    searchforvalue(17);
    return (0);
}
