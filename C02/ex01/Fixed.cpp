/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 14:44:26 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracbits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedpoint = 0;
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedpoint = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int Fixed::getRawBits( void ) const
{
	return (fixedpoint);
}
void Fixed::setRawBits( int const raw )
{
	this->fixedpoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	if (nbr > (INT_MAX >> this->fracbits) || nbr < (INT_MIN >> this->fracbits)) {
		std::cout << "Integer out of limits" << std::endl;
		this->fixedpoint = 0;
		return ;
	}
	std::cout << "Int constructor called" << std::endl;
	this->fixedpoint = nbr << fracbits;
}

Fixed::Fixed(const float nbr)
{
	if ((const int)nbr > (INT_MAX >> this->fracbits) || (const int)nbr < (INT_MIN >> this->fracbits)) {
		std::cout << "Float out of limits" << std::endl;
		this->fixedpoint = 0;
		return ;
	}
	std::cout << "Float constructor called" << std::endl;
	this->fixedpoint = (const int)roundf(nbr * (1 << fracbits));
}

float Fixed::toFloat( void ) const
{
	return ((float)fixedpoint/(float)(1 << fracbits));
}

int Fixed::toInt( void ) const
{
	return (this->fixedpoint >> fracbits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return stream;
}
