/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 16:16:52 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	ScavTrap momma("Momma");
	ScavTrap jeff;

	jeff.attack("Clap");
	clap.takeDamage(20);
	clap.attack("Momma");
	jeff.attack("Momma");
	momma.takeDamage(20);
	momma.beRepaired(20);
	momma.attack("jeff");
	jeff.takeDamage(20);
	momma.guardGate();
	jeff.attack("Momma");
	momma.takeDamage(20);
	jeff.attack("Momma");
	momma.takeDamage(20);
	jeff.attack("Momma");
	momma.takeDamage(20);
	jeff.attack("Momma");
	momma.takeDamage(20);
	jeff.attack("Momma");
	momma.takeDamage(20);

	std::cout << std::endl;
	std::cout << "NEW TESTS WITH CLAVTRAP POINTER" << std::endl;
	std::cout << std::endl;
	ClapTrap *test_one = new ScavTrap("test1");
	ClapTrap *test_two = new ClapTrap("test2");
	test_one->attack("test2");
	test_two->attack("test1");
	delete test_two;
	delete test_one;
	return (0);
}