/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 04:20:03 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 04:20:34 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome(void) : _n(0)
{

}

Awesome::Awesome( int n ) : _n( n )
{
    
}

Awesome & Awesome::operator= (Awesome & a)
{
    _n = a._n;
    return *this;
}

bool Awesome::operator==( Awesome const & rhs ) const
{
    return (this->_n == rhs._n);
}
bool Awesome::operator!=( Awesome const & rhs ) const
{
    return (this->_n != rhs._n);
}

bool Awesome::operator>( Awesome const & rhs ) const
{
    return (this->_n > rhs._n);
}

bool Awesome::operator<( Awesome const & rhs ) const
{
    return (this->_n < rhs._n);
}

bool Awesome::operator>=( Awesome const & rhs ) const
{
    return (this->_n >= rhs._n);
}

bool Awesome::operator<=( Awesome const & rhs ) const
{
    return (this->_n <= rhs._n);
}

int Awesome::get_n() const
{
    return _n;
}

std::ostream & operator<<(std::ostream & o, const Awesome &a)
{
    o << a.get_n();
    return o;
}
