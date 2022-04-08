/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 18:20:27 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie  defaultzb("Default Zombie");
    Zombie  *alloczb = NULL;

    defaultzb.announce();
    alloczb = newZombie("Allocated Zombie");
    alloczb->announce();
    delete (alloczb);
    randomChump("Random Zombie");
}
