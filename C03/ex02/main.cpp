/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 14:54:50 by gleal            ###   ########.fr       */
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
	baby.takeDamage(30);
	baby.beRepaired(30);
	momma.attack("clap");
	clap.takeDamage(30);
	baby.highFivesGuys();
	momma.attack("Baby");
	baby.takeDamage(30);
	clap.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);
	clap.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);

	return (0);
}