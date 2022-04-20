/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:52:07 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>

class MateriaSource{
private:
    
public:
    MateriaSource();
    MateriaSource &operator=(const MateriaSource &materiasource);
    MateriaSource(const MateriaSource &materiasource);
    ~MateriaSource();
};

#endif
