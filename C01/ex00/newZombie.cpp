/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:36:28 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 18:13:42 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie(std::string newname)
{
    Zombie *nz;

    nz = new Zombie(newname);
    return (nz);
}
