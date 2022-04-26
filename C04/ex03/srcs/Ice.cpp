/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:23:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 16:56:56 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp" 

Ice::Ice()
{
    // std::cout << "Ice Default Constructor" << std::endl;
    this->setType("ice");
}

// This does nothing but it requires implementation

Ice &Ice::operator=(const Ice &ice)
{
    if (this != &ice) {
        setType(ice.type);
    }
    return *this;
}

Ice::Ice(const Ice &ice)
{
    // std::cout << "Ice Copy Constructor" << std::endl;
    *this = ice;
}

Ice::~Ice()
{
    // std::cout << "Ice Default Destructor" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *ice;

    ice = new Ice;
    return ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void Ice::setType(std::string const type)
{
    this->type = type;
}