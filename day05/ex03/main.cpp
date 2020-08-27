/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 19:26:04 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/27 12:34:23 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Form *f1, *f2, *f3, *f4;
    Intern jimmy;
    Bureaucrat walter = Bureaucrat("Walter", 42);

    f1 = jimmy.makeForm("robotomy request", "Barry");
    std::cout << *f1 << std::endl;
    f2 = jimmy.makeForm("presidential pardon", "Nick");
    std::cout << *f2 << std::endl;
    f3 = jimmy.makeForm("shrubbery creation", "Amsterdam-West");
    std::cout << *f3 << std::endl;
    std::cout << std::endl;
    walter.signForm(*f1);
    std::cout << std::endl;
    walter.executeForm(*f1);
    std::cout << std::endl;
    f4 = jimmy.makeForm("AAAAA", "Nick");

    return (0);
}
