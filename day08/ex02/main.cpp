/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 10:48:43 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/17 12:08:35 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{

    std::cout << "Here's the exact same code twice, used on my std::stack class and on default std::list class." << std::endl;
	std::cout << std::endl << "mutantstack:" << std::endl;
	MutantStack<int>	mstack;

	std::cout << "Check if the stack is empty: " << (mstack.empty() ? "Yes" : "No") << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Size is now: " << mstack.size() << std::endl;
	std::cout << "Top value is " << mstack.top() << std::endl;
	mstack.pop();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.pop();
	mstack.push(42);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Values:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Check if the stack is empty: " << (mstack.empty() ? "Yes" : "No") << std::endl;
	std::cout << "Size is now: " << mstack.size() << std::endl;
	std::stack<int> s(mstack);

	std::cout << std::endl << "std::list:" << std::endl;
	std::list<int>	lmstack;
	std::cout << "Check if the list is empty: " << (lmstack.empty() ? "Yes" : "No") << std::endl;
	lmstack.push_front(5);
	lmstack.push_front(17);
	std::cout << "Size is now: " << lmstack.size() << std::endl;
	std::cout << "Top value is " << lmstack.front() << std::endl;
	lmstack.pop_front();
	lmstack.push_front(3);
	lmstack.push_front(5);
	lmstack.push_front(737);
	lmstack.push_front(0);
	lmstack.pop_front();
	lmstack.push_front(42);

	MutantStack<int>::iterator lit = lmstack.begin();
	MutantStack<int>::iterator lite = lmstack.end();
	++lit;
	--lit;

	std::cout << "Values:" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << "Check if the list is empty: " << (mstack.empty() ? "Yes" : "No") << std::endl;
	std::cout << "Size is now: " << lmstack.size() << std::endl;
	std::stack<int> ls(mstack);

	return 0;
}
