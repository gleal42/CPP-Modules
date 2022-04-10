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

void	Harl::complain( std::string level )
{
	std::map<std::string,void(Harl::*)()> lvl;
	std::map<std::string,void(Harl::*)()>::iterator it;
	lvl["DEBUG"] = &Harl::debug;
    lvl["INFO"] = &Harl::info;
    lvl["WARNING"] = &Harl::warning;
    lvl["ERROR"] = &Harl::error;
	it = lvl.find(level);
	if (it == lvl.end())
	{
		std::cerr << "This type of comment doesn't exist" << std::endl;
		return;
	}
	(this->*(it->second))();
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
