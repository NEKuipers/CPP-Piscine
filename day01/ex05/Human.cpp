/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 13:15:00 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 13:47:11 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"


Human::Human() {
	return;
}

const Brain   &Human::getBrain() const
{
    return (this->_brian);
}	

const Brain   *Human::identify() const 
{
    return (this->_brian.identify());
}

Human::~Human(){
	return ;
}
