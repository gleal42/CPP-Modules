/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:39:40 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 14:59:59 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp" 

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " was created" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "FragTrap assignment overload was called" << std::endl;
	this->name = fragtrap.name;
	this->hitpoints = fragtrap.hitpoints;
	this->energy = fragtrap.energy;
	this->attackdamage = fragtrap.attackdamage;
	return *this;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::cout << "FragTrap " << name << " is now a copy of " << fragtrap.name << std::endl;
	*this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default destructor was called for " << name << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is asking for a positive high-five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitpoints == 0){
		std::cout << "FragTrap " << name << " has died already so they can't attack!" << std::endl;
		return ;
	} else if (energy == 0){
		std::cout << "FragTrap " << name << " doesn't have any energy left so they can't attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	energy--;
}
