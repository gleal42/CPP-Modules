/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:33:59 by gleal             #+#    #+#             */
/*   Updated: 2022/04/20 20:34:04 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp" 

IMateriaSource::IMateriaSource()
{
    std::cout << "IMateriaSource Default Constructor" << std::endl;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &imateriasource)
{
    return *this;
}

IMateriaSource::IMateriaSource(const IMateriaSource &imateriasource)
{
    std::cout << "IMateriaSource Copy Constructor" << std::endl;
    *this = imateriasource;
}

IMateriaSource::~IMateriaSource()
{
    std::cout << "IMateriaSource Default Destructor" << std::endl;
}
