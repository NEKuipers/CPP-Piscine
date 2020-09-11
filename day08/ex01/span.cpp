/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 11:24:19 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/11 19:27:47 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits>

Span::Span() : _size(0) {}

Span::~Span() {}

Span::Span(unsigned int n) : _size(n) {
    _numbers.reserve(n);
}

Span::Span(const Span & copy) {
    *this = copy;
}

Span        &Span::operator=(const Span & rhs) {
    this->_numbers = rhs._numbers;
    this->_size = rhs._size;
    return (*this);
}

void        Span::addNumber(int n) {
    if (_numbers.size() < _size)
    {
        _numbers.push_back(n);
        _size += 1;
    }
    else
        throw Span::LimitError();
}

unsigned int    Span::shortestSpan() {
    if (this->_size < 2)
        throw Span::NoSpanError();
    int diff;
    int span = __INT32_MAX__;
    std::vector<int> temp = _numbers;
    std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator a = temp.begin();
    std::vector<int>::iterator b  = temp.begin() + 1;
	while (b != temp.end())
	{
		diff = abs((*b) - (*a));
        if (diff < span)
            span = diff;
        a = b;
        b++;
	}
	return (span);
}

unsigned int    Span::longestSpan() {
    if (this->_size < 2)
        throw Span::NoSpanError();
    std::vector<int> temp = _numbers;
    int high = *std::max_element(temp.begin(), temp.end());
    int low = *std::min_element(temp.begin(), temp.end());
    return (high - low);
}

unsigned int    Span::getSize() const {
    return this->_size;
}

// Exception NoSpanError default coplian class functions
Span::NoSpanError::NoSpanError() {}

Span::NoSpanError::~NoSpanError() throw() {}

Span::NoSpanError::NoSpanError(const NoSpanError & copy) {
    *this = copy;
}

Span::NoSpanError   &Span::NoSpanError::operator=(const NoSpanError & rhs) {
    static_cast<void>(rhs);
    return (*this);
}

// Exception NoSpanError throw message
const char                          *Span::NoSpanError::what() const throw() {
    return ("There are not enough numbers stored to find a span.");
}



// Exception LimitError default coplian class functions
Span::LimitError::LimitError() {}

Span::LimitError::~LimitError() throw() {}

Span::LimitError::LimitError(const LimitError & copy) {
    *this = copy;
}

Span::LimitError   &Span::LimitError::operator=(const LimitError & rhs) {
    static_cast<void>(rhs);
    return (*this);
}

// Exception LimitError throw message
const char                          *Span::LimitError::what() const throw() {
    return ("Could not add another number, storage limit exceeded.");
}
