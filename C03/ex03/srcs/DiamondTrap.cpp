/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:18:23 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 04:33:30 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor was called" << std::endl;
	this->name = "jeff";
	ClapTrap::name = this->name + "_clap_name";
	setstats();
}

DiamondTrap::DiamondTrap(std::string name)
{
	ScavTrap tempScav("temp_Scav");

	this->name = name;
	this->ClapTrap::name = this->name + "_clap_name";
	setstats();
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

/* 
	The attributes are shared among all inherited classes so I can't just call 
	FragTrap::hitpoints ScavTrap::energy... because they all refer to the same variables.
	ScavTrap is the last constructor to be called so the "Energy" attribute value is the
	only with the correct value so we save it so we can use it afterwards
*/

void DiamondTrap::setstats()
{
	int temp_energy = this->energy;
	this->FragTrap::setstats();
	this->energy = temp_energy;
	
}