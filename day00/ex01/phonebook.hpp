/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:35:43 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/29 13:36:04 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact(void);
	~Contact(void);

	void			setfield(std::string input, int i);
	std::string		getfield(int i);

private:
	std::string 	first_name;
	std::string 	last_name;
	std::string 	nickname;
	std::string 	login;
	std::string 	postal_address;
	std::string 	email_address;
	std::string 	phone_number;
	std::string 	birthday_date;
	std::string 	favorite_meal;
	std::string 	underwear_color;
	std::string 	darkest_secret;
};

#endif
