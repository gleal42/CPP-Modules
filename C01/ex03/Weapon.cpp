/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:12:55 by gleal             #+#    #+#             */
/*   Updated: 2022/04/09 20:54:41 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string str)
{
	this->type = str;
}

Weapon::Weapon (std::string str)
{
	this->type = str;
}

Weapon::Weapon (void)
{

}

Weapon::Weapon(const Weapon &pt1)
{
	this->type = pt1.type;
}