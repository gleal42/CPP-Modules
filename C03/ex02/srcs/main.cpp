/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 02:33:58 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	ScavTrap momma("Momma");
	FragTrap baby("Baby");

	baby.attack("Clap");
	clap.takeDamage(30);
	clap.attack("Baby");
	momma.attack("Baby");
	baby.takeDamage(30);
	baby.highFivesGuys();
	momma.attack("Baby");
	baby.takeDamage(30);
	momma.guardGate();
	momma.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);

	ClapTrap *test1 = new ScavTrap("Test 1");
	ClapTrap *test2 = new FragTrap("Test 2");
	ClapTrap *test3 = new ClapTrap("Test 3");
	test1->attack("test2");
	test2->attack("test3");
	test3->attack("test1");
	delete test3;
	delete test2;
	delete test1;

	return (0);
}