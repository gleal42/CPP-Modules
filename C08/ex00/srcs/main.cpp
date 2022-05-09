/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:10:00 by gleal             #+#    #+#             */
/*   Updated: 2022/05/09 22:34:11 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <array>
#include <deque>
#include <forward_list>
#include <iostream>

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

void arr_tests()
{
	std::cout << "Array" << std::endl;
	std::array<int, 3> arr = {1, 2, 3};
	std::cout << *easyfind(arr, 1) << std::endl;
	std::cout << *easyfind(arr, 2) << std::endl;
	std::cout << *easyfind(arr, 3) << std::endl;
	try {
		std::cout << *easyfind(arr, 4) << std::endl;
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

void fwd_lst_tests()
{
	std::cout << "Forward List" << std::endl;
	std::forward_list<int> fl;
	std::forward_list<int>::iterator it;

	fl.assign(1,1);
	fl.insert_after(1,1);

	std::cout << *easyfind(fl, 1) << std::endl;
	std::cout << *easyfind(fl, 2) << std::endl;
	std::cout << *easyfind(fl, 3) << std::endl;
	try {
		std::cout << *easyfind(fl, 4) << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	vec_tests();
	arr_tests();
	deque_tests();
	fwd_lst_tests();


	// std::array<int> arr(v, v + sizeof(v)/sizeof(int));

}
