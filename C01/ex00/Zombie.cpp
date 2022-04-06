/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/06 20:52:15 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie::Zombie(std::string newname)
{
    name = newname;
}

Zombie* Zombie::newZombie(std::string newname)
{
    Zombie *nz;

    nz = new Zombie(newname);
    return (nz);
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " was destroyed" << std::endl;
}

void    Zombie::randomChump( std::string name )
{
    Zombie rc(name);
    rc.announce();
}
