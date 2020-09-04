/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConversion.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 11:43:55 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/04 15:10:28 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP
# include <iostream>
# include <stdexcept>


class ScalarConversion
{
    public:
        ScalarConversion();
        ~ScalarConversion();
        ScalarConversion(const ScalarConversion & copy);
        ScalarConversion    &operator=(const ScalarConversion & rhs);
        char                convchar(double x);
        int                 convint(double x);
        double              convdouble(double x);
        float               convfloat(double x);
        class NonDisplayable : public std::exception
        {
        public:
            NonDisplayable();
            NonDisplayable(NonDisplayable const &src);
            virtual ~NonDisplayable() throw();
            NonDisplayable          &operator= (const NonDisplayable &rhs);
            const char              *what() const throw();
        };
        class Impossible : public std::exception
        {
        public:
            Impossible();
            Impossible(Impossible const &src);
            virtual ~Impossible() throw();
            Impossible              &operator= (const Impossible &rhs);
            const char              *what() const throw();
        };
};

#endif
