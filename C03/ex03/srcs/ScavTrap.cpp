/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:20:58 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 16:36:56 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp" 

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor was called" << std::endl;
	setstats();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " was created" << std::endl;
	setstats();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap assignment overload was called" << std::endl;
	this->name = scavtrap.name;
	this->hitpoints = scavtrap.hitpoints;
	this->energy = scavtrap.energy;
	this->attackdamage = scavtrap.attackdamage;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap " << name << " is now a copy of " << scavtrap.name << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default destructor was called for " << name << std::endl;
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

void ScavTrap::setstats()
{
	this->hitpoints = 100;
	this->energy = 50;
	this->attackdamage = 20;
}