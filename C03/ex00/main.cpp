/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:13:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/16 23:34:50 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap mr("mister");
	ClapTrap jeff;

	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);
	mr.attack("jeff");
	jeff.takeDamage(2);
	jeff.beRepaired(1);

	return (0);
}