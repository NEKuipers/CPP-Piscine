/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 13:42:36 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 15:40:01 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()  {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) {
    *this = copy;
}

Bureaucrat              &Bureaucrat::operator=(const Bureaucrat & rhs) {
    this->_grade = rhs._grade;
    return (*this);
}

std::string             Bureaucrat::getName() const {
    return (this->_name);
}

int                     Bureaucrat::getGrade() const {
    return (this->_grade);
}

void                     Bureaucrat::promote() {
    if (this->_grade > 1)
        this->_grade -= 1;
    else
        throw Bureaucrat::GradeTooHighException();    
}

void                     Bureaucrat::demote() {
    if (this->_grade < 150)
        this->_grade += 1;
    else
        throw Bureaucrat::GradeTooLowException();
}


void                    Bureaucrat::setGrade(int grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException & copy) {
    *this = copy;
}

Bureaucrat::GradeTooHighException      &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

const char       *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
    *this = copy;
}

Bureaucrat::GradeTooLowException      &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException & rhs) {
    static_cast <void> (rhs);
    return (*this);
}

const char       *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &rhs) {
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (os);
}

void                Bureaucrat::signForm(const Form & form) {
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception & e)
        std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
}
