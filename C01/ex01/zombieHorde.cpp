/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:16:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 18:45:25 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde;
    int i = 0;
    horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setname(name);
        i++;
    }
    return (horde);
}
