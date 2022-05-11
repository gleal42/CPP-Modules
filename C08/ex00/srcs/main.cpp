/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:10:00 by gleal             #+#    #+#             */
/*   Updated: 2022/05/10 00:33:01 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

void vec_tests()
{
	std::cout << "Vector" << std::endl;
	int v[] = {1, 2, 3};
	std::vector<int> vec(v, v + sizeof(v)/sizeof(int));
	std::cout << *easyfind(vec, 1) << std::endl;
	std::cout << *easyfind(vec, 2) << std::endl;
	std::cout << *easyfind(vec, 3) << std::endl;
	try {
		std::cout << *easyfind(vec, 4) << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void deque_tests()
{
	std::cout << "Deque" << std::endl;
	int v[] = {1, 2, 3};
	std::deque<int> deq(v, v + sizeof(v)/sizeof(int));
	std::cout << *easyfind(deq, 1) << std::endl;
	std::cout << *easyfind(deq, 2) << std::endl;
	std::cout << *easyfind(deq, 3) << std::endl;
	try {
		std::cout << *easyfind(deq, 4) << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void lst_tests()
{
	std::cout << "List" << std::endl;
	int v[] = {1, 2, 3};
	std::list<int> lst(v, v + sizeof(v)/sizeof(int));
	std::cout << *easyfind(lst, 1) << std::endl;
	std::cout << *easyfind(lst, 2) << std::endl;
	std::cout << *easyfind(lst, 3) << std::endl;
	try {
		std::cout << *easyfind(lst, 4) << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void bad_tests()
{
	std::stack<int> first;
	for (int i=1; i<4; ++i)
		first.push(i);
	// std::cout << *easyfind(first, 1) << std::endl;
	std::queue<int> sec;
	for (int i=1; i<4; ++i)
		sec.push(i);
	// std::cout << *easyfind(sec, 1) << std::endl;
	std::priority_queue<int> thrd;
	for (int i=1; i<4; ++i)
		thrd.push(i);
	// std::cout << *easyfind(thrd, 1) << std::endl;
	int v[] = {1, 2, 3};
	(void)v;
	// std::cout << *easyfind(v, 1) << std::endl;
}

int main()
{
	vec_tests();
	deque_tests();
	lst_tests();
	bad_tests();
}
