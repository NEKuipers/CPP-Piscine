/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:43:44 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 19:43:55 by nkuipers      ########   odam.nl         */
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
        class NotSignedException : public std::exception
        {
            public:
                NotSignedException(void);
                NotSignedException(const NotSignedException &src);
                virtual ~NotSignedException(void) throw();
                NotSignedException    &operator= (const NotSignedException &rhs);
                virtual const char    *what(void) const throw();
        };
        Form();
        virtual ~Form() = 0;
        Form(int sign_grade, int execute_grade, std::string name, std::string target);
        Form(const Form & copy);
        Form          &operator=(const Form & rhs);
        std::string         getName() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        bool                getSign() const;
        std::string         getTarget() const;
        void                setTarget(std::string target);
        void                beSigned(Bureaucrat & bureaucrat);
        virtual void        execute(const Bureaucrat &executor) const = 0;
    private:
        bool                _sign;
        const int           _sign_grade;
        const int           _execute_grade;
        const std::string   _name;
        std::string         _target;
};

std::ostream            &operator<<(std::ostream &os, const Form &rhs);

#endif
