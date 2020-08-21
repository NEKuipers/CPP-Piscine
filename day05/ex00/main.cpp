/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:22:41 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 16:39:53 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat Barry("Barry", 4);
    std::cout << Barry;
    Barry.promote();
    Barry.promote();
    std::cout << "Barry was promoted twice:" << std::endl;
    std::cout << Barry;
    std::cout << "Barry got demoted:" << std::endl;
    Barry.demote();
    std::cout << Barry;
    std::cout << "Attempt to set grade to 0:" << std::endl;
    try
    {
        Barry.setGrade(0);
        std::cout << Barry;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Attempt to set grade to 100:" << std::endl;
    try
    {
        Barry.setGrade(100);
        std::cout << Barry;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Attempt to set grade to 171:" << std::endl;
    try
    {
        Barry.setGrade(171);
        std::cout << Barry;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
