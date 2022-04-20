/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:18:41 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 19:18:46 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp" 

ICharacter::ICharacter()
{
    std::cout << "ICharacter Default Constructor" << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &icharacter)
{
    return *this;
}

ICharacter::ICharacter(const ICharacter &icharacter)
{
    std::cout << "ICharacter Copy Constructor" << std::endl;
    *this = icharacter;
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter Default Destructor" << std::endl;
}
