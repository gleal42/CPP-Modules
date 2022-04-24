/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 16:21:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ClapTrap grandfather("Old Guy");
	ScavTrap father("Moustache guy");
	FragTrap mother("Beautiful woman");
	DiamondTrap baby("Baby");
	DiamondTrap jeff;

	std::cout << std::endl;
	grandfather.attack("jeff");
	jeff.takeDamage(0);
	jeff.attack("Old Guy");
	baby.highFivesGuys();
	baby.guardGate();
	baby.whoAmI();
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby = jeff;
	baby.whoAmI();
	baby.beRepaired(100);

	return (0);
}