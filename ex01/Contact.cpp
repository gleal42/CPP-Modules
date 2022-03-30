/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:07:53 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 23:41:15 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void    Contact::add_text_to(int nbr)
{
	std::string	input;

	while (input.empty())
		getline(std::cin, input);
	if (nbr == FSTNAME)
	 	fst_name = input;
	else if (nbr == LASTNAME)
	 	last_name = input;
	else if (nbr == NICKNAME)
	 	nickname = input;
	else if (nbr == PHONENUMBER)
	 	phone_number = input;
	else if (nbr == DARKSECRET)
	 	dark_secret = input;
}

void    Contact::ask_for_input(int nbr)
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

bool	Contact::is_empty(void)
{
	if (fst_name.empty()
	&& last_name.empty()
	&& nickname.empty()
	&& phone_number.empty()
	&& dark_secret.empty())
		return (1);
	return (0);
}

void	Contact::print_cont(void)
{
	std::cout << fst_name << " ";	
	std::cout << last_name << " ";	
	std::cout << nickname << " ";	
	std::cout << phone_number << " ";	
	std::cout << dark_secret;	
}