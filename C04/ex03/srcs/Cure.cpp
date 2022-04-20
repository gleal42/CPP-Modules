/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:27:13 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:27:18 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp" 

Cure::Cure()
{
    std::cout << "Cure Default Constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
    return *this;
}

Cure::Cure(const Cure &cure)
{
    std::cout << "Cure Copy Constructor" << std::endl;
    *this = cure;
}

Cure::~Cure()
{
    std::cout << "Cure Default Destructor" << std::endl;
}
