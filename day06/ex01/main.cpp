/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 15:46:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 16:04:48 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <ctime>

struct      Data
{
    std::string s1;
    int         n;
    std::string s2;
};


void        *serialize(void) 
{
    Data    *rv = new Data;
    int     sign = rand();
    char    an[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYX0123456789";

	srand(time(NULL));
    if (sign % 2)
        sign = -1;
    else
        sign = 1;
    for (int i = 0; i < 8; i++)
        rv->s1 += an[rand() % 62];
    rv->n = rand() * sign;
    for (int i = 0; i < 8; i++)
        rv->s2 += an[rand() % 62];    
    return (rv);
}

Data        *deserialize(void *raw)
{
    Data    *rv = reinterpret_cast<Data*>(raw);
    return (rv);
}

int         main(void)
{
    void        *test = serialize();
    Data        *ds = deserialize(test);
    std::cout << ds->s1 << std::endl << ds->n << std::endl << ds->s2 << std::endl;
    return (0);
}
