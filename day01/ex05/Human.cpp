/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 13:15:00 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 16:01:26 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"


Human::Human() {
	return;
}

Brain   &Human::getBrain()
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
