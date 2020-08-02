/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:52 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 13:40:31 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	setType(std::string type);
		void	setName(std::string name);
		std::string announce();
	private:
		std::string type;
		std::string name;
};

#endif
