/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 17:57:55 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 18:23:39 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm  &operator= (const PresidentialPardonForm &rhs);
    virtual void            execute(const Bureaucrat &executor) const;

private:
    static const int        _sign_grade;
    static const int        _execute_grade;
};

#endif

