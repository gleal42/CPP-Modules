/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:27:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:28:19 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>

class AMateria;
class ICharacter;

class Cure{
private:
    
public:
    Cure();
    Cure &operator=(const Cure &cure);
    Cure(const Cure &cure);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
