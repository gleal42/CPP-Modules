/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:26:14 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 02:12:07by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string> 
# include <iomanip>
# include "PhoneBook.hpp"

void PhoneBook::add_contact(PhoneBook &phbook, int i)
{
	std::string	input;

	std::cout << "Please write your first name" << std::endl;
	while (input.empty())
		getline(std::cin, input);
	phbook.cont[i].add_fst_name(input, input);
	std::cout << "Please write your last name" << std::endl;
	while (input.empty())
		getline(std::cin, input);
	phbook.cont[i].add_last_name(input, input);
	std::cout << "Please write your nickname" << std::endl;
	while (input.empty())
		getline(std::cin, input);
	phbook.cont[i].add_nickname(input, input);
	std::cout << "Please write your phone number" << std::endl;
	while (input.empty())
		getline(std::cin, input);
	phbook.cont[i].add_phone_number(input, input);
	std::cout << "Please write your dark secret" << std::endl;
	while (input.empty())
		getline(std::cin, input);
	phbook.cont[i].add_dark_secret(input, input);
}

int main(void)
{
	PhoneBook phbook;
	std::string input;
	int i = 0;
	std::cout << "Please enter one of the following commands: ADD/SEARCH/EXIT" << std::endl;
	while (1)
	{
		std::cout << "Enter command: ";
		getline(std::cin, input);
		if (std::strcmp(input.c_str(), "ADD") == 0)
		{
			phbook.add_contact(phbook, i);
			i = (i + 1) % 8;
		}
		else if	(std::strcmp(input.c_str(), "SEARCH") == 0)
			;
		else if (std::strcmp(input.c_str(), "EXIT") == 0)
			return (0);
	}
	return (0);
}
