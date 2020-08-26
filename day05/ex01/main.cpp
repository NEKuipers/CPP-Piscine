/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 14:22:41 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 17:46:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat Barry("Barry", 2);
    Form       C42(5, 2, "C42");
    Form       D41(2, 2, "D41");
    std::cout << Barry;
    std::cout << std::endl;
    std::cout << C42;
    std::cout << std::endl;
    Barry.signForm(C42);
    Barry.signForm(C42);
    std::cout << std::endl;
    std::cout << C42;
    std::cout << std::endl;
    std::cout << "Barry got demoted:" << std::endl;
    Barry.demote();
    std::cout << std::endl;
    std::cout << Barry;
    std::cout << std::endl;
    std::cout << D41;
    std::cout << std::endl;
    Barry.signForm(D41);
    std::cout << std::endl;
    return (0);
}
