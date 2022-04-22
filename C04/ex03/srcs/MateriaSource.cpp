/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:05:53 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 02:54:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource Default Constructor" << std::endl;
    for (size_t i = 0; i < 4; i++){
        this->materias[i] = 0;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->materias[i] != 0){
            delete this->materias[i];
        }
        if (materiasource.materias[i] != 0) {
            this->materias[i] = materiasource.materias[i]->clone();
        }
    }
    return *this;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
    // std::cout << "MateriaSource Copy Constructor" << std::endl;
    *this = materiasource;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++) {
            delete this->materias[i];
        }
    // std::cout << "MateriaSource Default Destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == 0) {
        std::cout << "No Materia" << std::endl;
        return ;
    }
    for (size_t i = 0; i < 4; i++){
        if (this->materias[i] == 0) {
            this->materias[i] = materia;
            return ;
        }
    }
    // std::cout << "Couldn't learn materia " << materia->getType() << " because all spots were filled" << std::endl;
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++){
        if (this->materias[i] != 0 && this->materias[i]->getType() == type) {
            return (this->materias[i]->clone());
        }
    }
	return (0);
}