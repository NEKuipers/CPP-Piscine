/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:19:57 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/30 12:23:10 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		void		setZombieType(std::string type);
		std::string getZombieType(void);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump();
	private:
		std::string type;
};

#endif
