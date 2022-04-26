/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:53:04 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 17:04:31 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp" 

Character::Character()
{
    for (size_t i = 0; i < 4; i++) {
        this->materias[i] = 0;
    }
    // std::cout << "Character Default Constructor" << std::endl;
}

Character::Character(std::string const name)
{
    // std::cout << "Character " << name << " was created" << std::endl;
    for (size_t i = 0; i < 4; i++) {
        this->materias[i] = 0;
    }
    this->name = name;
}

Character &Character::operator=(const Character &character)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i] != 0){
            delete this->materias[i];
            this->materias[i] = 0;
        }
        if (character.materias[i] != 0) {
            this->materias[i] = character.materias[i]->clone();
        }
    }
    return *this;
}

Character::Character(const Character &character)
{
    // std::cout << "Character Copy Constructor" << std::endl;
    *this = character;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i] != 0){
            delete this->materias[i];
            this->materias[i] = 0;
        }
    }
    // std::cout << "Character Default Destructor" << std::endl;
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (m == 0)
        return ;
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i] == 0){
            this->materias[i] = m;
            return ;
        }
    }
    // std::cout << "Couldn't equip materia " << m->getType() << " because all spots were filled" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || this->materias[idx] == 0) {
        return ;
    }
    std::cout << "Unequipping Materia index " << idx << " from " << this->name << std::endl;
    drop_materia(this->materias[idx]);
    this->materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3) {
        std::cout << "Index out of range" << std::endl;
        return ;
    }
    if (this->materias[idx]) {
        this->materias[idx]->use(target);
    }
}

void Character::drop_materia(AMateria *materia)
{
    this->floor = materia;
}

void Character::delete_floor()
{
    delete this->floor;
    this->floor = 0;
}