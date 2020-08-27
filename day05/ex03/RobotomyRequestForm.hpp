/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:24:16 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 19:21:59 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <ctime>
# include <cstdlib>
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm     &operator=(const RobotomyRequestForm &rhs);
        virtual void            execute(const Bureaucrat &executor) const;

    private:
        static const int        _sign_grade;
        static const int        _execute_grade;
};

#endif
