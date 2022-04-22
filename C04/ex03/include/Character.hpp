/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:53:10 by gleal             #+#    #+#             */
/*   Updated: 2022/04/21 22:50:56 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
private:
    AMateria *floor;
    AMateria *materias[4];
    std::string name;
public:
    Character();
    Character(std::string const name);
    Character &operator=(const Character &character);
    Character(const Character &character);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria* m);
    void use(int idx, ICharacter& target);
    void unequip(int idx);
    void drop_materia(AMateria *materia);
    void delete_floor();
};

#endif
