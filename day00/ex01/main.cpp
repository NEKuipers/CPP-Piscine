/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:52:25 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/29 16:52:14 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void        Contact::setfield(std::string input, int i)
{
    if (i == 1)
        this->first_name = input;
    else if (i == 2)
        this->last_name = input;
    else if (i == 3)
        this->nickname = input;
    else if (i == 4)
        this->login = input;
    else if (i == 5)
        this->postal_address = input;
    else if (i == 6)
        this->email_address = input;
    else if (i == 7)
        this->phone_number = input;
    else if (i == 8)
        this->birthday_date = input;
    else if (i == 9)
        this->favorite_meal = input;
    else if (i == 10)
        this->underwear_color = input;
    else if (i == 11)
        this->darkest_secret = input;
}

std::string Contact::getfield(int i)
{
    if (i == 1)
        return (this->first_name);
    if (i == 2)
        return (this->last_name);
    if (i == 3)
        return (this->nickname);
    if (i == 4)
        return (this->login);
    if (i == 5)
        return (this->postal_address);
    if (i == 6)
        return (this->email_address);
    if (i == 7)
        return (this->phone_number);
    if (i == 8)
        return (this->birthday_date);
    if (i == 9)
        return (this->favorite_meal);
    if (i == 10)
        return (this->underwear_color);
    if (i == 11)
        return (this->darkest_secret);
    return (0);
}

int         search_contact(Contact *contacts, int *noc)
{
    int index;
    std::cout << "Enter the index number of the contact you want to look up: ";
    std::cin >> index;
    std::cout << std::endl; 
    if (index >= 0 && index < *noc && std::cin.good())
        for (int i = 1; i < 12; i++)
            std::cout << contacts[index].getfield(i) << std::endl;
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that index number does not correspond to an existing contact." << std::endl;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return (0);
}

int         show_phonebook(Contact *contacts, int *noc)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int         i;

    i = 0;
    std::cout << std::setw(10);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i < *noc)
    {
        first_name = contacts[i].getfield(1);
        last_name = contacts[i].getfield(2);
        nickname = contacts[i].getfield(3);

        std::cout << "|" << std::setw(10) << i;
        if (first_name.length() > 10)
        {
            first_name = first_name.substr(0,9);
            first_name = first_name.append(".");
        }
        if (last_name.length() > 10)
        {
            last_name = last_name.substr(0,9);
            last_name = last_name.append(".");
        }
        if (nickname.length() > 10)
        {
            nickname = nickname.substr(0,9);
            nickname = nickname.append(".");
        }

        std::cout << "|" << std::setw(10) << first_name;
        std::cout << "|" << std::setw(10) << last_name;
        std::cout << "|" << std::setw(10) << nickname;
        std::cout << "|" << std::endl;
        i++;  
    }
    search_contact(contacts, noc);
    return (0);    
}


int         add_contact(Contact *contacts, int *noc)
{
    std::string input; 

    input = "";
    if (*noc == 8)
    {
        std::cout << "The phonebook cannot add more than eight contacts." << std::endl;
        return (0);
    }
    else
    {
        std::cout << "Please enter the following contact information." << std::endl;
        std::cout << "> First name: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 1);
        std::cout << "> Last name: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 2);
        std::cout << "> Nickname: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 3);
        std::cout << "> Login: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 4);
        std::cout << "> Postal address: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 5);
        std::cout << "> Email address: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 6);
        std::cout << "> Phone number: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 7);
        std::cout << "> Birthday date: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 8);
        std::cout << "> Favorite meal: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 9);
        std::cout << "> Underwear color: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 10);
        std::cout << "> Darkest secret: ";
        std::getline(std::cin, input);
        contacts[*noc].setfield(input, 11);
    }
    *noc += 1;
    return (0);
}

int         main(void)
{
    Contact     contacts[8];
    int         noc;

    std::cout << "Welcome to your very own ~Crappy Awesome Phonebook~." << std::endl;

    noc = 0;
    std::string command = "";
    while (command.compare("EXIT") != 0)
    {    

        std::cout << "What do you want to do? >";
        std::string command = "";
        std::getline(std::cin, command);
        if (!std::cin.good() || command.compare("EXIT") == 0)
            exit(0);
        if (command.compare("ADD") == 0)
            add_contact(contacts, &noc);
        else if (command.compare("SEARCH") == 0)
        {
            if (noc == 0)
                std::cout << "The phonebook is still empty." << std::endl;
            else
                show_phonebook(contacts, &noc);
        }
        else
        {
            std::cout << "I didn't understand that." << std::endl;
            std::cout << "Please enter ADD, SEARCH, or if you want to quit, EXIT." << std::endl;
        }
    }
    std::cout << "Goodbye!" << std::endl;
    return (0);
}
