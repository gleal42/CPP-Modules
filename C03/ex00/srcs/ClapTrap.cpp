/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:56 by gleal             #+#    #+#             */
/*   Updated: 2022/04/23 21:20:03 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp" 

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor was called" << std::endl;
	this->name = "jeff";
	this->hitpoints = 10;
	this->energy = 10;
	this->attackdamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " was created" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energy = 10;
	this->attackdamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energy = claptrap.energy;
	this->attackdamage = claptrap.attackdamage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor was called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitpoints == 0){
		std::cout << "ClapTrap " << name << " has died already so they can't attack!" << std::endl;
	} else if (energy == 0){
		std::cout << "ClapTrap " << name << " doesn't have any energy left so they can't attack!" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0) {
		std::cout << "ClapTrap " << name << " has died already so they can't take any more damage!" << std::endl;
	}
	else if (hitpoints > amount) {
		hitpoints -= amount;
		std::cout << "ClapTrap " << name << " has lost " << amount << " hitpoints ("
		<< hitpoints << " hitpoints left)" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " took " << amount << " damage, causing them "
		<< "to lose the remaining " << hitpoints << " hitpoints and die!" << std::endl;
		hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints == 0) {
		std::cout << "ClapTrap " << name << " has died already so they can't repair!" << std::endl;
	} else if (energy == 0) {
		std::cout << "ClapTrap " << name << " doesn't have any energy left so they can't repair!" << std::endl;
	} else {
		hitpoints += amount;
		std::cout << "ClapTrap " << name << " repaired itself, getting " << amount << " hitpoints back! (Now has "
		<< hitpoints << " hitpoints)!" << std::endl;
		energy--;
	}
}
