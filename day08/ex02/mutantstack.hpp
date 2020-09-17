/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 10:49:11 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/17 11:48:25 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iterator>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
		std::list<T>		_stack;
	public:
		typedef std::list<int>::iterator iterator;
		MutantStack<T>() {}
		~MutantStack<T>() {}
		MutantStack(MutantStack const &copy) { *this = copy; }
		MutantStack     &operator=(MutantStack const &rhs) { static_cast<void>(rhs); }

		T top() {
			return (_stack.front());
		}

		T size() {
			return (_stack.size());
		}

        bool empty() {
            if (_stack.size() == 0)
                return (true);
            return (false);
        }

		iterator begin() {
			return (_stack.begin());
		}

		iterator end() {
			return (_stack.end());
		}

		void pop() {
			_stack.pop_front();
		}

		void push(T value) {
			_stack.push_front(value);
		}
};

#endif
