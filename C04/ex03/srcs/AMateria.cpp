/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:06:29 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 01:30:16 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp" 

AMateria::AMateria()
{
    // std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    if (amateria.getType() != this->getType()) {
        std::cout << "Converting from one type to the other this way doesn't make sense." << std::endl
        << "Please create or clone a new Materia." << std::endl;
    }
    return *this;
}

AMateria::AMateria(const AMateria &amateria)
{
    // std::cout << "AMateria Copy Constructor" << std::endl;
    *this = amateria;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria Default Destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "No Materia specified to use against " << target.getName() << std::endl;
}
