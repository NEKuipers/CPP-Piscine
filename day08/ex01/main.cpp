/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:31:11 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/11 18:51:23 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <string>
#include <limits>

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 2)
    {
        if (av[1][0] == '-')
        {
            std::cout << "Positive numbers only please." << std::endl;
            return (0);
        }
        if (atol(av[1]) > (std::numeric_limits<unsigned int>::max()))
        {
            std::cout << "How about no." << std::endl;
            return (0);
        }
        unsigned int n = atoi(av[1]);
        Span sp(n);
        std::cout << "I made a vector with " << n << " spots to fill numbers. Now let's add some numbers!" << std::endl;
        for (unsigned int i = 0; i < n; i++)
        {
            int x = rand() % 100000;
            std::cout << "[" << x << "]" << std::endl;
            sp.addNumber(x);
        }
        std::cout << "The shortest span in this vector is " << sp.shortestSpan() << "." << std::endl;
        std::cout << "The longest span in this vector is " <<sp.longestSpan() << "." << std::endl;
    }
    else
        std::cout << "Please enter one positive number as parameter." << std::endl;
    return (0);
}
