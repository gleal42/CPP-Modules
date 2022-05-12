/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:40:06 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 20:30:53 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

# include "Awesome.hpp" 

Awesome::Awesome() : _n( 42 )
{
    // std::cout << "Awesome Default Constructor" << std::endl;
}

Awesome::Awesome(const Awesome &awesome)
{
    // std::cout << "Awesome Copy Constructor" << std::endl;
    *this = awesome;
}

Awesome::~Awesome()
{
    // std::cout << "Awesome Default Destructor" << std::endl;
}

Awesome &Awesome::operator=(const Awesome &awesome)
{
    this->_n=awesome._n;
    return *this;
}

int Awesome::get( void ) const
{
    return this->_n;
}

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
    o << rhs.get();
    return o;
}