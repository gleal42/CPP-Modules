/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:18:23 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 22:13:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap()
{
	this->name = "jeff";
	ClapTrap::name = this->name + "_clap_name";
	std::cout << "DiamondTrap Default constructor was called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name = name;
	std::cout << "DiamondTrap " << name << " was created" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap assignment overload was called" << std::endl;
	this->name = diamondtrap.name;
	this->ClapTrap::name = this->name + "_clap_name";
	this->hitpoints = diamondtrap.FragTrap::hitpoints;
	this->energy = diamondtrap.ScavTrap::energy;
	this->attackdamage = diamondtrap.FragTrap::attackdamage;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap " << name << " is now a copy of " << diamondtrap.name << std::endl;
	*this = diamondtrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Default destructor was called for " << name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << name 
	<< " and my ClapTrap name is " 
	<< ClapTrap::name 
	<< std::endl;
}