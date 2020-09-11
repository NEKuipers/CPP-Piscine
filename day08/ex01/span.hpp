/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:24:27 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/11 16:00:26 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <stdexcept>
# include <vector>
# include <algorithm>

class Span
{
    public:
        class NoSpanError : public std::exception
        {
            public:
                NoSpanError();
                virtual ~NoSpanError() throw();
                NoSpanError(const NoSpanError & copy);
                NoSpanError         &operator=(const NoSpanError & rhs);
                const char          *what() const throw();
        };
        class LimitError : public std::exception
        {
            public:
                LimitError();
                virtual ~LimitError() throw();
                LimitError(const LimitError & copy);
                LimitError         &operator=(const LimitError & rhs);
                const char          *what() const throw();
        };

    public:
        ~Span();
        Span(unsigned int n);
        Span(const Span & copy);
        Span            &operator=(const Span & rhs);
        void            addNumber(int n);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
        unsigned int    getSize() const;

    private:
        Span();
        std::vector<int>    _numbers;
        unsigned int        _size;
};

#endif
