/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:56 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 02:22:57 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp" 

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor was called" << std::endl;
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
	std::cout << "ClavTrap assignment overload was called" << std::endl;
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energy = claptrap.energy;
	this->attackdamage = claptrap.attackdamage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap " << name << " is now a copy of " << claptrap.name << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default destructor was called for " << name <<  std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitpoints == 0){
		std::cout << "ClapTrap " << name << " has died already so they can't attack!" << std::endl;
		return ;
	} else if (energy == 0){
		std::cout << "ClapTrap " << name << " doesn't have any energy left so they can't attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0){
		std::cout << "ClapTrap " << name << " has died already so they can't take any more damage!" << std::endl;
		return ;
	}
	if (hitpoints > amount){
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
	if (hitpoints == 0){
		std::cout << "ClapTrap " << name << " has died already so they can't repair!" << std::endl;
		return ;
	} else if (hitpoints + amount >= 100) {
		std::cout << "ClapTrap " << name << " repairs and has max health!" << std::endl;
		if (hitpoints < 100) {
			hitpoints = 100;
		}
		return ;
	} else if (energy == 0){
		std::cout << "ClapTrap " << name << " doesn't have any energy left so they can't repair!" << std::endl;
		return ;
	}
	hitpoints += amount;
	std::cout << "ClapTrap " << name << " repaired itself, getting " << amount << " hitpoints back! (Now has "
	<< hitpoints << " hitpoints)!" << std::endl;
	energy--;
}
