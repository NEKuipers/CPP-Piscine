/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:02:16 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 11:27:04 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	private:
	
	public:
		std::string	name;
		std::string	section;
		std::string	wine_pairing;
		Pony(std::string name, std::string section, std::string wine_pairing);
		~Pony();

};

#endif
