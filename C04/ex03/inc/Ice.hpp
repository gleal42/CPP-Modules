/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:00:34 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 17:00:36 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

#include "AMateria.hpp"

class ICharacter;
class Ice : public AMateria {
private:
    
public:
    Ice();
    Ice &operator=(const Ice &ice);
    Ice(const Ice &ice);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
    void setType(std::string const type);
};

#endif