/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 11:30:12 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/27 12:43:58 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern & copy);
        Intern      &operator=(const Intern & rhs);
        Form        *makeForm(std::string name, std::string target);
        typedef Form* (Intern::*pointertofunction)(std::string);
        pointertofunction            formfunctions[3];

        Form*                        MakePresidentialPardonForm(std::string target);
        Form*                        MakeRobotomyRequestForm(std::string target);
        Form*                        MakeShrubberyCreationForm(std::string target);
};

#endif
