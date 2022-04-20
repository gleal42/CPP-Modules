/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:23:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:27:00 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp" 

Ice::Ice()
{
    std::cout << "Ice Default Constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
    return *this;
}

Ice::Ice(const Ice &ice)
{
    std::cout << "Ice Copy Constructor" << std::endl;
    *this = ice;
}

Ice::~Ice()
{
    std::cout << "Ice Default Destructor" << std::endl;
}

AMateria* Ice::clone() const
{
    
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at <name> *";
}