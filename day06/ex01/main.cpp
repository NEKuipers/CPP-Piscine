/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 15:46:45 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/11 12:18:33 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <ctime>

struct      Data
{
    std::string s1;
    int         n;
    std::string s2;
};


void        *serialize(void) 
{
    char    *randomdata = new char[20];
    char    an[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYX";

    std::cout << "Generating random data..." << std::endl;
    for (int i = 0; i < 8; i++)
        randomdata[i] += an[rand() % 62];
    for (int i = 8; i < 12; i++)
        randomdata[i] = rand() % 256 - 128; 
    for (int i = 12; i < 20; i++)
        randomdata[i] += an[rand() % 62];

    int     size = 0;
    for (int i = 0; randomdata[i]; i++)
        size = size + sizeof(randomdata[i]);
    std::cout << size << " bytes of data have been allocated at memory address " << &randomdata << "." << std::endl;

    return (reinterpret_cast<void*>(randomdata));
}

Data        *deserialize(void *raw)
{
	Data 		*data = new Data;

	data->n = 0;
	char		*input = reinterpret_cast<char*>(raw);

	for (int i = 0; i < 8; i++)
		data->s1 = data->s1 + input[i];
	for (int i = 8; i < 12; i++)
		data->n = data->n * 10 + input[i] - '0';
	for (int i = 12; i < 20; i++)
		data->s2 = data->s2 + input[i];
	return (data);
}

int         main(void)
{
    srand(time(NULL));
    void        *test = serialize();
    std::cout << std::endl;
    Data        *ds = deserialize(test);
    std::cout << "First alphanumeric character string : " << ds->s1 << std::endl;
    std::cout << "Integer                             : " << ds->n << std::endl;
    std::cout << "Second alphanumeric character string: " << ds->s2 << std::endl;
    delete ds;
    return (0);
}
