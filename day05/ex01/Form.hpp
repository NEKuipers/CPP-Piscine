/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:43:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 15:39:01 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
                GradeTooHighException(const GradeTooHighException & copy);
                virtual ~GradeTooHighException() throw();
                GradeTooHighException  &operator=(const GradeTooHighException &rhs);
                virtual const char    *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                GradeTooLowException(const GradeTooLowException & copy);
                virtual ~GradeTooLowException() throw();
                GradeTooLowException  &operator=(const GradeTooLowException &rhs);
                virtual const char    *what() const throw();
        };
        Form();
        ~Form();
        Form(std::string name, int sign_grade, int execute_grade);
        Form(const Form & copy);
        Form          &operator=(const Form & rhs);
        std::string         getName() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        bool                getSign() const;
        void                setName(std::string name);
        void                setSignGrade(int sign_grade);
        void                setExecuteGrade(int execute_grade);
        void                beSigned(Bureaucrat & bureaucrat);
    private:
        bool                _sign;
        const int           _sign_grade;
        const int           _execute_grade;
        const std::string   _name;
};

std::ostream            &operator<<(std::ostream &os, const Form &rhs);

#endif
