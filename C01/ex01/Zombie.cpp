/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 18:56:06 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string newname)
{
    name = newname;
}

Zombie::Zombie(void)
{

}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " was destroyed" << std::endl;
}
