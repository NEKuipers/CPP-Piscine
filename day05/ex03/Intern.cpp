/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 11:30:03 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/27 12:36:46 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    formfunctions[0] = &Intern::MakePresidentialPardonForm;
    formfunctions[1] = &Intern::MakeRobotomyRequestForm;
    formfunctions[2] = &Intern::MakeShrubberyCreationForm;
}

Intern::~Intern() {}

Intern::Intern(const Intern & copy) {
    *this = copy;
}

Intern      &Intern::operator=(const Intern & rhs) {
    (void)rhs;
    return (*this);
}

Form*       Intern::makeForm(std::string name, std::string target)
{
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 0; i < 3; i += 1)
        if (name == names[i])
            return (this->*formfunctions[i])(target);
    std::cout << name << ": form type does not exist." << std::endl;
    return NULL;
}

Form*       Intern::MakePresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

Form*       Intern::MakeRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

Form*       Intern::MakeShrubberyCreationForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}
