/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:36:52 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/05 16:59:18 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB(std::string _name);
		~HumanB();

		void		attack();
		void		setWeapon(Weapon &weapon);
	
	private:
		std::string		_name;
		Weapon			*_weapon;
};

#endif
