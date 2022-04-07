/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/07 01:07:26 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie  *horde = NULL;
    int i = 0;

    horde = horde->zombieHorde(2, "biiitch");
    while (i < 2)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
}
