/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:05:48 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 19:22:41 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    std::string const &getType() const; //Returns the materia type
    AMateria &operator=(const AMateria &amateria);
    AMateria(const AMateria &amateria);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    ~AMateria();
};

#endif

// class AMateria
// {
// protected:
// [...] public:
// virtual AMateria* clone() const = 0;
// };