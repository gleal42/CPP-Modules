/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:06:29 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 19:06:32 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp" 

AMateria::AMateria()
{
    std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    return *this;
}

AMateria::AMateria(const AMateria &amateria)
{
    std::cout << "AMateria Copy Constructor" << std::endl;
    *this = amateria;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Default Destructor" << std::endl;
}
