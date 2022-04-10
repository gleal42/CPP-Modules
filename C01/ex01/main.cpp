/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/10 20:06:42 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie  *horde = nullptr;
    int i = 0;

    horde = zombieHorde(2, "biiitch");
    while (i < 2)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
}
