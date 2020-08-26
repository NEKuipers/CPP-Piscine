/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 16:43:47 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 17:45:51 by nkuipers      ########   odam.nl         */
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

Form::Form(const Form &src):_sign(src._sign), _sign_grade(src._sign_grade), _execute_grade(src._execute_grade), _name(src._name)
{
    *this = src;
    return ;
}


Form::Form(int sign_grade, int execute_grade, std::string name) :
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

Form::GradeTooHighException::GradeTooHighException() {}

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

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
    *this = copy;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException&Form::GradeTooLowException::operator=(const GradeTooLowException &rhs) {
    (void)rhs;
    return (*this);
}

const char          *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}


void  Form::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > this->_sign_grade)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        if (this->_sign == true)
            std::cout << "This form has already been signed." << std::endl;
        else
        {
            std::cout << bureaucrat.getName() << " signs " << this->_name << "." << std::endl;
            this->_sign = true;
        }
    }
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
    out << "Form: " << rhs.getName() << " is " << (rhs.getSign() ? "" : "not ") << "signed." << std::endl << "It requires grade " << rhs.getSignGrade() << " to sign, and grade " << rhs.getExecuteGrade() << " to be executed." << std::endl;
    return (out);
}
