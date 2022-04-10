/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:12:50 by gleal             #+#    #+#             */
/*   Updated: 2022/04/10 20:22:10 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	this->name = name;
	this->weapon = nullptr;
}

void HumanB::attack(void)
{
	if (this->weapon == nullptr)
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
