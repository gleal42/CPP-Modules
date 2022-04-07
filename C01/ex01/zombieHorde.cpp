/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:16:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/07 01:01:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie  *horde;
    int i = 0;
    horde = new Zombie[N];
    while (i < N)
    {
        horde[i] = Zombie(name);
        i++;
    }
    return (horde);
}
