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
	int contact_nbr;
	std::string index;

	contact_nbr = 0;
	phbook.cont[contact_nbr].print_template("index", "first name", "last name", "nickname");
	while (!phbook.cont[contact_nbr].is_empty() && contact_nbr < 8)
	{
		index = std::to_string(contact_nbr);
		phbook.cont[contact_nbr].print_vals_template(index);
		contact_nbr++;
	}
	index.clear();
	if (contact_nbr == 0)
		return ;
	while (index.empty())
	{
		std::cout << "Please write a valid index for desired contact" << std::endl;
		getline(std::cin, index);
		if (index.empty())
			continue ;
		if (index.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cerr << "Value is not unsigned number" << std::endl;
			index.clear();
			continue ;
		}
		i = std::stoi(index);
		if (i < 0 || i >= contact_nbr)
		{
			std::cerr << "Value out of range" << std::endl;
			index.clear();
		}
	}
	phbook.cont[i].print_all_vals();
}

void    PhoneBook::ask_for_input(int nbr)
{
	static std::string questions[5] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"dark secret"
	};
	std::cout << "Please write your " << questions[nbr] << std::endl;
}

void PhoneBook::add_contact(PhoneBook &phbook, int i)
{
	int texttype;
	
	texttype = 0;
	while (texttype < 5)
	{
		ask_for_input(texttype);
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
