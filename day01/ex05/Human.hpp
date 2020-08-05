/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 13:15:02 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 16:01:18 by nkuipers      ########   odam.nl         */
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
    Brain     &getBrain();
    const Brain     *identify() const;

private:
   Brain     _brian;
};

#endif
