/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:27:13 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 02:42:06 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp" 

Cure::Cure()
{
    setType("cure");
    // std::cout << "Cure Default Constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
    (void)cure;
    return *this;
}

Cure::Cure(const Cure &cure)
{
    // std::cout << "Cure Copy Constructor" << std::endl;
    *this = cure;
}

Cure::~Cure()
{
    // std::cout << "Cure Default Destructor" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *cure;

    cure = new Cure;
    return cure;     
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void Cure::setType(std::string const type)
{
    this->type = type;
}