/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:43:47 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 18:45:41 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
    _sign(false),
    _sign_grade(1),
    _execute_grade(1),
    _name("undefined")
{
    return ;
}

Form::Form(const Form &src) :
    _sign(src._sign),
    _sign_grade(src._sign_grade),
    _execute_grade(src._execute_grade),
    _name(src._name)
{
    *this = src;
    return ;
}


Form(std::string name, int sign_grade, int execute_grade) :
    _sign(false),
    _sign_grade(sign_grade),
    _execute_grade(execute_grade),
    _name(name)
{
    if (this->_sign_grade < 1 || this->_execute_grade < 1)
        throw Form::GradeTooHighException();
    else if (this->_sign_grade > 150 || this->_execute_grade > 150)
        throw Form::GradeTooLowException();
    return ;
}

Form::~Form() {}

Form    &Form::operator=(const Form &rhs) {
    this->_sign = rhs._sign;
    return (*this);
}

Form::  GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) {
    *this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException     &Form::GradeTooHighException::operator= (const GradeTooHighException &rhs){
    static_cast <void> (rhs);
    return (*this);
}

const char*         Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}


Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) {
    *this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException&Form::GradeTooLowException::operator= (const GradeTooLowException &rhs) {
    static_cast <void> (rhs);
    return (*this);
}

const char*Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}


void  Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_sign_grade)
        throw Form::GradeTooLowException();
    else
        this->_sign = true;
    return ;
}

bool                Form::getSign() const {
    return (this->_sign);
}

int                 Form::getSignGrade() const {
    return (this->_sign_grade);
}

int                 Form::getExecuteGrade() const {
    return (this->_execute_grade);
}

std::string         Form::getName() const {
    return (this->_name);
}

std::ostream        &operator<< (std::ostream &out, const Form &rhs) {
    out << "The form: " << rhs.getName() << " which is " << (rhs.getSigned() ? "" : "not ") << " signed, which requires a grade " << rhs.getSignGrade() << " to sign, and " << rhs.getExecuteGrade() << " to be executed." << std::endl;
    return (out);
}
