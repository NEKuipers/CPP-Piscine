/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:25:07 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 19:22:03 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &rhs);
    virtual void            execute(const Bureaucrat &executor) const;

private:
    static const int        _sign_grade;
    static const int        _execute_grade;
};

#endif
