/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:31:11 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/17 10:34:44 by nkuipers      ########   odam.nl         */
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
        std::cout << "I made a vector with " << n << " spots to fill numbers." << std::endl;
        if (n >= 1)
            std::cout << "Now let's add some numbers!" << std::endl;
        std::vector<int> temp;
        int x;
        for (unsigned int i = 0; i < n; i++)
        {
            x = rand() % 10000;
            temp.push_back(x);
            std::cout << "[" << x << "]" << std::endl;
        }
        sp.addNumber(temp.begin(), temp.end());
        try
        {
            std::cout << "The shortest span in this vector is " << sp.shortestSpan() << "." << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "The longest span in this vector is " <<sp.longestSpan() << "." << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "Please enter one positive number as parameter." << std::endl;
    return (0);
}
