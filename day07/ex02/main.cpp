/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 14:23:10 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/28 14:15:49 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) 
{
	Array <int> ints(5);
	std::cout << "Int array: ";
	try 
	{
		for (int i = 0; i < 5; i++) 
		{
			ints[i] = i;
			std::cout << ints[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Attempt to access index 2:" << std::endl << ints[2] << std::endl;
		std::cout << "Attempt to access index 6:" << std::endl << ints[6] << std::endl;
	}
	catch(std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Array <std::string> strings(4);
	std::cout << "String array:";
	try 
	{
		strings[0] = "nick";
		strings[1] = "kuipers";
		strings[2] = "codam";
		strings[3] = "42";
		std::cout << std::endl;
		for(int i = 0; i < 4; i++)
			std::cout << strings[i] << " ";
		std::cout << std::endl;
		std::cout << "Attempt to access index 2:" << std::endl << strings[2] << std::endl;
		std::cout << "Attempt to access index 6:" << std::endl << strings[6] << std::endl;
	}
	catch(std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Array<double> doubles(5);
	try 
	{
		std::cout << "Array of doubles:" << std::endl;
		for(int i = 0; i < 5; i++) 
		{
			doubles[i] = i * 0.5397;
			std::cout << doubles[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Attempt to access index 2:" << std::endl << doubles[2] << std::endl;
		std::cout << "Attempt to access index 6:" << std::endl << doubles[6] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
