/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:53:10 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:58:32 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class AMateria;
class ICharacter;

class Character : public ICharacter{
private:
    AMateria materias[4];
public:
    Character();
    Character &operator=(const Character &character);
    Character(const Character &character);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
};

#endif
