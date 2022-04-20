/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:53:04 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:53:08 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp" 

Character::Character()
{
    std::cout << "Character Default Constructor" << std::endl;
}

Character &Character::operator=(const Character &character)
{
    return *this;
}

Character::Character(const Character &character)
{
    std::cout << "Character Copy Constructor" << std::endl;
    *this = character;
}

Character::~Character()
{
    std::cout << "Character Default Destructor" << std::endl;
}
