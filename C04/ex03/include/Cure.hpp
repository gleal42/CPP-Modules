/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:27:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/21 14:42:02 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria {
private:
    
public:
    Cure();
    Cure &operator=(const Cure &cure);
    Cure(const Cure &cure);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
    void setType(std::string const type);
};

#endif
