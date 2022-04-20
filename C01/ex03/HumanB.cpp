/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:12:50 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 18:30:51 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	this->name = name;
	this->weapon = 0;
}

void HumanB::attack(void)
{
	if (this->weapon == 0)
	{
		std::cout << this->name << " can't attack because they have no weapons" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
	this->weapon = &wpn;
}
