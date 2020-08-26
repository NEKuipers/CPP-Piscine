/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 19:26:04 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 20:11:15 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat                    b1("Benny", 69);
    Bureaucrat                    b2("Walter", 42);
    Bureaucrat                    b3("El presidente", 1);
    ShrubberyCreationForm         f1("kerstboom");
    RobotomyRequestForm           f2("Christopher");
    PresidentialPardonForm        f3("Nick");

    try
    {
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        b2.signForm(f1);
        b2.signForm(f2);
        b2.signForm(f3);

        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        b3.signForm(f1);
        b3.signForm(f2);
        b3.signForm(f3);

        b3.executeForm(f1);
        b3.executeForm(f2);
        b3.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
