/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/21 16:48:22 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {
private:
    AMateria *materias[4]; 
public:
    MateriaSource();
    MateriaSource &operator=(const MateriaSource &materiasource);
    MateriaSource(const MateriaSource &materiasource);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
