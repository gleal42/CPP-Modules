/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:20:58 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 02:42:00 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp" 

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " was created" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &claptrap)
{
	std::cout << "ScavTrap assignment overload was called" << std::endl;
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energy = claptrap.energy;
	this->attackdamage = claptrap.attackdamage;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap " << name << " is now a copy of " << scavtrap.name << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default destructor was called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitpoints == 0){
		std::cout << "ScavTrap " << name << " has died already so they can't attack!" << std::endl;
		return ;
	} else if (energy == 0){
		std::cout << "ScavTrap " << name << " doesn't have any energy left so they can't attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	energy--;
}
