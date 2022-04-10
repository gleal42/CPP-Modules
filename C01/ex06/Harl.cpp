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
};

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
	enum e_num num;
	num = type_of_complaint(level);
	switch(num){
		case DEBUG:
			Harl::debug();
			Harl::info();
			Harl::warning();
			Harl::error();
			break ;
		case INFO:
			Harl::info();
			Harl::warning();
			Harl::error();
			break ;
		case WARNING:
			Harl::warning();
			Harl::error();
			break ;
		case ERROR:
			Harl::error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
	<< std::endl
	<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl
	<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl
	<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl
	<< std::endl;
}