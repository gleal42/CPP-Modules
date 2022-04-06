/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/06 20:55:16 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie  defaultzb("Default Zombie");
    Zombie  *alloczb = NULL;
    Zombie  *randomzb = NULL;

    defaultzb.announce();
    alloczb = (*alloczb).newZombie("Allocated Zombie");
    alloczb->announce();
    delete (alloczb);
    randomzb->randomChump("Random Zombie");
}