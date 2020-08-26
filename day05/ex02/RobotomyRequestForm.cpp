/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:47:37 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 20:10:29 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign_grade = 72;
const int RobotomyRequestForm::_execute_grade = 45;

RobotomyRequestForm::RobotomyRequestForm(void) :
    Form(RobotomyRequestForm::_sign_grade, RobotomyRequestForm::_execute_grade, "Robotomy", "Unknown Individual") {
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form(RobotomyRequestForm::_sign_grade, RobotomyRequestForm::_execute_grade, "Robotomy", target) {
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
    Form(RobotomyRequestForm::_sign_grade, RobotomyRequestForm::_execute_grade, "Robotomy", "Unknown Individual") 
{
    srand(time(NULL));
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm     &RobotomyRequestForm::operator= (const RobotomyRequestForm &rhs) {
    static_cast <void> (rhs);
    return (*this);
}

void                    RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    if (rand() % 2 == 1) {
        std::cout << "haha robotomizer goes BRRRRRRRRRRRRR" << std::endl;
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    }
    else
    {
        std::cout << "haha robotomizer goes BRRRRRRRRRRRRR" << std::endl;
        std::cout << getTarget() << " robotomization was a failure." << std::endl;
    }
}
