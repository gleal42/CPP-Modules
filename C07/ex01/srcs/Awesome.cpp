/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:40:06 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 18:42:22 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome( void ) : _n( 42 )
{
    return;
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