/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 17:57:39 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 20:10:11 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign_grade = 25;
const int PresidentialPardonForm::_execute_grade = 5;

PresidentialPardonForm::PresidentialPardonForm(void) : 
    Form(PresidentialPardonForm::_sign_grade, PresidentialPardonForm::_execute_grade, "a Presidential Pardon", "Unknown Individual") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(PresidentialPardonForm::_sign_grade, PresidentialPardonForm::_execute_grade, "a Presidential Pardon", target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
    Form(PresidentialPardonForm::_sign_grade, PresidentialPardonForm::_execute_grade, "a Presidential Pardon", "Unknown Individual") {
    *this = s;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm      &PresidentialPardonForm::operator= (const PresidentialPardonForm &rhs) {
    static_cast <void> (rhs);
    return (*this);
}

void                        PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
