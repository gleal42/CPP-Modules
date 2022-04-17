/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 02:45:02 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	ScavTrap momma("Momma");
	ScavTrap jeff2;

	jeff2.attack("Clap");
	clap.takeDamage(20);
	clap.attack("Momma");
	momma.takeDamage(20);
	momma.beRepaired(20);
	momma.attack("clap");
	clap.takeDamage(20);
	momma.guardGate();
	jeff2.attack("Momma");
	momma.takeDamage(20);
	clap.attack("Momma");
	momma.takeDamage(20);
	jeff2.attack("Momma");
	momma.takeDamage(20);
	clap.attack("Momma");
	momma.takeDamage(20);
	jeff2.attack("Momma");
	momma.takeDamage(20);

	return (0);
}