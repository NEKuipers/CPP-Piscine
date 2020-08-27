/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 14:04:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/27 14:15:31 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void        putvar(T const &input)
{
    std::cout << input << std::endl;
}


template <typename T>
void        iter(T *a, int len, void (*f)(T const &))
{
    int i = 0;
    if (a)
        while (i < len)
        {
            f(a[i]);
            i++;
        }
}


int         main(void)
{
    int ints[] = {41, 42, 43, 99};
    std::string words[] = {"desk", "imac", "notebook", "keyboard"};

    std::cout << "test one: print numbers" << std::endl;
    iter(ints, 4, putvar);
    std::cout << std::endl;

    std::cout << "test two: print words" << std::endl;
    iter(words, 4, putvar);
    std::cout << std::endl;

    return (0);
}
