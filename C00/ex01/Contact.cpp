/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:07:53 by gleal             #+#    #+#             */
/*   Updated: 2022/04/05 21:12:48 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

int    Contact::has_non_printable_char(std::string	input)
{
    int length = input.length();
	int i = 0;
	while (i < length)
	{
        int c = input[i];
        if (!isprint(c))
            return (1);
		i++;
	}
	return (0);
}

void    Contact::add_text_to(int nbr)
{
	std::string	input;

	while (input.empty() || has_non_printable_char(input))
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

void	Contact::print_collumn(std::string str)
{
	std::string temp;

	if (str.length() > 10)
	{
		temp = str.substr(0, 9);
		std::cout << temp ;	
		std::cout << "." ;	
	}
	else
	{
		std::cout.flags (std::ios::right);
		std::cout.width(10);
		std::cout << str ;	
	}
}

void	Contact::print_template(const std::string &fst, const std::string &sec,const  std::string &thrd, const std::string &lst)
{
	std::cout << "|" ;	
	print_collumn(fst);
	std::cout << "|" ;	
	print_collumn(sec);
	std::cout << "|" ;
	print_collumn(thrd);
	std::cout << "|" ;
	print_collumn(lst);
	std::cout << "|" ;
	std::cout << std::endl;	
}

void	Contact::print_vals_template(std::string index)
{
	print_template(index, fst_name, last_name, nickname);
}

void	Contact::print_all_vals(void)
{
	std::cout << fst_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << dark_secret << std::endl;
}
