/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:34:08 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:35:17 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>

class AMateria;

class IMateriaSource{
private:
    
public:
    IMateriaSource();
    IMateriaSource &operator=(const IMateriaSource &imateriasource);
    IMateriaSource(const IMateriaSource &imateriasource);
    ~IMateriaSource();
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif