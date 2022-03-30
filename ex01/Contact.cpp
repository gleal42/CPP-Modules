/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:07:53 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 02:24:27 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void    Contact::add_fst_name(std::string str, std::string &ptr)
{
	fst_name = str;
	ptr.clear();
	std::cout << "You just added " << fst_name << " as a first name" << std::endl;
}

void    Contact::add_last_name(std::string str, std::string &ptr)
{
	last_name = str;
	ptr.clear();
	std::cout << "You just added " << last_name << " as a last name" << std::endl;
}

void    Contact::add_nickname(std::string str, std::string &ptr)
{
	nickname = str;
	ptr.clear();
	std::cout << "You just added " << nickname << " as a nickname" << std::endl;
}

void    Contact::add_phone_number(std::string str, std::string &ptr)
{
	phone_number = str;
	ptr.clear();
	std::cout << "You just added " << phone_number << " as a phone_number" << std::endl;
}

void    Contact::add_dark_secret(std::string str, std::string &ptr)
{
	dark_secret= str;
	ptr.clear();
	std::cout << "You just added " <<  dark_secret << " as a dark_secret" << std::endl;
}