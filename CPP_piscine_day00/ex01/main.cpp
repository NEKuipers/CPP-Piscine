#include <iostream>
#include <string>

int        main(void)
{
    std::cout << "Welcome to your very own 'Crappy Awesome Phonebook'." << std::endl;

    std::string command = "";
    while (command.compare("EXIT") == 0)
    {    
        std::cout << "What do you want to do? >";
        std::getline(std::cin, command);

        if (!std::cin.good())
            exit(0);

        if (command.compare("hi") == 0)
            std::cout << "Hi!" << std::endl;
        else
            std::cout << "Please say hi" << std::endl;
    }
    std::cout << "Goodbye" << std::endl;
    return (0);
}
