/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:51:42 by gleal             #+#    #+#             */
/*   Updated: 2022/04/10 17:16:19y gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

enum e_num{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	OTHER,
} num;

enum e_num type_of_complaint( std::string level )
{
	std::string lst[4];
	size_t i;
	enum e_num found;

	i = 0;
	found = OTHER;
	lst[0] = "DEBUG";
	lst[1] = "INFO";
	lst[2] = "WARNING";
	lst[3] = "ERROR";
	while (i < 4)
	{
		((level == lst[i]) && (found = (enum e_num)i));
		i++;
	}
	return (found);
}

void	Harl::complain( std::string level )
{
	void (Harl::*fts[5])();

	fts[0] = &Harl::debug;
	fts[1] = &Harl::info;
	fts[2] = &Harl::warning;
	fts[3] = &Harl::error;
	fts[4] = &Harl::other;
	num = type_of_complaint(level);
	(this->*(fts[num]))();
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
void	Harl::other( void )
{
	std::cerr << "This type of comment doesn't exist" << std::endl;
}