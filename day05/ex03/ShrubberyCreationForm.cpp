/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:52:57 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 20:09:49 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign_grade = 145;
const int ShrubberyCreationForm::_execute_grade = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form(ShrubberyCreationForm::_sign_grade, ShrubberyCreationForm::_execute_grade, "Shrubbery", "Unknown Individual") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(ShrubberyCreationForm::_sign_grade, ShrubberyCreationForm::_execute_grade, "Shrubbery", target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form(ShrubberyCreationForm::_sign_grade, ShrubberyCreationForm::_execute_grade, "Shrubbery", "Unknown Individual") {
    *this = src ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm       &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs) {
    static_cast <void> (rhs);
    return (*this);
}

void                        ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream  targetfile;

    Form::execute(executor);
    targetfile.open(getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
    if (targetfile.fail()) {
        std::cerr << "Could not open the output file." << std::endl;
    }
    targetfile << "      /\\      "  << std::endl;
    targetfile << "     /\\*\\     " << std::endl;
    targetfile << "    /\\O\\*\\    " << std::endl;
    targetfile << "   /*/\\/\\/\\   " << std::endl;
    targetfile << "  /\\O\\/\\*\\/\\  " << std::endl;
    targetfile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    targetfile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    targetfile << "      ||           " << std::endl;
    targetfile << "      ||           " << std::endl;
    targetfile << "      ||           " << std::endl;
    targetfile.close() ;
    std::cout << "Shrubbery has been planted." << std::endl;
}
