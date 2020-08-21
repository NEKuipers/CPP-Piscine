/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 13:42:38 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 18:48:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
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
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat & copy);
        Bureaucrat          &operator=(const Bureaucrat & rhs) const;
        std::string         getName() const;
        int                 getGrade() const;
        void                promote();
        void                demote();
        void                setName(std::string name) const;
        void                setGrade(int grade);
        void                signForm(const Form & form);
    private:
        const std::string   _name;
        int                 _grade;
};

std::ostream            &operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif
