/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 14:23:14 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/28 14:13:08 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array {
    public:
        class WrongIndex: public std::exception 
        {
            virtual const char* what() const throw() 
            {
                return "That index does not relate to any existing element in the array";
            }
        };
        Array(): _size(1), _array(new T[0]) {}
        Array(unsigned int size): _size(size), _array(new T[size]) {}
        Array(Array const & a) {
            *this = a;
        }
        unsigned int	size() {
            return _size;
        }
        ~Array() {
            delete[] _array; return;
        }
        Array&			operator=(Array const & a) 
        {
            _size = a.size();
            delete [] _array;
            if (_size > 0) 
                _array = new T[_size];
            else 
                _array = new T();
            for(unsigned int i = 0; i < _size; i++)
                _array[i] = a[i];
            return (*this);
        }
        T&				operator[](unsigned int index) {
            if (index >= _size) 
                throw Array::WrongIndex();
            return (_array[index]);
        }
    private:
        unsigned int _size;
        T* _array;
};

#endif
