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

void PhoneBook::search_contacts(PhoneBook phbook)
{
	int i;

	i = 0;
	while (!phbook.cont[i].is_empty())
	{
		phbook.cont[i].print_cont();
		i++;
	}
}

void PhoneBook::add_contact(PhoneBook &phbook, int i)
{
	int texttype;
	
	texttype = 0;
	while (texttype < 5)
	{
		phbook.cont[i].ask_for_input(texttype);
		phbook.cont[i].add_text_to(texttype);
		texttype++;
	}
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
			phbook.search_contacts(phbook);
		else if (std::strcmp(input.c_str(), "EXIT") == 0)
			return (0);
	}
	return (0);
}
