/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/23 19:24:09 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
private:
	std::string name;
	unsigned int hitpoints;
	unsigned int energy;
	unsigned int attackdamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap &operator=(const ClapTrap &claptrap);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

