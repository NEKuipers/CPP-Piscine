/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 13:15:02 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/06 13:46:54 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human {

public:
	Human();
    ~Human();
    const Brain      &getBrain(void) const;
    const Brain     *identify() const;

private:
    const Brain     _brian;
};

#endif
